#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k,number=0;
	char   a [100][100];
	int num[100];
    char  b[100][100];
	scanf("%d",&n);
	fflush(stdin);
for(j=0;j<n;j++)
{

	i=j;
		
	      	
			scanf("%s[^\n]",a[i]);
	
			scanf("%d",&num[i]);
			int compare = num[i]+number;
			
			
			for(k=number;k<compare;k++)
			{
				scanf("%s[^\n]",b[k]);
				number++;
			}
			printf("\n %s %d %s \n",a[i],num[i],b[k-1]);
	i++;
}

for(i=0;i<n;i++)
{
	printf("\n Friends of John are : %s \n",a[i]);
}
 for(i=0;i<number;i++)
 {
 	printf("The new unselected friends are %s \n", b[i]);
 }


printf("\n New Friends are: ");
for(j=0;j<number;j++)
{
	int flag=0;
	for(k=0;k<n;k++)
	{
	
	if(strcmp((a[k]),b[j])!=0)
	{
	 //do nothing
	 flag++;
}

	}
	
	if(flag==n)
	{
		printf("\n Result : %s",b[j]);
	}
	else
	{
		printf("\n Not a Friend");
	}
	
}

return 0;
}
