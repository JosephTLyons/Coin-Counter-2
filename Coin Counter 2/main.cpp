#include <iostream>
#include "Coin.h"
using namespace std;

int main()
{
    int choice;
    Coin coin;
    
    cout << "(1) to enter displayTotal coin counts\n"
         << "(2) to manually coin coins\n\n"
         << "Choice: ";
    cin >> choice;
    
    if (choice==1)
    {
        coin.inputValuesAndDisplayTotals();
        coin.displayTotal();
    }
    
    else
    {
        coin.manuallyAddCoinsAndDisplayTotals();
    }

    cout << endl;
}
