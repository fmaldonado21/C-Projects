//Francisco Maldonado
//CSCI 1010
//Assignment 6 - Question 4

#include<iostream>
using namespace std;

int main()
{
    int n, mean, highest, lowest, i;

    cout << "Please enter 10 grades: ";

    for(i = 1; i <= 10; i++)
    {
        cin >> n;
        if(i == 1)
        {
            lowest = n;
        }
        else
        {
            if(n < lowest)
            {
                lowest = n;
            }
        }
        if(i == 1)
        {
            highest = n;
        }
        else
        {
            if(n > highest)
            {
                highest = n;
            }
        }
        mean = (highest + lowest) / 2;
        
    }

    cout << "The highest grade is: " << highest << endl;
    cout << "The lowest grade is: " << lowest << endl;
    cout << "The mean of the grades is: " << mean << endl;

    return 0;
}