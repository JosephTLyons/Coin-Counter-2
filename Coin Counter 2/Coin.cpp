//
// Created by Joseph Lyons on 3/15/17.
// Copyright (c) 2017 Joseph Lyons. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Coin.h"
using namespace std;

void Coin::inputValuesAndDisplayTotals()
{
    cout << fixed << setprecision(2) << endl;

    getPennyCount();
    cout << endl;

    getNickelCount();
    cout << endl;

    getDimeCount();
    cout << endl;

    getQuarterCount();
}

void Coin::getPennyCount()
{
    cout << "Input penny count:   ";
    cin >> pennyCount;
    cout << "displayTotal penny value:   $" << PENNY_VALUE * pennyCount;
    displayTotal();
}

void Coin::getNickelCount()
{
    cout << "Input nickel count:  ";
    cin >> nickelCount;
    cout << "displayTotal nickel value:  $" << NICKEL_VALUE * nickelCount;
    displayTotal();
}

void Coin::getDimeCount()
{
    cout << "Input dime count:    ";
    cin >> dimeCount;
    cout << "displayTotal dime value:    $" << DIME_VALUE * dimeCount;
    displayTotal();
}

void Coin::getQuarterCount()
{
    cout << "Input quarter count: ";
    cin >> quarterCount;
    cout << "displayTotal quarter value: $" << QUARTER_VALUE * quarterCount;
    displayTotal();
}

void Coin::manuallyAddCoinsAndDisplayTotals()
{
    char choice;

    cout << "\n'1' for penny,\n'2' for nickel,\n'3' for dime,\n'4' for quarter,\n'q' to quit\n";

    do
    {
        cout << "\nInput: ";
        cin >> choice;

        if (choice=='1')
            ++pennyCount;

        if (choice=='2')
            ++nickelCount;

        if (choice=='3')
            ++dimeCount;

        if (choice=='4')
            ++quarterCount;

        cout << endl;

        cout << "Pennies:  " << pennyCount   << endl;
        cout << "Nickels:  " << nickelCount  << endl;
        cout << "Dimes:    " << dimeCount    << endl;
        cout << "Quarters: " << quarterCount << endl;

        displayTotal();
    }
    while (choice!='q' && choice!='Q');
}

void Coin::displayTotal()
{
    float totalValue = calculateTotal();

    cout << "\nTotal amount: $";

    cout << fixed << setprecision(2) << totalValue;

    cout << "\n";
}

float Coin::calculateTotal()
{
    return   (PENNY_VALUE   * pennyCount)
           + (NICKEL_VALUE  * nickelCount)
           + (DIME_VALUE    * dimeCount)
           + (QUARTER_VALUE * quarterCount);
}
