#include<stdio.h>
int main()
{
	int n,m,i,j,k;
	int max=0;
	int mat[100];
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&mat[i]);
	}
	for( i=0;i<n;i++)
	{
		
		for(k=0;k<m-1;k++ )
		{
		int sum=0;
		for(j=i+1;j<n;j++)
		
			
			{
				sum+=mat[i]+mat[j];
				printf("\n %d",mat[i]);
			}
			
		
		if(sum>max)
		{
			max=sum;
		}
	}}
	printf("\n hello %d",max);
	return 0;
}
