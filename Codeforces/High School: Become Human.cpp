#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	if(log(x)*y > log(y)*x) cout<<">"<<endl;
	else if(log(x)*y < log(y)*x) cout<<"<"<<endl;
	else cout<<"="<<endl;
}
