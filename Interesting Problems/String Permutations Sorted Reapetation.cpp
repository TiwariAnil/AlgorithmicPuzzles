#include<iostream>
#include<cstdio>
#include<cstdlib>

#define Last 5

char pool[6];
int cnt=0;
void recperm(char str[], int pos)//, int index)
{
	if(pos>=Last)
		return;
	for(int i=0; i<Last; i++)
	{
		pool[pos]=str[i];
		if(pos==Last-1)
		{
			cnt++;
			printf("%s\n", pool);
		}
		recperm(str, pos+1);
	}
}


int main()
{
	char str[6]="ABCDE";
	recperm(str, 0);//, 0);
	printf("%d\n", cnt);
	return 1;
}
