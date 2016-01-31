#include<iostream>
#include<stdio.h>
//#include<algorithm>
using namespace std;

class check
{
    public:
    int find()
    {
        int t;
        cin>>t;
        t=1<<t;
        char a[3],b[3];
        //cout<<t;
        for(int i=1;i<=t;i=i+2)
        {
			cin>>a>>b;
			if(a[0]=='N')
				if(b[0]=='Y')
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;	
			if(a[0]=='Y')
				if(b[0]=='N')
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
		}
        return 0;
    }
};    
int main()
{
    //cout<<"akfnadslj";
     check t; 
     t.find();
     return 0;
}
