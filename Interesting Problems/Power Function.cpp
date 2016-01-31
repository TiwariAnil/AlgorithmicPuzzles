#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;


[Square and multiply method]

Here main idea is, suppose we want to
find the M = a^9 ;

then M can be always represented as
binary bits of 9 ie 1001.
9=		  1		        0			      0			      1
M= (a^(2^3)) * (a^(2^2)) * (a^(2^1)) * (a^(2^0))

calculate like

	1*(2^3)=8 --> a^8
	0*(2^2)=0 --> a^0
	0*(2^1)=0 --> a^0
	1*(2^0)=1 --> a^1
	-----------------
MULTIPLY -->    a^8*1*1*a^1 = a^9

so keep squaring the BASE(a) and when power(9)'s current bit 1, multipy with answer.


long long power(long long base,long long pow)
{  //base^pow !
    if(base==0)
        return 0;
    if(base==1 || pow==0)
        return 1;
    long long ans=1;
    while(pow)
    { //base^pow !
			if(pow%2==1)
			{
				ans*=base;     // when the bit is 1, multiply the new base with answer!
			}
			base*=base; ////////// BASE will keep on increasing its power, i.e b^0, b^1, b^2........ and when the bit is 1, multiply the new base with answer!
			pow>>=1;
    }
    return ans;
}

int main()
{
	int a=power(10, 2); // 2^10
	cout<<a<<endl;

}
