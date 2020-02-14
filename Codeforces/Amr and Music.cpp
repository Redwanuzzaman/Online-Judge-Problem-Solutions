#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, res = 0, sum = 0;
	cin >> n >> k;
	pair <int, int> p[n+1];
	vector <int> v;
	for(int i = 0; i < n; i++)
    {
        cin >> p[i].first;
        p[i].second = i+1;
    }
    sort(p, p+n);
    for(int i = 0; i < n; i++)
    {
        sum += p[i].first;
        if(sum > k) break;
        else
        {
            res++;
            v.push_back(p[i].second);
        }
    }
    cout << res << endl;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}
