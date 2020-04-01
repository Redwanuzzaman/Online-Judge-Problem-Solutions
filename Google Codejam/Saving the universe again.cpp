// CodeJam 2018, Qualification Round, Problem A, Fully Solved

#include <bits/stdc++.h>
using namespace std;

long long result(const string& str)
{
    long long res = 0;
    long long pow = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'S')
        {
            res += pow;
        }
        else
        {
            pow *= 2LL;
        }
    }
    return res;
}

int main()
{
    int numTests;
    cin >> numTests;
    for(int testCounter = 0; testCounter < numTests; ++testCounter)
    {
        printf("Case #%d: ", testCounter + 1);
        long long d;
        cin >> d;
        string str;
        cin >> str;
        int cnt = 0;
        bool survives = false;
        bool loop = true;
        while(loop)
        {
            if (result(str) <= d)
            {
                survives = true;
                break;
            }
            for (int i = (int) str.size() - 2; i >= 0; i--)
            {
                if (str[i] == 'C' && str[i + 1] == 'S')
                {
                    cnt++;
                    swap(str[i], str[i + 1]);
                    break;
                }
                if (i == 0)
                {
                    loop = false;
                }
            }
        }
        if (survives)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }
}
