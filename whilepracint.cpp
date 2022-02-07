//Francisco Maldonado
//CSCI 1010
//While practice
//Write a program to let the user enter a series of integers (ended with 0) and then sum up all the numbers

#include<iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "Enter integers (0 to terminate) ";
    cin >> num;

    while(num != 0)
    {
        sum += num;
        cin >> num;
    }

    cout << "The sum is " << sum << endl;

    return 0;


}