#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        int nm = 0, sm = 0, cp = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z') sm++;
            else if(s[i] >= 'A' && s[i] <= 'Z') cp++;
            else nm++;
        }
        if(sm && nm && cp) cout << s << endl;
        else
        {
            if(!nm && !cp) s.replace(0,2,"M6");
            else if(!nm && !sm) s.replace(0,2,"m6");
            else if(!sm && !cp) s.replace(0,2,"Mr");
            else if(!nm && sm > 1)
            {
                for(int j = 0; j < s.size(); j++)
                {
                    if(s[j] >= 'a' && s[j] <= 'z')
                    {
                        s[j] = '3';
                        break;
                    }
                }
            }
            else if(!nm && cp > 1)
            {
                for(int j = 0; j < s.size(); j++)
                {
                    if(s[j] >= 'A' && s[j] <= 'Z')
                    {
                        s[j] = '3';
                        break;
                    }
                }
            }
            else if(!sm && cp > 1)
            {
                for(int j = 0; j < s.size(); j++)
                {
                    if(s[j] >= 'A' && s[j] <= 'Z')
                    {
                        s[j] = 'r';
                        break;
                    }
                }
            }
            else if(!sm && nm > 1)
            {
                for(int j = 0; j < s.size(); j++)
                {
                    if(s[j] >= '0' && s[j] <= '9')
                    {
                        s[j] = 'r';
                        break;
                    }
                }
            }
            else if(!cp && sm > 1)
            {
                for(int j = 0; j < s.size(); j++)
                {
                    if(s[j] >= 'a' && s[j] <= 'z')
                    {
                        s[j] = 'M';
                        break;
                    }
                }
            }
            else if(!cp && nm > 1)
            {
                for(int j = 0; j < s.size(); j++)
                {
                    if(s[j] >= '0' && s[j] <= '9')
                    {
                        s[j] = 'M';
                        break;
                    }
                }
            }
            cout << s << endl;
        }
    }
}
