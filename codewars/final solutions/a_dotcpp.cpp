#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <climits>
#include <map>

using namespace std;

int main()
{
    long long n,x,y;

    cin>>n>>x>>y;

    long long ans=(n+1)*(n+2);
    ans/=2;

    cout<<ans<<endl;

    return 0;
}
