//Francisco Maldonado
//CSCI 1010
//Write a program to let the user enter a series of data (end by 0, 0 is not included in the data series), then find the largest number 

#include<iostream>
using namespace std;

int main()
{
    int num, largest;

    cout << "Enter numbers: ";
    cin >> num;
    largest = num;

    while(num != 0)
    {
        if(num > largest)
        {
            largest = num;
        }
        cin >> num;
    }

    cout << "largest: " << largest << endl;

    return 0;
}