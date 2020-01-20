#include <bits/stdc++.h>
using namespace std;

int adj[1002][1002];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int node, edge, n1, n2;
    cin >> node >> edge;
    for(int i = 1; i <= edge; i++)
    {
        cin >> n1 >> n2;
        if((adj[n1][n2] == 1) && (adj[n2][n1] == 1))
            cout << "old" << endl;
        else
        {
            cout << "new" << endl;
            adj[n1][n2] = 1;
            adj[n2][n1] = 1;
        }
    }
}
