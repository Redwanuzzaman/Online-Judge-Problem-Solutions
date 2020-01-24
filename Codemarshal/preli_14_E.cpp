#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, d1, d2, m1, m2, cs = 1;
    vector <int> v;

    v.push_back(0);
    v.push_back(31);
    v.push_back(28);
    v.push_back(31);
    v.push_back(30);
    v.push_back(31);
    v.push_back(30);
    v.push_back(31);
    v.push_back(31);
    v.push_back(30);
    v.push_back(31);
    v.push_back(30);
    v.push_back(31);

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d %d", &d1, &m1, &d2, &m2);

        cout << "Case " << cs++ << ": ";

        if((d1 > 12 && m1 > 12) || (d2 > 12 && m2 > 12))
        {
            cout << "I am sure there is some kinda mistake!\n";
        }
        else if(d1 == m1 && d1 == d2 && d1 == m2)
        {
            cout << "I am sure there is some kinda mistake!\n";
        }
        else if(d1 <= 12 && m1 <= 12 && d2 <= 12 && m2 <= 12)
        {
            if((d1 >= d2) && (m1 >= m2))
            {
                cout << "I am sure there is some kinda mistake!\n";
            }
            else if(d2 >= d1 && m2 >= m1)
            {
                cout << "Oh no it is ambiguous!\n";
            }
            else
            {
                cout << "Okay got it!\n";
            }
        }
        else if(d2 > d1 && d2 <= 12)
        {
            if(m1 <= v[d1] && m2 <= v[d2])
            {
                cout << "Okay got it!\n";
            }
            else
            {
                cout << "I am sure there is some kinda mistake!\n";
            }
        }
        else if(d1 == d2 && d1 <= 12)
        {
            if(m1 <= v[d1] && m2 <= v[d2] && m2 > m1)
            {
                cout << "Okay got it!\n";
            }
            else
            {
                cout << "I am sure there is some kinda mistake!\n";
            }
        }
        else if(m2 > m1 && m2 <= 12)
        {
            if(d1 <= v[m1] && d2 <= v[m2])
            {
                cout << "Okay got it!\n";
            }
            else
            {
                cout << "I am sure there is some kinda mistake!\n";
            }
        }
        else if(m1 == m2 && m1 <= 12)
        {
            if(d1 <= v[m1] && d2 <= v[m2] && d2 > d1)
            {
                cout << "Okay got it!\n";
            }
            else
            {
                cout << "I am sure there is some kinda mistake!\n";
            }
        }
        else
        {
            cout << "I am sure there is some kinda mistake!\n";
        }
    }
}
