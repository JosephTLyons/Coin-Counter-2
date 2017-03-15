#include <iostream>
#include <iomanip>
using namespace std;

class Coin
{
private:
    
    const float PENNY_VALUE   = 0.01;
    const float NICKELVALUE  = 0.05;
    const float DIMEVALUE    = 0.10;
    const float QUARTERVALUE = 0.25;
    
    int pennyInput   = 0;
    int NickelInput  = 0;
    int DimeInput    = 0;
    int QuarterInput = 0;
    
public:
    
    void inputValuesAndDisplayTotals();
    void manuallyAddCoinsAndDisplayTotals();
    void total();
};

int main()
{
    int choice;
    
    Coin Count;
    
    cout << "1 to enter total coin counts, 2 to manually count coins: ";
    cin >> choice;
    
    if (choice==1)
    {
        Count.inputValuesAndDisplayTotals();
        Count.total();
    }
    
    else
    {
        Count.manuallyAddCoinsAndDisplayTotals();
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
    cin >> NickelInput;
    cout << "total nickel value:  $" << NICKELVALUE*NickelInput;
    total();
    cout << endl;
    
    cout << "Input dime count:    ";
    cin >> DimeInput;
    cout << "total dime value:    $" << DIMEVALUE*DimeInput;
    total();
    cout << endl;
    
    cout << "Input quarter count: ";
    cin >> QuarterInput;
    cout << "total quarter value: $" << QUARTERVALUE*QuarterInput;
    total();
}

void Coin::manuallyAddCoinsAndDisplayTotals()
{
    char Choice2;
    
    cout << "\n'1' for penny,\n'2' for nickel,\n'3' for dime,\n'4' for quarter,\n'q' to quit\n";
    
    do
    {
        cout << "\nInput: ";
        cin >> Choice2;
        
        if (Choice2=='1')
            ++pennyInput;
        
        if (Choice2=='2')
            ++NickelInput;
        
        if (Choice2=='3')
            ++DimeInput;
        
        if (Choice2=='4')
            ++QuarterInput;
        
        cout << endl;
        
        cout << "Pennies:  " << pennyInput   << endl;
        cout << "Nickels:  " << NickelInput  << endl;
        cout << "Dimes:    " << DimeInput    << endl;
        cout << "Quarters: " << QuarterInput << endl;

        total();
    }
    while (Choice2!='q' && Choice2!='Q');
}

void Coin::total()
{
    cout << "\ntotal amount: $";
    
    cout << fixed << setprecision(2) << (PENNY_VALUE*pennyInput)+(NICKELVALUE*NickelInput)+(DIMEVALUE*DimeInput)+(QUARTERVALUE*QuarterInput);
    
    cout << "\n";
}