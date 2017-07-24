#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int number1,number2,i,j,count=0,n,m,sum[10],c=0,k,d=0,a;
	cout<<"\n enter no1";
	cin>>number1;
	cout<<"\n enter no2";
	cin>>number2;
	cout<<"To calculate the number of carries occurring in the addition of two numbers";
	n= number1;
	m= number2;
	while(n!=0 || m!=0)
	{
	cout<<"\n value of n and m"<<n<<m;
	    i = n%10;
		n = n/10;
		
	cout<<"\n value of i "<<i;
		j = m%10;
		m = m/10;
		cout<<"\n value of n and m"<<n<<m;
		
	
		cout<<"\n value of i and j"<<i<<j;
	    a=i+j;
	    
		if(a>=10)
		 count++;
		 
		 if(a%10+c>=10)
		 {
		 	d=(a%10+c)/10;
		 		sum[k++]=(a%10+c)%10;
		 }
		else
		sum[k++]=a%10+c;
		c=a/10+d;
		d=0;
	cout<<"\n exit of the loop";
	}

	if(c>0)
	{
		sum[k++]=c;
	}
	
	cout<<"\n the count for adding two numbers"<<count;
	for(i=0;i<=k;i++)
	cout<<"\n The sum is"<<sum[i];
	return 0;
}
