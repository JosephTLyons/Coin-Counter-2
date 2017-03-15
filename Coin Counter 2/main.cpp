#include <iostream>
#include "Coin.h"
using namespace std;

int main()
{
    int choice;
    
    Coin count;
    
    cout << "1 to enter total coin counts, 2 to manually count coins: ";
    cin >> choice;
    
    if (choice==1)
    {
        count.inputValuesAndDisplayTotals();
        count.total();
    }
    
    else
    {
        count.manuallyAddCoinsAndDisplayTotals();
    }

    cout << endl;
}
