#include <bits/stdc++.h>
using namespace std;

bitset <100005> marked;
map <int, int> mp;

int main()
{
    int n, m, val;
    char cmd;

    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
    {
        marked[i] = 0;
    }
    while(m--)
    {
        cin >> cmd >> val;
        if(cmd == '+')
        {
            if(marked[val] == 1)
            {
                printf("Already on\n");
            }
            else
            {
                int tmp = 0;
                for(int i = 1; i * i <= val; i++)
                {
                    if(val % i == 0)
                    {
                        if(mp[i])
                        {
                            tmp = mp[i];
                        }
                        if(mp[val/i])
                        {
                            tmp = mp[val/i];
                        }
                    }
                }
                if(tmp)
                {
                    printf("Conflict with %d\n", tmp);
                }
                else
                {
                    marked[val] = 1;
                    printf("Success\n");
                    for(int i = 2; i * i <= val; i++)
                    {
                        if(val % i == 0)
                        {
                            mp[i] = val;
                            mp[val/i] = val;
                        }
                    }
                    if(val != 1)
                    {
                        mp[val] = val;
                    }
                }
            }
        }
        else
        {
            if(marked[val] == 0)
            {
                printf("Already off\n");
            }
            else
            {
                marked[val] = 0;
                printf("Success\n");
                for(int i = 2; i * i <= val; i++)
                {
                    if(val % i == 0)
                    {
                        mp[i] = 0;
                        mp[val/i] = 0;
                    }
                }
                mp[val] = 0;
            }
        }
    }
}
