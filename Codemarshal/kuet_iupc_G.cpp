#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>

using namespace std;

const int MAX = 3e4 + 10;

vector<pii>adj[MAX];
ll dist[MAX][2], lev[MAX];
bool vis[MAX], cycle[MAX], vis2[MAX];
int comp[MAX], cnt;

void init(int n)
{
    for(int i = 0; i <= n; i++)
    {
        adj[i].clear(), dist[i][0] = dist[i][1] = 0, vis[i] = 0, cycle[i] = vis2[i] = 0;
    }
    cnt = 0;
}

void dfs(int src, int par, int l)
{
    lev[src] = l;
    vis[src] = 1;
    comp[src] = cnt;

    // cout << "left "<< src << "<<\n";

    for(auto i : adj[src])
    {
        if(vis[i.first])
        {
            // cout<<i.first<<endl;
            if(i.first != par)
            {
                cycle[cnt] = 1;
            }
            continue;
        }
        dist[i.first][0] = dist[src][0] + i.second;
        dfs(i.first, src, l + 1);
    }
}
void dfs2(int src, int l)
{
    // cout<<"right "<<src<<endl;
    vis2[src] = 1;
    comp[src] = cnt;
    for(auto i : adj[src])
    {
        if(vis2[i.first])
        {
            continue;
        }
        dist[i.first][1] = dist[src][1] + i.second;
        dfs2(i.first, l + 1);
    }
}

int main()
{
    int t, cas = 1;

    scanf("%d", &t);

    while(t--)
    {
        int n, m, u, v, w;

        scanf("%d%d", &n, &m);

        init(n);

        for(int i = 0; i < m; i++)
        {
            scanf("%d%d%d", &u, &v, &w);
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        for(int i = 1; i <= n; i++)
        {
            if(vis[i] || vis2[i])
            {
                continue;
            }
            if(adj[i].size())
            {
                //cout << i << " << \n";
                lev[i] = 0;
                vis[i] = 1;
                vis2[i] = 1;
                comp[i] = ++cnt;
                dist[i][0] = dist[i][1] = 0;

                v = adj[i][0].first, w = adj[i][0].second;
                dist[v][0] = dist[i][0] + w;
                dfs(v, i, 1);
                // cout<<"end"<<endl;
                if(adj[i].size() > 1)
                {
                    v = adj[i][1].first, w = adj[i][1].second;

                    dist[v][1] = dist[i][1] + w;
                    dfs2(v, 1);
                }
            }
            else
            {
                vis[i] = 1;
                vis2[i] = 1;
                comp[i] = ++cnt;
                lev[i] = 0;
            }
        }

        int q;

        scanf("%d", &q);

        printf("Case %d:\n", cas++);
        while(q--)
        {
            scanf("%d%d", &u, &v);


            if(comp[u] != comp[v])
            {
                printf("-1\n");
            }
            else
            {
                if(lev[u] < lev[v])
                {
                    swap(u, v);
                }
                ll ans = 2e9;
                if(vis[u] && vis[v])
                {
                    ans = abs(dist[u][0] - dist[v][0]);
                }
                else if(vis2[u] && vis2[v])
                {
                    ans = abs(dist[u][1] - dist[v][1]);
                }
                else
                {

                    if(vis[u] && vis2[v])
                    {
                        ans = dist[u][0] + dist[v][1];
                    }
                    else if(vis2[u] && vis[v])
                    {
                        ans = dist[u][1] + dist[v][0];
                    }
                }

                if(cycle[comp[u]])
                {
                    ans = min(dist[v][0] + dist[u][1], ans);
                }

                printf("%lld\n", ans);
            }
        }
    }
}
