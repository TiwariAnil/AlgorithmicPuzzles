#include <cstdio>
#include <iostream>
using namespace std;
#define error(x)                cout << #x << " : " << (x) << endl

int N;
int xs[128];
int ys[128];

bool pass[128];

void go(int n)
{
	error(n);
    pass[n] = true;
    for(int i = 0; i < N; i++)
	   if(xs[i] == xs[n] || ys[i] == ys[n])
	      if(!pass[i])
		     error(i),go(i);
}

int main()
{
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
	scanf("%d%d", xs + i, ys + i);

    int ans = 0;

    for(int i = 0; i < N; i++)
	if(!pass[i])
	    go(i), ans++;

    printf("%d\n", ans - 1);
    return 0;
}
