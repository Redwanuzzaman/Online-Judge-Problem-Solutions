#include<bits/stdc++.h>
using namespace std;

int main()
{   double c,n,arr[1000];
   cin>>c;
   while(c--)
   {
       cin>>n;
       double sum=0;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
           sum=sum+arr[i];
       }
       double div=double(sum/n);
       int co=0;
       for(int i=0;i<n;i++)
       {
          if(arr[i]>div)co++;
       }
    printf("%.3lf%c\n",(double)(co/n)*100.00,'%');

   }
    return 0;
}
