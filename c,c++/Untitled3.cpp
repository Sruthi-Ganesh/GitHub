#include<iostream>
#include<stdlib.h>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
	int n,i,j,input,x,ba=0;
	vector <int> a,b;
	vector <int> f,g,s;
	cin>>n;
	for(i=0;i<n;i++)
	{
	
	cin>>input;
     a.push_back(input);     
     f.push_back(0);
}

	cin>>x;
	for(i=0;i<x;i++)
	{
	
	cin>>input;
     b.push_back(input);     
     g.push_back(0);
}
for(i=0;i<a.size();i++)
	 {
	 	for(j=0;j<b.size();j++)
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
	 while(i<a.size())
     {
     	
     	if(f[i]==0)
     	  {
		   s.push_back(a[i]);
		   ba++;
     	  
	      }
	      i++;
	}
	 
    
 
   j=0;
    while(j<b.size())
     {
     
     	
     	if(g[j]==0)
     	  {
		   s.push_back(b[j]);
		   
		   
		   ba++;
           }
		   j++;     	  
     
	 }
   
   

  for(i=0;i<ba-1;i++)
   for(j=i+1;j<ba;j++)
     if(s[j]<s[i])
       {
       	int z;
       	z=s[j];
       	s[j]=s[i];
       	s[i]=z;
	   }
      
      
   for(j=0;j<s.size();j++)
    cout<<s[j]<<setw(2);

return 0;
}
 



