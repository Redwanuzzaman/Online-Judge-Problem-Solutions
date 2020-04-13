#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3, sum;
    cin >> s1 >> s2 >> s3;
    sum = s1 + s2;
    sort(sum.begin(),sum.end());
    sort(s3.begin(),s3.end());
    if(sum == s3) cout << "YES" << endl;
    else cout << "NO" << endl;
}
