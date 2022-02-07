//Write a program to let the user enter two intergers
//and then prints the relationship between the two numbers



#include<iostream>
using namespace std;

int main()
{
    int x,y;

    cout << "Please enter two integers: ";
    cin >> x >> y;

    if(x > y)
    {
        cout << x << " is greater than " << y << endl;
    }
    else if(x < y)
    {
        cout << x << " is less than " << y << endl;
    }
    else if (x == y)
    {
        cout << x << " is equal to " << y << endl;
    }
    
    
}