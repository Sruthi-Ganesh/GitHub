#include<iostream>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a[100],b[100],n,x,i,j,f[100],g[100];
	
	cin>>n;
	
	for(i=0;i<n;i++)
	 {
	 	cin>>a[i];
	 	f[i]=0;
	 }
	
	cin>>x;
	
	for(i=0;i<x;i++)
	{ 
		 cin>>b[i];
		 g[i]=0;
	}

	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<x;j++)
	 	{
	 		if(f[i] && g[i] ==0 )
	 		{
	 		if(f[i]==g[i])
			  f[i]=g[i]=1;
			  	
			 }
		 }
	 }
	 
	
}
