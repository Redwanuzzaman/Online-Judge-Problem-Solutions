#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, cs =1;
    while(cin >> n && n)
    {
        int cnt = 0;
        while(n--){
            cin >> x;
            if(x > 0) cnt++;
            else cnt--;
        }
        cout << "Case " << cs++ << ": " << cnt << endl;
    }
}
