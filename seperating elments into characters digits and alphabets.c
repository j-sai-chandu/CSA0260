#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
int i,c=0,c1=0,c2=0;
printf("please enter your own string:\n");
gets(str);
for(i=0;i<strlen(str);i++){
	if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
	c=c+1;
}
	else if(str[i]>='0'&&str[i]<='9'){
	c1=c1+1;
}
   else if(str[i]==' '){
   	continue;
   }
   else{
   	c2=c2+1;
   }
}
	printf("total number of alphabets in string:%d\n",c);
	printf("total number of digits in string:%d\n",c1);
	printf("total number of characters in string:%d",c2);

}