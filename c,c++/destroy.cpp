#include<stdio.h>

int main()
{
	int n,t,i,d,g=0,k,p,q,x=0,m,j,e=0,r,z;
	char a[6],b[6],c,de[10]={'\0'},fn[10];
	bool boo;
	
	
	scanf("%d",&r);
	for(z=0;z<r;z++)
{
	
	printf("\n \n e is %d",e);	

scanf("%d",&n);
     
	 
	 
     scanf("%d",&d);
    
	
	fflush(stdin);
	 
	 for (i = 0; i < sizeof(a) && (c=getchar()) != EOF && c != ':';)
        a[i++] = c;
		
		 p = i;
		 
		 fflush(stdin);
	
		for (i = 0; i < sizeof(b) && (c=getchar()) != EOF && c != ';';)
        b[i++] = c;
       
	    q=i;
        
		
    
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

for(z=0;z<r;z++)
{

 if(fn[z]=='T')
  printf("\n Yes");
 else 
   printf("\n no");
}
return 0;
}
