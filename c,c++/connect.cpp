#include<iostream>
#include<iomanip>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
	int f[10][10]={0},*a  ;
	int m,n,i,j;
	cin>>m;
	cin>>n;
	a= (int*) malloc(m*n* sizeof(int));
	
	int input,count=1,store=1;
	for(int i=0;i<m;i++)
    {
    	
    	for(int j=0;j<n;j++)
	     {
	     	cin>>*(a+m*i+j);
	     	
	     	
		 }
	
	}
	
i=0;j=0;


	      x: if(f[i][j]==0 && (0<=i || i<m || 0<=j || j<n ))
	     {
		 if(*(a+m*i+j)== *(a+m*i+(j+1)) || *(a+m*i+j) == *(a+m*(i+1)+j) || *(a+m*i+j) == *(a+m*(i+1)+(j+1)) ||*(a+m*i+j)== *(a+m*(i-1)+(j-1)) || *(a+m*i+j) == *(a+m*i+(j-1)) || *(a+m*i+j)== *(a+m*(i-1)+(j)) || *(a+m*i+j)== *(a+m*i+(j-1)) )
		 {
		 
	       f[i][j]==1;
	       
    
		if (*(a+m*i+j) == *(a+m*i+(j+1)))
			 {
			 	cout<<endl<<"1:"<<i<<j+1;
			 j=j+1;
			 count++;
			 if(count>store)
			    store=count;
                   goto x;
			  
	     	 
	     	 
		}
		
	     	if(*(a+m*i+j) == *(a+m*(i+1)+j))
	     	  {
	     	  	cout<<endl<<"2:"<<i+1<<j;
			   count++;
	     	  
			  i=i+1;
				if(count>store)
			    store=count;
                   goto x;
			   
			  
	     }
			
			   if(*(a+m*i+j) == *(a+m*(i+1)+(j+1)))
			   {
			   	cout<<endl<<"3:"<<i+1<<j+1;
			   	i=i+1;
			   	j=j+1;
			   	count++;
			   	if(count>store)
			      store=count;
                   goto x;
            
			  	
			
			
		   }
		   if(*(a+m*i+j) == *(a+m*i+(j-1)))
			   {
			   	cout<<endl<<"4th:"<<i-1<<j-1;
			   	i=i-1;
			   	j=j-1;
			   	count++;
			   	if(count>store)
			      store=count;
                   goto x;
		    
			     
	 }
	 	if(*(a+m*i+j)== *(a+m*(i-1)+(j)))
	 	
		 {
		 	cout<<endl<<"5:"<<i-1<<j;
		 i=i-1;
		
		count++;
		if(count>store)
			      store=count;
		goto x;
	}
	
		 if(*(a+m*i+j)== *(a+m*i+(j-1)))
		 {
		 cout<<endl<<"6:"<<i<<j-1;
				   j=j-1;
				   
				   count++;
				   if(count>store)
			          store=count;
				   goto x;
	     
}
	 if(*(a+m*i+j)== *(a+m*(i-1)+(j-1)))
		 {
		 cout<<endl<<"7:"<<i-1<<j-1;
				   j=j-1;
				   i=i-1;
				   
				   count++;
				   if(count>store)
			          store=count;
				   goto x;
	     
}
}
else
 {
 	i=i+1;
 	j=j+1;
 }


}




cout<<endl<<store;
return 0;

}


