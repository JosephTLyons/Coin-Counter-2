#include <iostream>
#include <iomanip>
using namespace std;

class Coin
{
private:
    
    const float PENNY_VALUE   = 0.01;
    const float NICKEL_VALUE  = 0.05;
    const float DIME_VALUE    = 0.10;
    const float QUARTER_VALUE = 0.25;
    
    int pennyInput   = 0;
    int nickelInput  = 0;
    int dimeInput    = 0;
    int quarterInput = 0;
    
public:
    
    void inputValuesAndDisplayTotals();
    void manuallyAddCoinsAndDisplayTotals();
    void total();
};

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
    
    cout << fixed << setprecision(2) << (PENNY_VALUE*pennyInput)+(NICKEL_VALUE*nickelInput)+(DIME_VALUE*dimeInput)+(QUARTER_VALUE*quarterInput);
    
    cout << "\n";
}