#include <bits/stdc++.h>
using namespace std;
#define sfn scanf("%d",&n)
#define sf2d scanf("%d",&arr[i][j])

int main()
{
    int n, row, col;
    while(sfn == 1)
    {
        int arr[n][n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) sf2d;

        set <int> st;
        for(int i = 0; i < n; i++)
        {
            row = 0, col = 0;
            for(int j = 0; j < n; j++)
            {
                row += arr[i][j];
                col += arr[j][i];
            }
            st.insert(row);
            st.insert(col);
        }
        int left_diag = 0, right_diag = 0;
        for(int i = 0; i < n; i++)
        {
            left_diag += arr[i][i];
            right_diag += arr[n-i-1][i];
        }
        st.insert(left_diag);
        st.insert(right_diag);

        if(st.size() == 1) cout << "YES\n";
        else cout << "NO\n";
    }

}
