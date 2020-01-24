#include <bits/stdc++.h>
using namespace std;
#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)

int main()
{
    int t, n, cs = 1;
    sft;
    while(t--)
    {
        sfn;
        int solved, id, befPen, frzn, rankk[62];
        pair <int, int> p[62];
        vector < vector <int> > after(62);

        for(int i = 0; i < n; i++)
        {
            scanf("%d %d %d %d", &id, &solved, &befPen, &frzn);
            p[id].first = solved;
            p[id].second = befPen;

            for(int j = 0; j < frzn; j++)
            {
                int x;
                scanf("%d", &x);
                after[id].push_back(x);
            }
        }
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &rankk[i]);
        }
        int idx = rankk[0], now, prev;
        p[idx].first += after[idx].size();

        for(int x = 0; x < after[rankk[0]].size(); x++)
        {
            p[idx].second += after[idx][x];
        }
        bool flag = true;

        for(int i = 1; i < n; i++)
        {
            now = rankk[i];
            prev = rankk[i-1];

            if(p[now].first > p[prev].first)
            {
                flag = false;
                break;
            }
            else if((p[prev].first > p[now].first) && (!after[now].empty()))
            {
                while((p[prev].first > p[now].first) && (!after[now].empty()))
                {
                    if(((p[now].first + 1) == p[prev].first) && (!after[now].empty()))
                    {
                        int tmp = p[now].second;
                        tmp += after[now].front();

                        if(tmp < p[prev].second)
                        {
                            break;
                        }
                    }
                    p[now].first++;
                    p[now].second += after[now].front();
                    after[now].erase(after[now].begin());
                }
            }
            else if(p[now].first == p[prev].first)
            {
                if(p[now].second < p[prev].second)
                {
                    flag = false;
                    break;
                }
            }
        }

        printf("Case %d: ", cs++);
        if(flag == true)
        {
            printf("We respect our judges :)\n");
        }
        else
        {
            printf("Say no to rumour >:\n");
        }
        after.clear();
    }
}
