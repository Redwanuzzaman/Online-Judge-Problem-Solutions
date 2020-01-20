#include <bits/stdc++.h>
using namespace std;

#define sfn scanf("%d",&n)
#define sfarr scanf("%d",&arr[i])
typedef long long ll;

int main()
{
    int n;
    sfn;
    int arr[n];
    for(int i = 0; i < n; i++) sfarr;
    for(int i = n-1; i > 0; i--)
        printf("%d ", arr[i]);
    printf("%d\n", arr[0]);
}
