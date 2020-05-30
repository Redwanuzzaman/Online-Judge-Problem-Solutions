#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)
#define sfx scanf("%d",&x)

int main()
{
    int t, n, x;
    sft;
    while(t--)
    {
        sfn;
        deque <int> dq;

        for(int i = 0; i < n; i++)
        {
            sfx;
            dq.push_back(x);
        }
        int alice = dq.front(), bob = 0, moves = 1, required = dq.front();
        string turn = "BOB";
        dq.pop_front();

        while(!dq.empty())
        {
            int current = 0;
            if(turn == "BOB")
            {
                while(!dq.empty() and current <= required)
                {
                    current += dq.back();
                    dq.pop_back();
                }
                bob += current;
                turn = "ALICE";
            }
            else
            {
                while(!dq.empty() and current <= required)
                {
                    current += dq.front();
                    dq.pop_front();
                }
                alice += current;
                turn = "BOB";
            }
            required = current;
            moves++;
        }
        cout << moves << " " << alice << " " << bob << endl;
    }
}
