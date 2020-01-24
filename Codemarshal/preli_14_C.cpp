#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, dur, cs = 1;
    string mov, typ;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        vector <int> com, act, hor, anm;
        while(m--)
        {
            cin >> mov >> typ >> dur;
            if(typ == "Comedy")
            {
                com.push_back(dur);
            }
            else if(typ == "Action")
            {
                act.push_back(dur);
            }
            else if(typ == "Horror")
            {
                hor.push_back(dur);
            }
            else if(typ == "Animation")
            {
                anm.push_back(dur);
            }
        }
        int mx = 0;
        for(int i = 0; i < com.size(); i++)
        {
            for(int j = 0; j < act.size(); j++)
            {
                for(int k = 0; k < hor.size(); k++)
                {
                    for(int l = 0; l < anm.size(); l++)
                    {
                        if(com[i] + act[j] + hor[k] + anm[l] <= n)
                        {
                            mx = max(mx, com[i] + act[j] + hor[k] + anm[l]);
                        }
                    }
                }
            }
        }
        cout << "Case " << cs++ << ": ";
        if(mx > 0)
        {
            cout << mx << endl;
        }
        else
        {
            cout << "Movie show canceled!\n";
        }
    }
}
