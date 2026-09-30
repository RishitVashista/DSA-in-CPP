//  to find NCR value
#include <iostream>
using namespace std;
int factorialN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
     
    return (fact);
}
int nCR(int n, int r)
{
    int Fact_n = factorialN(n);
    int Fact_r = factorialN(r);
    int FACT_nmr = factorialN(n - r);
    return Fact_n / (Fact_r * FACT_nmr);
}

int main()
{
    int n, r;
    cout << "ENETR A NUMBER FACTORIAL FOR n :\n ";
    cin >> n;
    cout << "ENETR A NUMBER FACTORIAL FOR r : \n";
    cin >> r;
    cout<< nCR(n, r) ;
 return 0;
}