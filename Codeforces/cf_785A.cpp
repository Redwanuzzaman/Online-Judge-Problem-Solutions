#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,output=0;
    string p;
    cin>>test;
    for(int i=0; i<test; i++)
    {
        cin>>p;

        if(p=="Icosahedron")
            output+= 20;
        if(p=="Tetrahedron")
            output+= 4;
        if(p=="Cube")
            output+= 6;
        if(p=="Octahedron")
            output+= 8;
        if(p=="Dodecahedron")
            output+= 12;
    }
    cout<<output<<endl;

    return 0;
}
