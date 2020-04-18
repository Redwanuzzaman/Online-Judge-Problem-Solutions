#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfarr scanf("%d",&arr[i])
#define sfbrr scanf("%d",&brr[i])

int main()
{
    int t, n;
    sft;
    while(t--)
    {
        sfn;
        int arr[n], brr[n];
        int one_pos = 1e7, neg_pos = 1e7, zero_pos = 1e7;
        bool one = true, neg = true, zero = true, res = true;
        for(int i = 0; i < n; i++)
        {
            sfarr;
            if(arr[i] == 1 && one)
            {
                one = false;
                one_pos = i;
            }
            else if(arr[i] == -1 && neg)
            {
                neg = false;
                neg_pos = i;
            }
            else
            {
                zero = false;
                zero_pos = i;
            }
        }
        for(int i = 0; i < n; i++)
        {
            sfbrr;
            if(brr[i] != arr[i] && i == 0)
            {
                res = false;
            }
            else if(brr[i] > arr[i])
            {
                if(one_pos >= i)
                {
                    res = false;
                }
            }
            else if(brr[i] < arr[i])
            {
                if(neg_pos >= i)
                {
                    res = false;
                }
            }
        }
        if(res) cout << "YES\n";
        else cout << "NO\n";
    }
}
