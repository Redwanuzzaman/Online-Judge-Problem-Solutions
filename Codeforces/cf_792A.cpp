#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,minm,cnt=1;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    minm = abs(a[1]-a[0]);

    for(i=1; i<n-1; i++)
    {
        if(abs(a[i]-a[i+1]) < minm)
            {
                minm = abs(a[i]-a[i+1]);
                cnt = 1;
            }

        else if((abs(a[i]-a[i+1])) == minm)
            cnt++;
    }

    cout<<minm<<" "<<cnt<< endl;

    return 0;
}
