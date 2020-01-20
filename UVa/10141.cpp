#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, n;
    string x;
    int Count = 0;

    while (cin >> r >> n)
    {
        if(r == 0 && n == 0) break;
        Count++;

        double price = 2000000000, p;
        int max_req = -1, rm;
        string priority, prop;

        for (int i = 0; i < r; i++)
        {
            getchar();
            getline(cin, x);
        }

        while (n--)
        {
            getline(cin,prop);
            scanf("%lf %d\n", &p, &rm);
            if (rm > max_req)
            {
                max_req = rm;
                priority = prop;
                price = p;
            }
            else if (rm == max_req && p < price)
            {
                max_req = rm;
                priority = prop;
                price = p;
            }

            for (int i = 0; i < rm; i++)
            {
                getline(cin, x);
            }
        }
        //cout << "RFP #" << Count << endl << priority << endl << endl;
        if (Count > 1) cout << endl;
        cout << "RFP #" << Count << endl << priority << endl;
    }
    return 0;
}
