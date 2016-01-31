#include<iostream>
#include<cstdio>
#include<cstring>
 
using namespace std;
 
int val[]={0, 1, 4, 3, 8, 5, 12, 7, 16, 9};
 
int cal(int n)
{
    int sum=0;
    while(n!=0)
    {
        int b = n%10;
        sum +=val[b];
        n = n/10;
    }
    return sum%10;
}
 
 
int inline d(int n)
{
    n++;
    int b = n/10;
    int c = 45*b;
    for(int i=b*10; i<n; i++)
    {
        c+=cal(i);
    }
    return c;
}
 
int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int res = d(b)-d(a-1);
        printf("%d\n", res);
    }
    return 0;
}
