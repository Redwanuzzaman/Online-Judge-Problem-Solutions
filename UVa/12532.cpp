#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfqt scanf("%c",&qt)
#define sfl2 scanf("%d%d",&n,&q)
#define sfxy scanf("%d%d",&x,&y)
#define sfarr scanf("%d",&arr[i])
#define Max 100005
int arr[Max];
int tree[Max*4];

int convert(int k)
{
    if(k > 0) return 1;
    else if(k < 0) return -1;
    else return 0;
}
void init(int node, int beg, int endd)
{
    if(beg == endd)
    {
        tree[node] = convert(arr[beg]);
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + endd)/2;

    init(left, beg, mid);
    init(right, mid+1, endd);

    tree[node] = tree[left] * tree[right];
}

int query(int node, int beg, int endd, int x, int y)
{
    if(x > endd || y < beg) return 1;
    if(beg >= x && endd <= y)
    {
        int tmp = convert(tree[node]);
        return tmp;
    }

    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + endd)/2;

    int l = query(left, beg, mid, x, min(y, mid));
    int r = query (right, mid+1, endd, max(x, mid+1), y);

    if(l == -1 && r == -1) return 1;
    else if(!l || !r) return 0;
    else if(l == -1 || r == -1) return -1;
    else return 1;
}

void update(int node, int beg, int endd, int x, int val)
{
    val = convert(val);
    if(x > endd || x < beg) return;
    if(beg >= x && endd <= x)
    {
        tree[node] = val;
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (beg + endd)/2;

    update(left, beg, mid, x, val);
    update(right, mid+1, endd, x, val);

    tree[node] = tree[left] * tree[right];
}

int main()
{
    int t, n, q, x, y, cs = 1, res;
    char qt;
    while(sfl2 == 2)
    {
        string str = "";
        for(int i = 1; i <= n; i++) sfarr;
        init(1, 1, n);
        while(q--)
        {
            cin >> qt >> x >> y;
            if(qt == 'C')
            {
                update(1, 1, n, x, y);
            }
            else
            {
                res = query(1, 1, n, x, y);
                if(res > 0) str += '+';
                if(res < 0) str += '-';
                if(res == 0) str += '0';
            }
        }
        cout << str << endl;
    }
}
