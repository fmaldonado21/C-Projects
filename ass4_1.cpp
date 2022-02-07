//Write a program that ask the user to enter
//a lower case character, and then print a message
//telling the user whether or not the character is a vowel


#include<iostream>
using namespace std;

int main()
{
    char letter;

    cout << "Please enter a lowercase letter: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        cout << letter << " is a vowel \n";
    }
    else
    {
        cout << letter << " is not a vowel \n" ;
    }

}