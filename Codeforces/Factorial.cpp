#include <stdio.h>

#define s(n)                        scanf("%d",&n)
#define p(n)                        printf("%d",n)

int fact(int n)
{
    int res=1;
    for(int i=1; i <=n;i++)    
        res= res* i;
    return res;
}

int ff(int n)
{
    if (n==1)
        return 1;
    return n*ff(n-1);    
}



 //5
 //5 *4 * 3
int main()
{
    int n;
    s(n);
    p(fact(n));
    printf("\n\n");
    p(ff(n));
//    system("pause");
    s(n);
}
