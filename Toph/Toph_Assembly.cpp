#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string cm;
map <char, ll> mp;

struct node
{
    string cm;
    char rg, rg2;
    ll val;
} arr[1005];

int main()

{
    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;
    mp['D'] = 0;
    mp['E'] = 0;
    mp['F'] = 0;
    mp['P'] = 0;

    ll id = 0, val1, val2;

    char ch;
    while(cin >> arr[id].cm)
    {
        if(arr[id].cm == "LOD")
        {
            cin >> arr[id].rg >> arr[id].val;
        }
        else if(arr[id].cm == "INC")
        {
            cin >> arr[id].rg;
        }
        else if(arr[id].cm == "ADD" || arr[id].cm == "MUL" || arr[id].cm == "CMP")
        {
            cin >> arr[id].rg >> arr[id].rg2;
        }
        else if(arr[id].cm[0] == 'J')
        {
            cin >> arr[id].val;
        }
        id++;
    }

    for(ll i = 0; i < id; i = mp['P'])
    {
        if(arr[i].cm == "LOD")
        {
            mp[arr[i].rg] = arr[i].val;
        }
        else if(arr[i].cm == "INC")
        {
            mp[arr[i].rg]++;
        }
        else if(arr[i].cm == "ADD")
        {
            mp[arr[i].rg] += mp[arr[i].rg2];
        }
        else if(arr[i].cm == "MUL")
        {
            mp[arr[i].rg] *= mp[arr[i].rg2];
        }
        else if(arr[i].cm == "JMP")
        {
            i = arr[i].val - 1;
            mp['P'] = i;
        }
        else if(arr[i].cm == "CMP")
        {
            if(mp[arr[i].rg] > mp[arr[i].rg2] )
            {
                mp['C'] = 1;
            }
            else if(mp[arr[i].rg] < mp[arr[i].rg2] )
            {
                mp['C'] = -1;
            }
            else if(mp[arr[i].rg] == mp[arr[i].rg2] )
            {
                mp['C'] = 0;
            }
        }
        else if(arr[i].cm == "JCZ")
        {
            if(mp['C'] == 0)
            {
                i = arr[i].val - 1;
                mp['P'] = i;
            }
        }
        else if(arr[i].cm == "JCP")
        {
            if(mp['C'] > 0)
            {
                i = arr[i].val - 1;
                mp['P'] = i;
            }
        }
        else if(arr[i].cm == "JCN")
        {
            if(mp['C'] < 0)
            {
                i = arr[i].val - 1;
                mp['P'] = i;
            }
        }
        else
        {
            break;
        }
        mp['P']++;
    }

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        if(it == mp.end())
        {
            cout << (it -> second) << endl;
        }
        else
        {
            cout << (it -> second) << " ";
        }
    }
}
