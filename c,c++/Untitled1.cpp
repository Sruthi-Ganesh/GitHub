#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
	int a[10][10],f[10][10]={0};
	int m,n,i,j;
	cin>>m;
	cin>>n;
	int input,count=1,store=0;
	for(int i=0;i<m;i++)
    {
    	
    	for(int j=0;j<n;j++)
	     {
	     	cin>>a[i][j];
	     	
	     	
		 }
	
	}
	
i=0;j=0;


	      x: if(f[i][j]==0 && (i<m-1 || j<n-1 ))
	     {
		 
	       f[i][j]==1;
	       

		if (a[i][j] == a[i][j+1])
			 {
			 		cout<<endl<<"1:"<<i<<j+1<<count;
			 j=j+1;
			 count++;
			 if(count>store)
			    store=count;
                   goto x;
			  
	     	 
	     	 
		}
		
	     	if(a[i][j] == a[i+1][j])
	     	  {
	     	  		cout<<endl<<"2:"<<i+1<<j<<count;
			   count++;
	     	  
			  i=i+1;
				if(count>store)
			    store=count;
                   goto x;
			   
			  
	     }
			
			   if(a[i][j] == a[i+1][j+1])
			   {
			   		cout<<endl<<"3:"<<i+1<<j+1<<count;
			   	i=i+1;
			   	j=j+1;
			   	count++;
			   	if(count>store)
			      store=count;
                   goto x;
            
			  	
			
			
		   }
		   if(a[i][j] == a[i-1][j-1])
			   {
			   	cout<<endl<<"4:"<<i-1<<j-1<<count;
			   	i=i-1;
			   	j=j-1;
			   	count++;
			   	if(count>store)
			      store=count;
                   goto x;
		    
			     
	 }
	     
}


cout<<endl<<store;
return 0;

}


