#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6], mx = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    int a[] = {0, 1, 2, 3, 4};
    do{
        int zero = a[0];
        int one = a[1];
        int two = a[2];
        int three = a[3];
        int four = a[4];
        int sum = arr[zero][one] + arr[one][zero] + arr[one][two] + arr[two][one] + (arr[two][three] + arr[three][two]) * 2 + (arr[three][four] + arr[four][three]) * 2;
        mx = max(mx, sum);
    }
    while(next_permutation(a,a+5));
    cout << mx << endl;
}
