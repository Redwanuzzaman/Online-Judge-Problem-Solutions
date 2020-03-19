// Litsey o`quvchilar uchun, problem: (D) Translation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <char, char> mp;
    string a = "CARScarsIuVEJxTXsUvOHhngyZKfAYmaqolMNtGQibwdjPrCpekFWzLaySBaPybRMgzYMynY";
    string b = "UnilEPFLvpVZzBNtLSCubWmaocIYneAPqxDshRkMGgJfHrFUQTjXOwdPolyProgisawesome";

    for(int i = 0; i < a.size(); i++)
    {
        mp[a[i]] = b[i];
    }
    mp['D'] = 'K';
    char s[100009];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        scanf(" %s",s);
        for(int j = 0; j < strlen(s); j++) cout << mp[s[j]];
        cout << " ";
    }
    cout << endl;

    return 0;
}
