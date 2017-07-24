#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
using namespace std;
void swap(int *x , int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}


int main()
{
	int a[100],b[100],n,x,i,j,f[100],g[100],s[100],ba=0;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 	
	 }
	
	for(i=0;i<n;i++)
	f[i]=0;
	
	cin>>x;
	
	for(i=0;i<x;i++)
	{ 
		 cin>>b[i];
		 
	}
	
	for(i=0;i<x;i++)
	g[i]=0;

	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<x;j++)
	 	{
	 		
	 		if(f[i]==0 && g[j] ==0 )
	 		{
	 		if(a[i]==b[j])
	 		  {
			 
			  f[i]=1;
			  g[j]=1;
			  	
			   }
		    }
			
	    }
     }
     
	 
	 i=0; 
	 while(i<n)
     {
     	 
     	if(f[i]==0)
     	  {
		   s[ba]=a[i];
		   ba++;
     	  
	      }
	      i++;
	}
	 
    
  
   j=0;
    while(j<x)
     {
     	
     	if(g[j]==0)
     	  {
		   s[ba]=b[j];
		   
		   
		   ba++;
           }
		   j++;     	  
     
	 }
   
   

  for(i=0;i<ba-1;i++)
   for(j=i+1;j<ba;j++)
     if(s[j]<s[i])
      swap(&s[i],&s[j]);
      
      
   for(j=0;j<ba;j++)
    cout<<s[j]<<setw(5);

return 0;
}





	

