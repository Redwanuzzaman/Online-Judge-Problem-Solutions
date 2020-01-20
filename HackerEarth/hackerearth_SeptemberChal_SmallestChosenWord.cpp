#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);
    string st1, st2, st3, x;
    cin >> st1 >> st2 >> st3;
    x = st2;
    sort(st2.begin(), st2.end());

    if(x == st2) cout << st1 << st2 << st3 << endl;
    else cout << st1 << st3 << endl;
}
