#include <iostream>
 #include<iomanip>
using namespace std;

int main(int argc, char** argv)
{
int number,a[100];
cin>>number;
for(int i=0;i<number;i++)
{
    cin>>a[i];
}
int value;
int k=0,count=0;
int temp;
for(int i=0;i<number-1;i++)
{
	for(int j=i+1;j<number;j++)
	{
		if(a[i]>a[j])
		{
			temp = a[i];
			a[i]=a[j];
			a[j]=temp;
			
					}
	}
}
cout<<"\n";
for(int i=0;i<number;i++)
{
	cout<<endl<<a[i];
}




for(int i=0;i<number-1;)
{
    value=a[i];
    for(int j=i+1;j<number;j++)
    {
    
        if(a[j]==value+1)
        {
            cout<<"\n"<<value<<" " <<a[j]<<" "<<k+1;
            value=a[j];
        
            k++;
        }
        else
        {
        	break;
		}
        
    }
    cout<<"\n "<<"end of i loop";
    if(k>0)
    {
        count++;
        i=i+k;
         k=0;
    }
    else
    {
    	i++;
	}
   
   
}
cout<<"\n"<<count;
}

