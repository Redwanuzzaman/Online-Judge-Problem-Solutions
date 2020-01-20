#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t, cs = 1;
    cin >> t;
    getchar();
    while(t--)
    {
        string str, space;
        getline(cin, str);
        vector <string> tokens;
        stringstream check(str);

        while(getline(check, space, ' '))
            tokens.push_back(space);

        stringstream num(tokens[0]);
        int num1 = 0, num2 = 0;
        num >> num1;
        stringstream numm(tokens[2]);
        numm >> num2;

        printf("Case %d: ", cs++);
        if(tokens[1] == "*") cout << num1 * num2 << endl;
        else if(tokens[1] == "-") cout << num1 - num2 << endl;
        else cout << num1 + num2 << endl;
    }
}
