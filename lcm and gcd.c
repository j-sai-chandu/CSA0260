#include<stdio.h>
int main()
{
	int a,b,gcd;
	printf("enter the values of a and b ");
	scanf("%d%d",&a,&b);
	if(a>b)
	gcd=a%b;
	else
	gcd=b%a;
	printf("%d",gcd);
	
	
}