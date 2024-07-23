#include <iostream>
#include "dog.h"

void swapNames( Dog& first, Dog& second){

}


int main() {
    int Option;
    string DogName, DogAge;
    bool DogOwner;
    string OwnerName, Address, FirstDog, SecondDog, Dog;
    Dog D;
    cout << "Enter 1 to add dog, 2 to swap names or 3 to stop:";
    cin >> Option;

    if (Option==1)
    {
        cout << "Please enter the name of the dog:";
        cin>> DogName;
        cout << "Please enter the age:";
        cin >> DogAge;
        cout << "Does the dog have an owner:";
        cin >> DogOwner;
        if (DogOwner=='yes')
        {
            cout << "Please enter the owners name:";
            cin >> OwnerName;
            cout << "Please enter the address:";
            cin >> Address;
        }
        else
        {
            OwnerName="hoping for adoption";
        }

    }
    else if (Option==2)
    {
        cout << "Enter name of first dog:";
        cin >> FirstDog;
        cout << "Enter name of second dog:";
        cin >> SecondDog;
        Dog=D;
        swapNames(Dog,SecondDog);
    }
    else 
    {

    }

    return 0;
}
