#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to check THE NUMER IS EVEN OR ODD\n";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even number \n";
    }
    else
    {
        cout << "odd";
    }

    return 0;
}