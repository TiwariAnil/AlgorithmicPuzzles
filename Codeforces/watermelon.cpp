#include<iostream>
using namespace std;
class water
{
	public:
	int check()
	{
	      int x;
	      cin>>x;
	      if(x%2==0 && x!=2)
	          cout<<"YES";
	      else
		     cout<<"NO";
			 return 0;    
	}
	
};
int main()
{
	water t;
	t.check();
	return 0;
}
