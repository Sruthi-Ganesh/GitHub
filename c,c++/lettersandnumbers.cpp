#include <iostream>
#include <stdlib.h>
#include <ctype.h>
 
using namespace std;

int main(int argc, char** argv)
{
int a[100]={0};
char b[100];
int i=0;
char temp;
do
{
    scanf("%c",&temp);
    if(isdigit(temp))
    {
    	
    	a[i]=temp-'0';
    	b[i]=' ';
	}
	else
	{
	
    b[i]=temp;
    a[i]=0;
}
    i++;
}while(temp!='\n');

for(int j=0;j<i;j++)
{
	if(!isalpha(b[j]))
	{
		continue;
	}
	for(int k=j+1;k<i;k++)
	{
	int count=0;

	for(int m=0;m<a[k];m++)
	{
	
		cout<<b[j];
		count=1;
	}
	if( count==1)
	{
		break;
	}
	}
	
}



return 0;
}
