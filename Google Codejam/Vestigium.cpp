// Fully Solved
// CodeJam 2020, Qualification Round, Problem A, Vestigium

#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sf2d scanf("%d",&arr[i][j])

int main()
{
    int t, n, cs = 1;
    sft;
    while(t--)
    {
        sfn;
        int arr[n+2][n+2], trace = 0, row = 0, col = 0;

        for(int i = 1; i <= n; i++)
        {
            set <int> st;
            for(int j = 1; j <= n; j++)
            {
                sf2d;
                if(i == j)
                {
                    trace += arr[i][j];
                }
                st.insert(arr[i][j]);
            }
            if(st.size() != n)
            {
                row++;
            }
        }
        for(int i = 1; i <= n; i++)
        {
            set <int> st;
            for(int j = 1; j <= n; j++)
            {
                st.insert(arr[j][i]);
            }
            if(st.size() != n)
            {
                col++;
            }
        }
        printf("Case #%d: %d %d %d\n", cs++, trace, row, col);
    }
}
