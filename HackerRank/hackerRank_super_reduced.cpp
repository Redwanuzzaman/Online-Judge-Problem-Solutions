#include <bits/stdc++.h>

using namespace std;

string superReducedString(string s)
{
    int n = s.size();
    int arr[105];
    memset(arr, 1, sizeof arr);
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1])
        {
            arr[i] = 0;
            arr[i-1] = 0;
        }
        else
        {
            //arr[i] = 1;
            arr[i-1] = 1;
        }
    }
    string res = "";
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
            res = res + s[i];
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return res;
}

int main()
{

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    if(result.size() == 0)
        cout << "Empty String\n";
    else
        cout << result << endl;

    return 0;
}
