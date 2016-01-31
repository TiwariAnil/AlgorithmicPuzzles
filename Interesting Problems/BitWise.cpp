#include<iostream>
#include<cstdio>
#include<cstdlib>
#define error(x)                cout << #x << " : " << (x) << endl
using namespace std;

int ToBinary(int x)
{
	static int cnt=0;
	if(x==0 || cnt > 30)
	{
		cout<<endl;
		return 1;
	}
	int t=x&1;
	cnt++;
	ToBinary(x>>1);
	cout<<t;
	return 1;
}

int Set_Rightmost_Bit_off()
{
	int x=12, y=~0, cnt=0, z=1;
	/*
	error(y);
	ToBinary(x);
	ToBinary(y);
	cout<<endl;
	ToBinary(z);
	error(x&z);
	*/
	while((x&z)==0)
	{
		error(z);
		z=z<<1;
		y=y<<1;
		ToBinary(y);
	}
	y=y<<1;
	x=x&y;
	cout<<x;
}
void swap2_group_of_bits_of_a_no(int x, int p1, int p2, int n)
{
	// XOR swap is sexy thing
	/*
	
	a xor a= 0
	a xor 0= a
	
	X := X XOR Y
	Y := X XOR Y
	X := X XOR Y
	x and y are swapped now ! proof is also cool
	*/
	error(x); ToBinary(x);
	int x1=(x>>p1) & ((1U <<n)-1);
	int x2=(x>>p2) & ((1U <<n)-1);
	int xoor=x1^x2;
	int combine=(xoor<<p1)|(xoor<<p2);
	x=x^combine;
	error(x); ToBinary(x);

}

//Swap all odd and even bits


int main()
{
	//ToBinary(12);	
	//Set_Rightmost_Bit_off();
	//swap2_group_of_bits_of_a_no(28, 0, 3, 2);
	
	
	
	return 1;
}


