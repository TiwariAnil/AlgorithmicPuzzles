#include<iostream>
#include<stdio.h>
#include<string.h>
//#include<algorithm>
using namespace std;

class check
{
    public:
    int find()
    {
        int t;
        cin>>t;
        //t=1<<t;
        char a[1004],b;
        //cout<<t;
        int inst,temp=0,buf;
        for(int i=1;i<=t;i++)
        {
			inst=0;
			cin>>a;
			buf=a[0]-97;
			inst+=2;
			//cout<<buf<<" "<<temp<<" "<<inst<<endl;
			for(int j=1;j<strlen(a);j++)
			{	//if(a[j]=='a')
				temp=a[j]-97;//,tin+=a[j]-97;
				if(buf<=temp)
					inst+=temp-buf;
				else //if(buf>temp)
					inst+=25-buf+temp+1;
					
				inst++;
				//cout<<buf<<" "<<temp<<" "<<inst<<endl; 
				buf=temp;
			}
			//cout<<inst<<endl;
			//inst+=3;
			if(inst<=11*strlen(a))
				cout<<"YES\n";
			else
				cout<<"NO\n";//<<tin;		
		}
        return 0;
    }
};    
int main()
{
     check t; 
     t.find();
     return 0;
}
