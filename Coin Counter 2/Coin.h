//
// Created by Joseph Lyons on 3/15/17.
// Copyright (c) 2017 Joseph Lyons. All rights reserved.
//

#ifndef COIN_H
#define COIN_H


class Coin
{
private:

    const float PENNY_VALUE   = 0.01;
    const float NICKEL_VALUE  = 0.05;
    const float DIME_VALUE    = 0.10;
    const float QUARTER_VALUE = 0.25;

    int pennyCount   = 0;
    int nickelCount  = 0;
    int dimeCount    = 0;
    int quarterCount = 0;

public:

    void inputValuesAndDisplayTotals();
    void getPennyCount();
    void getNickelCount();
    void getDimeCount();
    void getQuarterCount();

    void manuallyAddCoinsAndDisplayTotals();
    void displayTotal();
    float calculateTotal();
};


#endif //COIN_COUNTER_2_COIN_H
