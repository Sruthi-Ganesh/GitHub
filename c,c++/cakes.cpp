#include<stdio.h>

int main()
{
	int n,t,i,d,g=0,k,p,q,x=0,m,j,e,r;
	char a[6],b[6],c,de[10]={'\0'},fn[10];
	
	printf("\n enter the tasks");
	scanf("%d",&r);
	for(e=0;e<r;e++)
{
	
	printf("\n \n e is %d",e);	
	printf("\n \n entered t value is %d",t);
printf("\n enter the number of layers");
scanf("%d",&n);
     
	 
	 printf("\n enter the  distance \n");
     scanf("%d",&d);
    
	printf("enter the cake made by the chef  ");
	fflush(stdin);
	 
	 for (i = 0; i < sizeof(a) && (c=getchar()) != EOF && c != ':';)
        a[i++] = c;
		
		 p = i;
		 printf("enter the cake desired  ");
		 fflush(stdin);
	
		for (i = 0; i < sizeof(b) && (c=getchar()) != EOF && c != ';';)
        b[i++] = c;
       
	    q=i;
        
		 printf("\n the entered string a");
    
	    for (i = 0; i < p; i++)
        printf("\n %c", a[i]);
        
        printf("\n the entered string b");
        for (i = 0; i < q; i++)
        printf("\n %c", b[i]);
		
		   
 
 j=0;
 for(k=0;k<n;k++)
	 {
	 for(i=0;i<n;i++)
      { 
	   if(a[i]==b[i])
	     {
	     	printf("\n \n The matching character is %c",a[i]);
	     
			
			 
	     	for(m=0;de[m]!=a[i] && de[m]!='\0';m++)
			 {
			 	printf("\n  the m value is %d for a=  %c and the de value is %c",m,a[i],de[m]);
			 }
			 if(de[m]=='\0')
			  x++;
			   printf("\n the value of x is %d",x);
			
			 if(m==x-1)
			 {
			 de[j++]=a[i];
			 de[j]='\0';
			 g++;
			 printf("\n  g value is %d",g);
		     }
	     	
			 if(g==n)
	     	  {
			   
			   fn[e++]='T';
	     	 goto label;
		 }}

	else
	    {
	    	
	    if(i+d<=n-1)
	    {
	    	printf("\n \n %d at %d = %c and %c  ",k,i,a[i],a[i+d]);
		t=a[i];
		a[i]=a[i+d];
		a[i+d]=t;
		}}} }
		
label:    if(g<n)
fn[e++]='F';
}
printf("\n \n The results are: \n ");
for(e=0;e<t;e++)
 printf("\n %c",fn[e]);
return 0;
}
