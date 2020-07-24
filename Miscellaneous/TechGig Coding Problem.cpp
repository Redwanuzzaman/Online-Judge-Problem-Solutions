#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, N;
	cin >> t;
	while(t--)
    {
        cin >> N;
        int villains[N+1], players[N+1];
        bool result = true;

        for(int i = 0; i < N; i++)
        {
            cin >> villains[i];
        }
        for(int i = 0; i < N; i++)
        {
            cin >> players[i];
        }

        sort(villains, villains + N);
        sort(players, players + N);

        for(int i = 0; i < N; i++)
        {
            if(players[i] <= villains[i])
            {
                result = false;
            }
        }
        if(result)
        {
            cout << "WIN" << endl;
        }
        else
        {
            cout << "LOSE" << endl;
        }
    }
    return 0;
}
