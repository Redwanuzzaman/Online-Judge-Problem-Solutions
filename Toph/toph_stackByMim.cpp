#include<bits/stdc++.h>
using namespace std;
vector <vector <int> > vct(1000);
int main()
{
    int test,cs = 1;
    cin >> test;
    while(test--)
    {
        int n;
        int q;
        cin >> n >> q;
        vct.clear();
        cout << "Case " << cs++ << ":" << endl;
        string str;
        for(int i = 0; i < q; i++)
        {
            cin >> str;
            int index,val;

            if(str == "push")
            {
                cin >> index >> val;
                index--;
                vct[index].push_back(val);
            }
            else if(str == "pop")
            {
                cin >> index;
                index--;
                if(vct[index].size() != 0)vct[index].pop_back();
            }
            else if(str == "top")
            {
                cin >> index;
                index--;
                if(vct[index].size() > 0) cout << vct[index][vct[index].size()-1] << endl;
                else cout << "Empty!\n";
            }
            else if(str == "put")
            {
                cin >> index >> val;
                index--,val--;
                for(int i = 0; i < vct[val].size(); i++)
                {
                    vct[index].push_back(vct[val][i]);

                }
                while(vct[val].size())
                {
                    vct[val].pop_back();
                }
            }
        }
    }
}

