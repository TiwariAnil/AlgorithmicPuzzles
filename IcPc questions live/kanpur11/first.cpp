#include<iostream>
#include<map>
#include<stdio.h>

#define s(n)			scanf("%d",&n)
#define forr(i,a,b)		for(int i=a;i<b;i++)
//#include<algorithm>
using namespace std;

class check
{
    public:
    int find()
    {
     	int t;
		s(t);
		int g=t;
		while(t--)
		{
			
			int a;
			s(a);
			int b[a+1];
			forr(i,1,a+1)
			{
				s(b[i]);
			}	
			int t2;
			s(t2);int k,h;printf("Case %d:\n",g-t);
			forr(i,0,t2)
			{
				
				s(k);s(h);
				map<int,int> m;
				map<int,int>::iterator it;
				forr(j,k,h+1)
				{
					m.insert(pair<int,int>(b[i],1));
				}
				//for()
				int sum=0,count=0;
				for (it=m.begin(); it!=m.end(); it++)
    					sum+=((*it).first),count++;//,cout<<*it<<endl;
				float y=(float)sum/count;
				printf("%f\n",y);					
			}
		
		
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
/*
2
10
1 2 3 4 4 3 2 -1 1 0
4
1 4
1 10
3 5
8 10
3
1 1 0
1
1 3


*/
