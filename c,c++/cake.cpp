#include<stdio.h>

int main()
{
	int n,t,i,d,g=1,k;
	char a[5],b[5],c[5];
	
	printf("\n enter the tasks");
	scanf("%d",&t);
	
	printf("\n enter the no of layers ");
	for(i=0;i<t;i++)
	 {
	 scanf("%d",&n);
     
	 
	 printf("\n enter the  distance");
     for(i=0;i<t;i++)
    scanf("%d",&d);
    
	printf("\n enter the cake made by the chef for size %d",n);
	 for(i=0;i<n;i++)
      {
      	scanf("%c",&a[i]);
	 }
   
   printf("\n enter the cake desired");
   for(i=0;i<n;i++)
      {
      	scanf("%c",&b[i]);
      }
      
    for(k=0;k<n;k++)
	 
	 for(i=0;i<n;i++)
      { 
	   
	   if(a[i]==b[i])
	     
		 {
	     	g++;
	     	if(g==n)
	     	  printf("\n \n yes");
	     	  return 0;
		 }

	else
	    {
		t=a[i];
		a[i]=a[i+d];
		a[i+d]=t;
		}}	 }
    if(g!=n)
printf("\n \n no");
return 0;
}
