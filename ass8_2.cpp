//Francisco Maldonado
//CSCI 1010
//Assignment 8 - Question 2

#include<iostream>
#include<cmath>
using namespace std;

int poly(int x)
{
    int result;

    int p1,p2,p3,p4,p5;

    p1 = (3 * pow(x, 5));
    p2 = (2 * pow(x, 4));
    p3 = (5 * pow(x, 3));
    p4 = (1 * pow(x, 2));
    p5 = 7 * x;

    result = p1 + p2 - p3 - p4 + p5 - 6;

    return result;
}

int main()
{
    int x;

    cout << "Enter a value for x: ";
    cin >> x;

    cout << "The value of the polynomial is: " << poly(x) << endl;

    return 0;
}