#include<stdio.h>

int main()
{
	int n,t,i,d,g=0,k,p,q,x=0,m,j,e=0,r,z;
	char a[6],b[6],c,de[10]={'\0'},fn[10];
	bool boo;
	
	
	scanf("%d",&r);

	for(z=0;z<r;z++)
{
	scanf("%d %d",&n,&d);
    fflush(stdin);
	 
	 for (i = 0; i < sizeof(a) && (c=getchar()) != EOF && c != '\n';)
        a[i++] = c;
		
		 p = i;
		 
		 fflush(stdin);
	
		for (i = 0; i < sizeof(b) && (c=getchar()) != EOF && c != '\n';)
        b[i++] = c;
       
	    q=i;
        
		for (i = 0; i < p; i++)
        printf("\n %c", a[i]);
        
        
        for (i = 0; i < q; i++)
        printf("\n %c", b[i]);
		
		   
		   j=0;
 for(k=0;k<n;k++)
	 {
	 for(i=0;i<n;i++)
      { 
	   if(a[i]==b[i])
	     {
	     
	     
			for(m=0;de[m]!=a[i] && de[m]!='\0';m++)
			 {
			 	
			 }
			 if(de[m]=='\0')
			  x++;
			  
			
			 if(m==x-1)
			 {
			 de[j++]=a[i];
			 de[j]='\0';
			 g++;
			 
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
	    	
		t=a[i];
		a[i]=a[i+d];
		a[i+d]=t;
		}}} }
		
label:    if(g<n)
             fn[e++]='F';
}


for(z=0;z<r;z++)
{

 if(fn[z]=='T')
  printf("\n Yes");
 else 
   printf("\n no");
}
return 0;
}
