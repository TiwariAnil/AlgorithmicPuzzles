#include<iostream>
#include<stdlib.h>
//using namespace std;
template <typename Type>//int,float,char,double>
Type max(Type x,Type y)
{
	return x > y ? x:y;
}
int main()
{
//   std::cout << max(3, 7) << std::endl;
	int p;char c;float f;double d;
	p=max(5, 9);
	c=max('g','9');
	f=max(45.33,56.9);
  d=max(73234,3274);
    std::	cout<<p<<"\n\t"<<c<<"\n\t\t"<<f<<"\n\t\t\t"<<d ;
	system("pause");
	return 45;
}
