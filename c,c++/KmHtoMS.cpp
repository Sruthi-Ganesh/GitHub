#include <iostream>
#include<iomanip>
 #include<tgmath.h>
using namespace std;

int main()
{
float number;
cin>>number;

float value = number * 5/18;
cout<<value<<"\n";
value=ceilf(value*100)/100;
int val = (int) value;
if(val==value)
{
    cout<<value;
}
else
{
cout<<fixed<<setprecision(2)<<value-0.005;
}
return 0;

}
