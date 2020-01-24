#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cs = 1;
    cin >> t;
    while(t--)
    {
        int cnt = 0;
        cin >> n;
        int arr[n][n];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        cout << "Case " << cs++ << ": ";
        if(n < 5) cout << 0 << endl;
        else if(n == 10)
        {
            for(int i = 0; i < n; i++)
            {
                set <int> st;
                for(int j = 0; j < n; j++)
                {
                    st.insert(arr[i][j]);
                }
                if(st.size() == 10) cnt++;
            }
            cout << cnt << endl;
        }
        else
        {
            for(int i = 0; i < n-1; i++)
            {
                set <int> st;

                for(int j = i; j <= i+1; j++)
                {

                    for(int k = 0; k < n; k++)
                    {
                        st.insert(arr[j][k]);
                    }
                }
                if(st.size() == 10) cnt++;
                st.clear();
            }
            cout << cnt << endl;
        }
    }
}
