#include<bits/stdc++.h>
using namespace std;

int main()
{
    int contests, points, temp, temp2, cnt=0, cnt2=0;
    cin>>contests;

    for(int i=1; i<=contests; i++)
    {
        cin>>points;

        if(i==1)
        {
            temp = points;
            temp2 = points;
        }
        if(points > temp)
        {
            cnt++;
            temp = points;
        }
        if(points < temp2)
        {
            cnt2++;
            temp2 = points;
        }

    }

    cout<<cnt+cnt2<<endl;
    return 0;
}
