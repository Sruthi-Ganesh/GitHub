#include<stdio.h>
#include <stdlib.h>

int main()
{
char a[100];
int length = 0;
int number[10];
int i = 0, j=1;
char temp=' ';
do
{
	
	a[i++]=temp;
	scanf("%d",&number[j++]);
	scanf("%c",&temp);
	
}while(temp!='\n');
int k=1;
if((number[k]+number[k+1])==number[k+2])
{
	printf("\n+");
}
else if((number[k]-number[k+1])==number[k+2])
{
	printf("\n-");
}
else if((number[k]*number[k+1])==number[k+2])
{
	printf("\n*");
}
else if((number[k]/number[k+1])==number[k+2])
{
	printf("\n/");
}
return 0;
}
