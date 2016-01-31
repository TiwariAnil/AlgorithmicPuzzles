#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class test
{
    public:
    int find()
    {
        int n;
        cin>>n;
        char ch[200],res[1000];
        for(int k=0;k<1000;k++)
            res[k]='\0';
        int p,i,j,ask=2,flag=0,pos=1,kiss=0,con=0;
        res[0]='/';
        //cout<<strlen(res);
        //cout<<res;
		n++;
		while(n--)
        {
        	gets(ch);
        	p=strlen(ch);
        	i=j=0;
            if(ch[0]=='p')
            	cout<<res<<endl;
            else if(ch[3]=='.')
            	{   
					pos--;
					if(res[pos]=='/')
					    res[pos]='t';
					while(res[pos]!='/')
					    {res[pos]='\0';pos--;}
				    if(ch[5]=='/')
				     { for(i=5;i<p;i++,pos++)
				           res[pos]=ch[i];
					   res[pos]='/'; pos++;
					 }  
				}	
			else //if(ch[3]=='/')
			{	
				//pos++;
				if(ch[3]!='/')
			    	j=3;//,ch[2]='/',kiss=1;
			    else
				    j=4;	
				    
				for(j;j<p;j++)
			    {
					if(res[pos]=='/' && j==3)
					     pos++;
					if(ch[j]!='.')
				   		{res[pos++]=ch[j];cout<<ch[j]<<"  ";}//, pos++;}//cout<<pos<<" ";}
					else
					{	if(res[pos]=='/')
					    	res[pos]='\0',pos--;
					    else
						{pos--;if(res[pos]=='/')
					    	      res[pos]='\0',pos--;	
						}
						while(res[pos]!='/')
					    	{res[pos]='\0';pos--;}//cout<<pos<<" ";}
					   //j+=3;
					}
					
				}
				if(j>4 )//&& kiss==0)		   
				  res[pos]='/',pos++;
				//kiss=0;
			} 
		}
        return 0;
    }
};
int main()
{
     test t;
     t.find();
     return 0;
}
