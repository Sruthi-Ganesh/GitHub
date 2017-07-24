#include<stdio.h>
#include <stdlib.h>

int main()
{
    int  num;
    scanf("%d",&num);
char matrix[num][num];
char s1[num], s2[num];
int i,j,k=0;

for(i=0;i<num;i++)
{
    for(j=0;j<num;j++)
    {
         scanf("%c",&matrix[i][j]);
         
    }
}

getchar();
printf("enter string");
getchar();
scanf("%s",s1);

printf("\n %s",s1);

for(i=0;i<num;i++)
{
	for(j=0;j<num;j++)
	{
		printf("%c",matrix[i][j]);
	}
}
for(i=0;i<num;i++)
{
    
    for(j=0;i<num;j++) 
    {
        if(matrix[i][j]=='*' && s1[k]!='\0') 
        {
        	 printf("\n entered %c",s1[k]);
              matrix[i][j]=s1[k];
              k++;
        }
    }
}

return 0;
}
