#include <bits/stdc++.h>

using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    map <string, int> counter;
    vector <int> ans;
    for(int i = 0; i < strings.size(); i++)
    {
        counter[strings[i]]++;
    }
    for(int i = 0; i < queries.size(); i++)
    {
        if(counter.find(queries[i]) == counter.end())
        {
            ans.push_back(0);
        }
        else
        {
            ans.push_back(counter[queries[i]]);
        }
    }
    return ans;
}

int main()
{
    int n, q;
    cin >> n;
    vector <string> str(n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        string x;
        getline(cin, x);
        str[i] = x;
    }
    cin >> q;
    getchar();
    vector <string> qry(q);

    for(int i = 0; i < q; i++)
    {
        string x;
        getline(cin, x);
        qry[i] = x;
    }

    vector <int> ans = matchingStrings(str, qry);

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}
