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

    getCoinCount(pennyCount, "Penny");
    displayTotalCoinValue(PENNY_VALUE, pennyCount, "Penny");
    displayOverallTotal();
    cout << endl;

    getCoinCount(nickelCount, "Nickel");
    displayTotalCoinValue(NICKEL_VALUE, nickelCount, "Nickel");
    displayOverallTotal();
    cout << endl;

    getCoinCount(dimeCount, "Dime");
    displayTotalCoinValue(DIME_VALUE, dimeCount, "Dime");
    displayOverallTotal();
    cout << endl;

    getCoinCount(quarterCount, "Quarter");
    displayTotalCoinValue(QUARTER_VALUE, quarterCount, "Quarter");
    displayOverallTotal();
    cout << endl;
}

void Coin::getCoinCount(int &coinCount, const char *coinName)
{
    cout << "Input "<< coinName << " count:   ";
    cin >> coinCount;
}

void Coin::displayTotalCoinValue(const float &coinValue, int &coinCount, const char *coinName)
{
    cout << "Total " << coinName << " value: $" << coinValue * coinCount;
}

void Coin::manuallyAddCoinsAndDisplayTotals()
{
    char choice;

    cout << "\n'1' for penny,\n'2' for nickel,\n'3' for dime,\n'4' for quarter,\n'q' to quit\n";

    do
    {
        cout << "\nInput: ";
        cin >> choice;

        if (choice == '1')
            ++pennyCount;

        if (choice == '2')
            ++nickelCount;

        if (choice == '3')
            ++dimeCount;

        if (choice == '4')
            ++quarterCount;

        cout << endl;

        cout << "Pennies:  " << pennyCount   << endl;
        cout << "Nickels:  " << nickelCount  << endl;
        cout << "Dimes:    " << dimeCount    << endl;
        cout << "Quarters: " << quarterCount << endl;

        displayOverallTotal();
    }
    while ((choice != 'q') && (choice != 'Q'));
}

void Coin::displayOverallTotal()
{
    float totalValue = calculateTotal();

    cout << "\nTotal amount: $";
    cout << fixed << setprecision(2) << totalValue << endl;
}

float Coin::calculateTotal()
{
    return   (PENNY_VALUE   * pennyCount)
           + (NICKEL_VALUE  * nickelCount)
           + (DIME_VALUE    * dimeCount)
           + (QUARTER_VALUE * quarterCount);
}
