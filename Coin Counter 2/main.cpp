#include <iostream>
#include "Coin.h"
using namespace std;

int main()
{
    int choice;
    
    Coin coin;
    
    cout << "1 to enter total coin counts, 2 to manually coin coins: ";
    cin >> choice;
    
    if (choice==1)
    {
        coin.inputValuesAndDisplayTotals();
        coin.total();
    }
    
    else
    {
        coin.manuallyAddCoinsAndDisplayTotals();
    }

    cout << endl;
}
