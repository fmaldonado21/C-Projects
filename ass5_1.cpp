#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << " Enter numbers, end by 0: " << endl;
    cin >> n;

    while(n != 0)
    {
        if(n%2==0)
    {
        sum += n;
    }
    cin >> n;
    }
    cout << "The sum is: " << sum << endl;
    return 0;

}