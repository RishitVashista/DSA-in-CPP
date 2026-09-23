#include <iostream>
using namespace std;
double divide(double a, double b)
{
   return (a / b);
}
int main()
{
   double a, b;
   cout << "Enter the VAlue for A:";
   cin >> a;
   cout << "Enter the VAlue for B: ";
   cin >> b;

   if (b == 0)
   {
      cout << "NOT DEFINE";
   }
   else
   {
      cout << "After dividing is =" << divide(a, b);
   }
   return 0;
}