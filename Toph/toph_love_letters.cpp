#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n == 1) return false;
    int i = 2;
    while(i*i <= n)
    {
        if(n % i == 0) return false;
        i++;
    }
    return true;
}

int main()
{
    int t, cs = 1, n;
    cin >> t;
    while(t--)
    {
        string s;
        int c = 0;
        cin >> n >> s;
        map <char, int> mp;
        map <char, int> :: iterator it;

        for(int i = 0; i < s.size(); i++) mp[s[i]]++;
        printf("Case %d:\n", cs++);
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(isPrime(it -> second))
            {
                cout << it -> first << " = " << it -> second << endl;
                c++;
            }
        }
        if(!c) cout << "Love is painful !\n";
    }
}
