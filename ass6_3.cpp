//Francisco Maldonado
//CSCI 1010
//Assignment 6 - Question 3


#include<iostream>
using namespace std;

int main()
{
    int thou, hun, tens, ones, sum, i = 1000;

    while(i < 9999)
    {
        i = i + 1;
        thou = i / 1000;
        hun = (i % 1000) / 100;
        tens = (i % 100) / 10;
        ones = i % 10;
        sum = thou + hun + tens + ones;
        bool a = false, b = false, c = false;

        if(thou == tens * 3)
        {
            a = true;
        }
        if(sum == 27)
        {
            b = true;
        }
        if(i % 2 != 0)
        {
            c = true;
        }
        if(a == true && b == true && c == true)
        {
            cout << i << endl;
        }
    }
    return 0;
}