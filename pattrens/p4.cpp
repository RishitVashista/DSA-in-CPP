#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << " " << endl;
    
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <=2*i+1; j++)
        {
            cout << "*"<<" ";
        }
         for(int j = 1 ; j <=n-i-1;j++){
        cout<<" ";}
         }
                return 0;
    

}