#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <queue>        //max heap implementation
#include <limits.h>




#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define mkp make_pair
#define fi first
#define se second
#define debug(a) { for( typeof(a.begin()) it = a.begin() ; it != a.end() ; it++ ) cout << *it << " "; cout << endl; }

using namespace std;


#define ll long long

int main()
{
	
   int m;

    string s;
    cin>>m;
    int p;
    for(int i=0;i<m;++i)
    {   if(i==0)
        p=getchar();
         int a[30]={0};
        getline(cin,s);

        char r;
        for(int j=0;j<s.size();++j)
        {   r=toupper(s[j]);
            if(r>=65 && r<=90)
            {a[r-'A'+1]++;}
        }
         sort(a,a+27);
         int c=26,sum=0;
         for(int j=26;j>=1;j--)
         {sum+=c*a[j];c--;}

         cout<<"Case #"<<i+1<<":"<<" "<<sum;
         if(i<m-1)
         cout<<endl;
    }


}

