#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <char,char> mp;

    int mirr , pldm;
    string all = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string mir = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

    for(int i = 0; i < all.size(); i++) mp[all[i]] = mir[i];

    string s1;

    while(cin >> s1)
    {
        mirr = 1, pldm = 1;
        for(int i = 0; i < ((s1.size() / 2) + (s1.size() % 2)); i++)
        {
            if(s1[s1.size() - 1 - i] != mp[s1[i]]) mirr = 0;
        }
        for(int i = 0; i < (s1.size() / 2); i++)
        {
            if(s1[s1.size() - i - 1] != s1[i]) pldm = 0;
        }

        if(mirr && pldm) cout << s1 << " -- is a mirrored palindrome." << endl << endl;
        else if(mirr && !pldm) cout << s1 << " -- is a mirrored string." << endl << endl;
        else if(!mirr && pldm) cout << s1 << " -- is a regular palindrome." << endl << endl;
        else cout << s1 << " -- is not a palindrome." << endl << endl;
    }
}
