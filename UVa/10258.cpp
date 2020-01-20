#include <bits/stdc++.h>
using namespace std;

struct contestant
{
    int solved[10], attempt[10], penalty, counter;
};

map <int, contestant> mp;
vector <int> vct;

bool comparison(int a, int b)
{
    if (mp[a].counter != mp[b].counter)
        return (mp[a].counter > mp[b].counter);
    if (mp[a].penalty != mp[b].penalty)
        return (mp[a].penalty < mp[b].penalty);
    return (a < b);
}

int main()
{
    int t;
    stringstream ss;
    string str;
    getline(cin, str);
    ss.clear();
    ss << str;
    ss >> t;
    getline(cin, str);
    while(t--)
    {
        mp.clear();
        vct.clear();

        while(getline(cin, str))
        {
            int a, b, c;
            string d;
            if(str.empty()) break;
            ss.clear();
            ss << str;
            ss >> a >> b >> c >> d;
            if(mp.find(a) == mp.end())
            {
                contestant data;
                memset(data.solved, 0, sizeof(data.solved));
                memset(data.attempt, 0, sizeof(data.attempt));
                data.penalty = 0;
                data.counter = 0;
                vct.push_back(a);
                mp[a] = data;
            }
            if(d == "C" || d == "I")
            {
                if(mp[a].solved[b]) continue;

                if(d == "C")
                {
                    mp[a].solved[b] = 1;
                    mp[a].penalty += (20 * mp[a].attempt[b] + c);
                    mp[a].counter++;
                }
                else mp[a].attempt[b]++;
            }
        }
        sort(vct.begin(), vct.end(), comparison);

        for(int i = 0; i < vct.size(); i++)
        {
            printf("%d %d %d\n",vct[i], mp[vct[i]].counter, mp[vct[i]].penalty);
        }
        if(t) printf("\n");
    }
    return 0;
}
