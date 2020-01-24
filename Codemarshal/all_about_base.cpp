#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int t, cs = 1, base, num, mod;
    scanf("%d", &t);
    while(t--)
    {
        string res = "";
        scanf("%d %d", &base, &num);
        if(num == 0) res = "0";
        else
        {
            while(num)
            {
                mod = num % base;
                res += arr[mod];
                num /= base;
            }
        }
        reverse(res.begin(), res.end());
        cout << "Case " << cs++ << ": " << res << endl;
    }
}
