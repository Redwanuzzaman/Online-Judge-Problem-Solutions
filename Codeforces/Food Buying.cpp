#include <bits/stdc++.h>
using namespace std;

int main()
{
     int test, num;
     cin >> test;
     while(test--)
     {
         cin >> num;

         int tmp = num, rem, sum = 0, div;
         while(tmp > 9)
         {
             div = tmp / 10;
             rem = tmp % 10;
             tmp = div + rem;
             sum += div;
         }

         cout << (num + sum) << endl;
     }
}
