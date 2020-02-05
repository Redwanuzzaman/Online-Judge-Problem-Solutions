#include <bits/stdc++.h>
using namespace std;

int main()
{
   	int a, n, sum = 0;
	cin >> n >> a;
	int arr[n+1];
	for(int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	for(int i = 1; i < a && i <= n-a; i++)
	{
		if(arr[a+i] + arr[a-i] == 1)
		{
			sum--;
		}
	}
	cout << sum << endl;
}
