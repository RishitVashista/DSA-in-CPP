// TO find a sum untill a GIVEN VALUE BY USER
#include <iostream>
using namespace std;
int SumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "SUM IS EQUALS TO = " << sum;
    return (sum);
}
int main()
{
    int n = 10;
    SumN(n);
    return 0;
}