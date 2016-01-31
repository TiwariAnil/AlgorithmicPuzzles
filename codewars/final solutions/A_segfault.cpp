#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#define LLU long long unsigned int 
#define LLI long long int
using namespace std;


int main(int argc,char *argv[])
{
	LLU n,x,y,ans;
	scanf("%llu %llu %llu",&n,&x,&y);
	ans=((n+1)*(n+2))/2;
	printf("%llu",ans);
	return 0;
}
