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
    cin >> pennyInput;
    cout << "displayTotal penny value:   $" << PENNY_VALUE * pennyInput;
    displayTotal();
}

void Coin::getNickelCount()
{
    cout << "Input nickel count:  ";
    cin >> nickelInput;
    cout << "displayTotal nickel value:  $" << NICKEL_VALUE * nickelInput;
    displayTotal();
}

void Coin::getDimeCount()
{
    cout << "Input dime count:    ";
    cin >> dimeInput;
    cout << "displayTotal dime value:    $" << DIME_VALUE * dimeInput;
    displayTotal();
}

void Coin::getQuarterCount()
{
    cout << "Input quarter count: ";
    cin >> quarterInput;
    cout << "displayTotal quarter value: $" << QUARTER_VALUE * quarterInput;
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
            ++pennyInput;

        if (choice=='2')
            ++nickelInput;

        if (choice=='3')
            ++dimeInput;

        if (choice=='4')
            ++quarterInput;

        cout << endl;

        cout << "Pennies:  " << pennyInput   << endl;
        cout << "Nickels:  " << nickelInput  << endl;
        cout << "Dimes:    " << dimeInput    << endl;
        cout << "Quarters: " << quarterInput << endl;

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
    return   (PENNY_VALUE   * pennyInput)
           + (NICKEL_VALUE  * nickelInput)
           + (DIME_VALUE    * dimeInput)
           + (QUARTER_VALUE * quarterInput);
}
