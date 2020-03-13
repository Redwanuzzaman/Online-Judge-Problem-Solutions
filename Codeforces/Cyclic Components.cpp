#include<bits/stdc++.h>
using namespace std;

vector <int> adj[300009];
int m[300009];
int u, v, f;
void dfs(int s)
{
     m[s] = 1;
    if(adj[s].size() != 2) f=0;
    for (auto a: adj[s])
    {
       if(m[a]==0) dfs(a);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    for(int i=1; i<=e; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        f = 1;
        if(m[i] == 0){
            dfs(i);
        if(f == 1) res++;
        }
    }
    cout << res << endl;

    return 0;
}
