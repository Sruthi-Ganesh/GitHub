#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
int n;
int a[10]={0};
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
double product = 0.00;
double temp = 1.00;
for(int i=1;i<n;)
{
        if(a[i+1]==0 && a[i-1]==0)
        {
            temp = 1;
        }
        else if(a[i-1]==0)
        {
            temp = a[i+1];
        }
        else if(a[i+1]==0)
        {
            temp = a[i-1] ;
        }
        else
        {
         temp = a[i+1] * a[i-1];
        }
       product += a[i] * temp;;
       
       a[i]=0;
    
    for(int j=i;j<n;j++)
    {
        if(a[j+1]!=0)
        {
            a[j]=a[j+1];
            
        }
     
    }
    a[n-1]=0;
    n--;
    if(n==1)
    {
    	i=0;
    	a[i-1]=0;
	}
}

cout<<endl<<product;
}
