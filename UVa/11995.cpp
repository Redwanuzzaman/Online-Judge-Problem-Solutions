#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cmd, elm;
    while(cin >> n)
    {
        stack <int> s;
        queue <int> q;
        priority_queue <int> pq;

        bool stk = true, que = true, prq = true;
        while(n--)
        {
            cin >> cmd >> elm;
            if(cmd == 1)
            {
                if(stk) s.push(elm);
                if(que) q.push(elm);
                if(prq) pq.push(elm);
            }
            else
            {
                if(!s.empty() && elm == s.top()) s.pop();
                else stk = false;

                if(!q.empty() && elm == q.front()) q.pop();
                else que = false;

                if(!pq.empty() && elm == pq.top()) pq.pop();
                else prq = false;
            }
        }
        if(stk && !que && !prq) cout << "stack" << endl;
        else if(!stk && que && !prq) cout << "queue" << endl;
        else if(!stk && !que && prq) cout << "priority queue" << endl;
        else if(!stk && !que && !prq) cout << "impossible" << endl;
        else cout << "not sure" << endl;
    }
}
