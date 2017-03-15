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

    cout << "Input penny count:   ";
    cin >> pennyInput;
    cout << "total penny value:   $" << PENNY_VALUE*pennyInput;
    total();
    cout << endl;

    cout << "Input nickel count:  ";
    cin >> nickelInput;
    cout << "total nickel value:  $" << NICKEL_VALUE*nickelInput;
    total();
    cout << endl;

    cout << "Input dime count:    ";
    cin >> dimeInput;
    cout << "total dime value:    $" << DIME_VALUE*dimeInput;
    total();
    cout << endl;

    cout << "Input quarter count: ";
    cin >> quarterInput;
    cout << "total quarter value: $" << QUARTER_VALUE*quarterInput;
    total();
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

        total();
    }
    while (choice!='q' && choice!='Q');
}

void Coin::total()
{
    cout << "\ntotal amount: $";

    cout << fixed << setprecision(2)
         << (PENNY_VALUE * pennyInput) + (NICKEL_VALUE * nickelInput) + (DIME_VALUE * dimeInput) + (QUARTER_VALUE * quarterInput);

    cout << "\n";
}
