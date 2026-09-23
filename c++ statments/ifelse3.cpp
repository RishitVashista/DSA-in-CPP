#include <iostream>
using namespace std;
int main()
{

    int Marks;
    cout << "Enter Your Marks to check the grade\n";
    cin >> Marks;
    if (Marks >= 90)
    {
        cout << "A+ grade \n Congratulations!  You are under 5 percent students";
    }
    else if (Marks >= 80)
    {
        cout << "A grade\n Congratulations!  You are under 15 percent students";
    }
    else if (Marks >= 65)
    {
        cout << "B Grade\n A little Hard Work Is needed";
    }
    else if (Marks >= 45)
    {
        cout << "C grade \n you need to work Very HArd";
    }
    else if (Marks >= 33)
    {
        cout << "D grade\n Work hard child";
    }
    else
    {
        cout << "Fail \n TRY AGAIN TO GET 90 IN NEXT TIME U R BEST  ";
    }
    return 0;
}