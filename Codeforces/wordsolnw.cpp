#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
class word
{
	public:
	int check()
	{
		//string s;
		char s[103];
		int n,t;
	    cin>>n;
	   // getch();
	    while(n--)
	    {
		    scanf("%s",&s);//cin>>s;
		     t=strlen(s);
			 if(t>10)
				   {printf("%c",s[0]);printf("%d",t-2);printf("%c\n",s[t-1]);}//cout<<s[0]<<t-2<<s[t-1]<<endl;}	 
			 else
		   		{printf("%s\n",s);}//cout<<s<<endl;  }       
		
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
/*
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
*/
