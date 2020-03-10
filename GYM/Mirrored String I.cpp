// 2017 ACM Arabella Collegiate Programming Contest, problem: (H) Mirrored String I

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   string s1, s2;
   cin >> t;
   set <char> st;

   st.insert('A');
   st.insert('H');
   st.insert('I');
   st.insert('M');
   st.insert('O');
   st.insert('T');
   st.insert('U');
   st.insert('V');
   st.insert('W');
   st.insert('X');
   st.insert('Y');

   while(t--)
   {
       cin >> s1;
       s2 = s1;
       reverse(s2.begin(), s2.end());
       if(s1 == s2)
       {
           int f = 0;
           for(int i = 0; i < s1.size(); i++)
           {
               if(st.count(s1[i])) continue;
               else
               {
                   f = 1;
                   break;
               }
           }
           if(f == 0) cout << "yes" << endl;
           else cout << "no" << endl;
       }
       else cout << "no" << endl;
   }
}
