#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, x;
    long long sum = 0;
    cin >> n;
    priority_queue <int> even, odd;
    while(n--)
    {
        cin >> x;
        if(x % 2 == 0) even.push(x * (-1));
        else odd.push(x * (-1));
    }
    int evsz = even.size();
    int odsz = odd.size();
 
    if(abs(evsz - odsz) <= 1) cout << 0 << endl;
    else
    {
        int diff = abs(evsz - odsz) - 1;
        if(evsz > odsz)
        {
            while(even.size() != (evsz - diff))
            {
                sum += even.top() * (-1);
                even.pop();
            }
        }
        else
        {
            while(odd.size() != (odsz - diff))
            {
                int t = odd.top();
                sum += t * (-1);
                odd.pop();
            }
        }
        cout << sum << endl;
    }
}
