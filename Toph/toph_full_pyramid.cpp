#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, ast;
    cin >> n;
    t = n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < t; j++)
            cout << " ";
        t--;
        ast = 2 * i - 1;
        for(int j = 1; j <= ast; )
        {
            cout << "*";
            j++;
            if(j < ast)
            {
                cout << " ";
                j++;
            }
        }
        cout << endl;
    }
}
