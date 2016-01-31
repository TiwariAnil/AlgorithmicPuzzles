#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<queue>
#include<stack>
#include<utility>
#include<string>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<list>
#include<algorithm>

using namespace std;

int main(){
	
	int n, m, x, y;
	scanf("%d%d", &n, &m);
	if(m != n-1)
		printf("corrupt");
	else
		printf("not corrupt");
    return 0;
}
