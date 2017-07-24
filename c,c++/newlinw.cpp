#include<iostream>
#include<iomanip>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	 int i=0,size,arr[10000];
    char temp; 
	 do{
        scanf("%d%c", &arr[i], &temp); 
        i++; 
        } while(temp!= '\n');

    size=i; 
    for(i=0;i<size;i++){ 
        printf("%d ",arr[i]); 
    } 
    
return 0;
}
