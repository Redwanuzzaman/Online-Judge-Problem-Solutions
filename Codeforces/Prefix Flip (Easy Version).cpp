#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)

int main()
{
    int t, n;
    sft;
    while(t--)
    {
        sfn;
        string in, out;
        cin >> in >> out;
        vector <int> ans;

        for(int i = 0; i < n-1; i++)
        {
            if(in[i] != in[i+1])
            {
                ans.push_back(i+1);
                if(in[0] == '0')
                {
                    in[0] = '1';
                }
                else
                {
                    in[0] = '0';
                }
            }
        }
        for(int i = n-1; i >= 0; i--)
        {
            if(out[i] != in[0])
            {
                ans.push_back(i+1);
                if(in[0] == '0')
                {
                    in[0] = '1';
                }
                else
                {
                    in[0] = '0';
                }
            }
        }
        cout << ans.size();
        for(int i = 0; i < ans.size(); i++)
        {
            cout << " " << ans[i];
        }
        cout << endl;
    }
}
