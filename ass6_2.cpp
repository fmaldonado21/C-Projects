//Francisco Maldonado 
//CSCI 1010
//Assignment 6 - Question 2


#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    int num, loop, sxty;

    loop = 0;
    sxty = 0;

    while(loop < 10)
    {
        cout << "please enter a number: ";
        cin >> num;
        if(num > 60)
        {
            sxty = sxty + 1;
        }
        loop = loop + 1;
    }
    cout << " There are " << sxty << " numbers greater than 60" << endl;

    return 0;
}