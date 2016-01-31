#include<stdio.h>
int i,j,k,l,m,n,a[100000],s;
char d[100][100];
main()
{
    scanf("%d%d\n",&n,&m);
    for(i=1;i<=n;i++)
    gets(d[i]+1);
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    {
        if(d[i][j]=='W')
        if(d[i+1][j]=='P'||d[i-1][j]=='P'||d[i][j+1]=='P'||d[i][j-1]=='P')
        s++;
    }
    printf("%d\n",s);
}
