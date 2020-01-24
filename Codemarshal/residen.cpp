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
        if(n < 5)
        {
            cout << 0 << endl;
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                set <int> st;
                for(int j = 0; j < n; j++)
                {
                    st.insert(arr[i][j]);
                }
                if(st.size() == 10)
                {
                    cnt++;
                }
                st.clear();
            }
            for(int j = 0; j < n; j++)
            {
                set <int> st;
                for(int k = 0; k < n; k++)
                {
                    st.insert(arr[k][j]);
                }

                if(st.size() == 10)
                {
                    cnt++;
                }
                st.clear();
            }
            int column = n - 5;
            for(int i = 0; i < n-1; i++)
            {
                for(int j = 0; j <= column; j++)
                {
                    set <int> st;
                    for(int k = j; k < j+5; k++)
                    {
                        st.insert(arr[i][k]);
                        st.insert(arr[i+1][k]);
                    }
                    if(st.size() == 10)
                    {
                        cnt++;
                    }
                    st.clear();
                }
            }
            for(int i = 0; i < n-1; i++)
            {
                for(int j = 0; j <= column; j++)
                {
                    set <int> st;
                    for(int k = j; k < j+5; k++)
                    {
                        st.insert(arr[k][i]);
                        st.insert(arr[k][i+1]);
                    }
                    if(st.size() == 10)
                    {
                        cnt++;
                    }
                    st.clear();
                }
            }

            cout << cnt << endl;
        }
    }
}
//1 2 3 4 5 6 7 8 9 10
//2 3 4 5 6 7 8 9 10 1
//3 4 5 6 7 8 9 10 1 2
//4 5 6 7 8 9 10 1 2 3
//5 6 7 8 9 10 1 2 3 4
//6 7 8 9 10 1 2 3 4 5
//7 8 9 10 1 2 3 4 5 6
//8 9 10 1 2 3 4 5 6 7
//9 10 1 2 3 4 5 6 7 8
//10 1 2 3 4 5 6 7 8 9

//1 2 3 4 5 6 7 8 9 10
//6 7 8 9 10 2 3 4 5 1
//3 4 5 6 7 8 9 10 1 2
//4 5 6 7 8 9 10 1 2 3
//5 6 7 8 9 10 1 2 3 4
//6 7 8 9 10 1 2 3 4 5
//7 8 9 10 1 2 3 4 5 6
//8 9 10 1 2 3 4 5 6 7
//9 10 1 2 3 4 5 6 7 8
//10 1 2 3 4 5 6 7 8 9

//1 2 3 4 5 6 7
//6 7 8 9 10 1 2
//3 4 5 6 7 8 9
//5 8 1 2 3 4 5
//9 10 6 7 8 9 10
//1 2 3 4 5 6 7
//6 7 8 9 10 1 2
