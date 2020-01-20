#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double n1,n2;
    while(scanf("%lf %lf",&n1,&n2) != EOF)
    {
        double result= pow(n2,1.0/n1);
        printf("%0.lf\n",result);
    }
    return 0;
}
