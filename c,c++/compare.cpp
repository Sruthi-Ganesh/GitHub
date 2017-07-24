#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int a[100],b[100],n,x,i,j,f[100],g[100],s[100];
	
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
	 		cout<<i<<setw(2)<<j;
	 		cout<<endl<<f[i]<<setw(2)<<g[j];
	 		if(f[i]==0 && g[j] ==0 )
	 		{
	 		if(a[i]==b[j])
	 		  {
			 
			  f[i]=1;
			  g[j]=1;
			  	cout<<"same"<<endl<<a[i]<<endl<<b[j]<<endl;
			   }
		    }
			
	    }
     }
     
	 
	 i=0;
	 while(i<n)
     {
     	if(f[i]==0)
     	  {
		   s[i]=a[i];
		   i++;
     	  cout<<"a"<<endl<<a[i];
	 
	      }
	}
	 
   
  
   j=0;
    while(j<x)
     {
     	
     	if(g[j]==0)
     	  {
		   s[i]=b[j];
		   
		   cout<<"b"<<endl<<b[j]<<endl<<s[i]<<setw(2)<<i<<endl;
		   i++;
           }
		   j++;     	  
     
	 }
   
   cout<<"s";
   for(j=0;j<i;j++)
    cout<<endl<<endl<<s[i];

return 0;
}





	

