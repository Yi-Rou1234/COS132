#include <iostream>
// Got 5/5 for this
using namespace std;

int main() 
{
    int Number, Count, Factor;
    int Remainder;
    string YesorNo;
    
    cout<< "Enter a number to check:";
    cin >> Number;
    Factor =0;
        
        for (Count=1; Number>=Count; Count++)
        {
            Remainder= Number % Count;
            if (Remainder == 0) 
            {
            Factor++;
            }
        }   

        if ( Factor == 2)
        cout << "The number is prime." << endl;
        else
        {
        cout << "The number is not prime." << endl;
        }

        cout << "Execute check again (yes/no):";
        cin >> YesorNo;
    
        if (YesorNo== "yes")
            main();
        else
            return 0;
            
    return 0;
}
