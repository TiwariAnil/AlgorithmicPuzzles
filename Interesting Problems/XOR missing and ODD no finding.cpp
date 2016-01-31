#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
/*
XOR = Hamming distance between 2 nos, ie no of bits with different bits in each no at that position

0 0 1
1 0 1
-----
1 0 0

or 
1 0 1 1 1 1 0
0 1 0 1 0 0 1
-------------
1 1 1 0 1 1 1   // Same bits = 0 ; Diff Bits = 1 

*/
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,11};
	//   10 is missing from the a[10];

	int x=3, y=4;
	
	x= x^y;
	cout<<x;	

TWO things can be done by XOR

1: Implement XOR search method in Array for the missing no. in 1 to N

2: Algorithm: 
Do bitwise XOR of all the elements. Finally we get the number which has odd occurrences.


//	for(int i=0; i<10; i++)
		
	
	
}
