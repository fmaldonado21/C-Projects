#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double sum = 0, i;
    int flag = 1;

    for(i=1 ; i<=99 ; i+=2)
    {
        if (flag == 1)
        {
            sum += 1/i;
            flag = 0;
        }
        else if (flag == 0)
        {
            sum -= 1/i;
            flag = 1;
        }
        
    }
    cout << "The value of pie is: " << 4 * sum << endl;
    return 0;
}