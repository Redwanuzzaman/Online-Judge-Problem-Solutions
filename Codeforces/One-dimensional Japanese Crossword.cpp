#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, c = 0;
	string s;
	cin >> n >> s;
	int a[n] = {0};
	for(int i = 0; i < n; i++)
		if(s[i] == 'B')
		{
			for(; s[i] == 'B'; i++) a[c]++;
			c++;
		}
	cout << c << endl;
	for(int i = 0; i < c; i++) cout << a[i] << ' ';
	cout << endl;
}
