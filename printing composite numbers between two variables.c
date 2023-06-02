#include<stdio.h>
int iscomposite(int n);
int main(){
	int a,b;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	for(int i=a+1;i<b;i++)
	{
		if(iscomposite(i)){
			printf("%d ",i);
		}
	}
}
int iscomposite(int n)
{
	if(n<4){
	
	return 0;
}
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return 1;
		}
	}
	return 0;
}