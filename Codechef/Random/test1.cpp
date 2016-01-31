#include <iostream>
#include <cstdio>
#include <bitset>
#include <cmath>
#define SIZE 4096
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define FORs(i,a,b)             for(int i=a;i>=b;i--)
using namespace std;
#define p(n)                        printf("%d",n)

bool isSmaller;

int divs[500001];
void cal()
{
    for(int i = 2; i <= 708; i++)
	{
        for(int j = i; j <= 500000/i; j++)
		{
            if(i == j)
                divs[i*j]++;
            else
                divs[i*j]+=2;
        }
    }
}

int Pow(int num, int a)
{
    isSmaller = true;
    if( a == 0) return 1;
    int p = a;
    int x = num;
    if(num > 9999)
	{
        isSmaller = false;
        x = x % 10000;
    }
    int r = 1;
    while(p != 1)
	{
        if(p&1)
		{
            r = (r * x);
            if(r > 9999)
			{
                isSmaller = false;
                r = r % 10000;
            }
        }
        p = p >> 1;
        x = (x * x);
        if(x > 9999)
		{
            isSmaller = false;
            x = x % 10000;
        }

    }
    r = r*x;
    if(r > 9999)
	{
        isSmaller = false;
        r = r % 10000;
    }
    return r;
}

int main()
{
    int T, res, N;

    scanf("%d", &T);
    cal();
    while(T--){
        scanf("%d", &N);
        int D = divs[N];
        if(D % 2 == 0)
		{
            res = Pow(N, D/2);
        }
        else
		{
            res = Pow(sqrt(N), D);
        }
        if(!isSmaller)
		{
            printf("%04d\n", res);
        }
        else
		    printf("%d\n", res);

    }
}
