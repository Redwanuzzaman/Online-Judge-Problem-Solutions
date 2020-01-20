#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "X", r;
    getline(cin, r);
    //s += r;
    int c = 0;
    for(int i = 0; i < r.size(); i++)
    {
        int m = i%3;
        if((m == 2 || m == 0) && r[i] != 'S')
        {
            c++;
        }
        if(m == 1 && r[i] != 'O')
        {
            c++;
        }
    }
    cout << c << endl;

}
