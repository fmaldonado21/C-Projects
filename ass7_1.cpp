#include<iostream>
using namespace std;

int main()
{
    int i, a[100];
    int greatest = 0;

    cout << "Enter some numbers, ended by -1: " << endl;

    for (int i = 0; i < 100; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
        {
            a[i] = 0;
            break;
        }
    }
    cout << endl;

    cout << "The current elements are: " << endl;

    for(int i = 0; i < 100; i++)
    {
        cin >> a[i];
        if(a[i] == -1)
        {
            a[i] = 0;
            break;
        }
    }
    cout << endl;

    cout << "The current elements are: " << endl;

    for(int i = 0; i < 100; i++)
    {
        if(a[i] == 0)
        {
            break;
        }
        else
        {
            cout << a[i] << "  ";
        }
        
    }
    cout << endl;

    for(int i = 0; i < 100; i++)
    {
        if(a[i] > greatest)
        {
            a[i] = greatest;
        }
        else if(a[i] == 0)
        {
            break;
        }
    }
    
    cout << "The largest number is: " << greatest << endl;

    for(int i = 0; i < 100; i++)
    {
        if(a[i] == 0)
        {
            a[i] = 10;
            break;
        }
    }

    for(int i = 0; i < 100; i++)
    {
        if(a[i] == 0)
        {
            a[i] = 15;
            break;
        }
    }

    cout << "Now the elements are: " << endl;

    for(int i = 0; i < 100; i++)
    {
        if(a[i] == 0)
        {
            break;
        }
        else
        {
            cout << a[i] << "  ";
        }
    }

    int len = 100;

    for(int i = 1; i < len; i++)
    {
        for(int j = 0; j < len - i; i++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < 100; i++)
    {
        if(a[i] == 0)
        {
            break;
        }
        else
        {
            cout << a[i] << "  ";
        }
    }
    return 0;
}