#include <bits/stdc++.h>
using namespace std;

int main()
{
    int frnds, hf, ht, sum = 0;
    cin >> frnds >> hf;
    while(frnds--){
		cin >> ht;
		if(ht > hf) sum += 2;
		else sum++;
	}
	cout << sum << endl;
}
