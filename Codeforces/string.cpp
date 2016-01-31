#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
	
class word
{
	public:
	int check()
	{
		int i;
	    char ch[100];
	    scanf("%s",&ch);
	    for(i=0;i<strlen(ch);i++)
	    {
			if(ch[i]>=65 && ch[i]<=90)
				ch[i]=ch[i]+32;
			        	
		}
		for(i=0;i<strlen(ch);i++)
	    {
			if(ch[i]!=97 && ch[i]!=101 && ch[i]!=105 && ch[i]!=111 && ch[i]!=117&& ch[i]!=121)
						printf(".%c",ch[i]);
		}
	
		 return 0;    
	}
};

int main()
{
	word t;
	t.check();
	return 0;
}
