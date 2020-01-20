#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ov, ball;
    cin >> n;
    string s;
    while(n--)
    {
        int c = 0;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'N' || s[i] == 'W' || s[i] == 'D') continue;
            else c++;
        }
        ov = c / 6;
        ball = c % 6;
        if(ov == 0 && ball == 1) cout << "1 BALL" << endl;
        else if(ov == 0 && ball > 1) printf("%d BALLS\n", ball);
        else if(ov == 1 && ball == 1) printf("1 OVER 1 BALL\n");
        else if(ov > 1 && ball == 1) printf("%d OVERS 1 BALL\n", ov);
        else if(ov > 1 && ball == 0) printf("%d OVERS\n", ov);
        else if(ov == 1 && ball == 0) printf("1 OVER\n");
        else if(ov == 1 && ball > 1) printf("1 OVER %d BALLS\n", ball);
        else if(ov > 1 && ball > 1) printf("%d OVERS %d BALLS\n", ov, ball);
        else printf("0 BALL\n");
    }
}
