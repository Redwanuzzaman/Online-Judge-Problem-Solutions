#include<stdio.h>
int main(){
	int a, b, c, max=0;
	scanf("%d %d %d", &a, &b, &c);
	if(a+b+c>max) max = a+b+c;
	if(a*b*c>max) max = a*b*c;
	if(a+b*c>max) max = a+b*c;
	if(a*b+c>max) max = a*b+c;
	if((a+b)*c>max) max = (a+b)*c;
	if(a*(b+c)>max) max = a*(b+c);
	printf("%d\n",max);
	return 0;
}

