#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 char  str[200];
 int x,y;
 int n=0,e=0;
 int i;
 printf("Enter a string");
 scanf("%[^\n]",&str);
 printf("%s",str);
 
 for( i=0; str[i]!='\0' ; i++)
 {
 	printf("\n entered");
 	
 		if(str[i]=='x')
 		{
 			printf("\n xloop");
 			i++;
 			printf("%c",str[i]);
 			x= str[i]-'0';
		 }
		 if(str[i]=='y')
		 {
		 	printf("\n yloop");
		 	i++;
		 	y=str[i]-'0';
		 }
		 
		 if(str[i]=='N')
		 {
		 	printf("\n Nloop");
		 	i++;
		 	n=n+str[i]-'0';
		 }
		 if(str[i]=='E')
		 {
		 	printf("\n Nloop");
		 	i++;
		 	e=e+str[i]-'0';
		 }
	 }
	 x = x+n;
	 y=y+e;
 
 printf("\n %d %d",x,y);
 
 return 0;
}
