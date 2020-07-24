#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  if (n < 2) return false;
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main()
{
    int t, n;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s >> n;
        int arr[s.size() + 5], f = 0;
        for(int i = 0; i < s.size(); i++)
        {
            arr[i] = int(s[i]) + n;
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(isPrime(arr[i]))
            {
                f = 1;
                break;
            }
        }
        if(f == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
