// problem 1 n 2
#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
using namespace std;


int main()
{
	
	unsigned long long x,y,z=0,sum=2;
//	cin>>t; //scanf("\n%d",&t);
//	if(1<=t<=100)
    y=3;x=2;
	while(z<=4000000)
	{   
        z=y+x;       
        x=y;
        y=z;
                     
	    if(z%2==0)
			sum+=z;
}     
		
    	cout<<sum;      		
 
         system("pause");
}
