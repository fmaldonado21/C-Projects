//Francisco Maldonado
//CSCI 1010
//Assignment 8 - Question 1
//Writing a function to calculate GPA

#include<iostream>
#include<cmath>
using namespace std;

double compute_GPA(char grades0[], int size)
{
    float grade = 0;
    int i;
    for (i=0; i < size; i++)
    {
        if (grades0[i] == 'A')
        {
            grade += 4;
        }
        else if (grades0[i] == 'B')
        {
            grade += 3;
        }
        else if (grades0[i] == 'C')
        {
            grade += 2;
        }
        else if (grades0[i] == 'D')
        {
            grade += 1;
        }
        else if (grades0[i] == 'F')
        {
            grade += 0;
        }
    }
    grade /= size;
    return grade;
}

int main()
{
    float gpaA, gpaB;
    char studentA[] = {'A','A','B','A','D','C','A','A'};
    char studentB[] = {'B','B','D','F','A','A','B','A','A','D','A','B'};
    gpaA = compute_GPA(studentA, sizeof(studentA));
    gpaB = compute_GPA(studentB, sizeof(studentB));
    cout << "Student A's GPA: " << gpaA << endl;
    cout << "Student B's GPA: " << gpaB << endl;
}