// square of no. till n 
#include <iostream>
using namespace std;
void SquareOfNum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "Square OF Numbers " << i<< " " << "is equal : " << i * i << endl;
    }
}

int main()
{
    int n;
    cout << "ENTER A NUMBER :" << endl;
    cin >> n;

      SquareOfNum(n);
return 0;
}