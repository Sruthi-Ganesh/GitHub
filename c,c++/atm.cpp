#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
int wa;
double bb;
cin>>wa>>bb;
if(wa<=bb && fmod(wa,5)==0)
 bb=bb-wa-0.50;
cout<<setprecision(2)<<fixed;
cout<<bb;
return 0;
}
