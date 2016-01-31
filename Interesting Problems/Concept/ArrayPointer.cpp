#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char a[]="Anil", *ch, **x, ***y, ****z, ******m;
	char xx[5];
	
	//xx=;
	//ch=&a;
	ch=a;
	//x=&a;
	//x=a;
	ch=a;
	x=&ch;
	y=&x;
	z=&y;

	printf("%d  ", z );
	printf("%d  ", y );
	printf("%d  ", &ch );
	printf("%d  ", ch );
	printf("%d  ", x );
	printf("%d  ", a );
	printf("%d  ", &a );
	printf("%s  ", a , a, a);
	printf("%s  ", ch );
	int r[]={2, 3, 4};
	
	
	printf("\n%s %d %c \n", a , a, a);
	printf("\n%s %d %c\n", r, r, r);
//	printf("%s  ", a[1]);
//	printf("%s  ", *a+1);
	//2358864  2358865  2358869 ie(+5)
	return 0;
}

