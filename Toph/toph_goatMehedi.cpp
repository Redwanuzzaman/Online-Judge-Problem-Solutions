#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    int large=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(large<arr[i].size())
        {
            large=arr[i].size();
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i].size()<=2){
            c=(large-(arr[i].size()+1))/2;
        for(int j=0;j<c;j++)
        {
            cout<<" ";
        }
            cout<<"baa"<<endl;
        }
        else
        {
             c=(large-(arr[i].size()-1))/2;
        for(int j=0;j<c;j++)
        {
            cout<<" ";
        }

        if((arr[i].size()-1)%2!=0)
        {
            for(int j=0;j<arr[i].size()-1;j++)
            {
                cout<<arr[i][j];
            }
        }
        else
        {
            for(int j=0;j<arr[i].size();j++)
            {
                cout<<arr[i][j];
            }
        }
        cout<<endl;
       }

 }


}

