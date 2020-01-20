#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year,i,y1,y2,y3,y4;
    cin>>year;

    for(i=year+1; i<=9999; i++)
    {
        y1= i/1000;
        y2= (i/100) % 10;
        y3= (i/10) % 10;
        y4= i%10;

        if(y1!=y2 && y1!=y3 && y1!=y4 && y2!=y3 && y2!=y4 && y3!=y4)
        {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
