#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    char a[1001][1001],b[10000];
    long v[10000],max;
    int n,q,lb,i,j,qa,s;
    scanf("%d",&n);
    for(q=0; q<n; q++)
    {
        scanf("%s",a[q]);
        scanf("%d",&v[q]);
    }
    scanf("%d",&qa);
    for(q=0; q<qa; q++)
    {
        scanf("%s",b);
        lb=strlen(b);
        max=-1000000001;
        for(i=0; i<n; i++)
        {
            for(j=lb-1; j>=0; j--)
            {
                if(b[j]!=a[i][j])
                {
                    break;
                }
                if(j==0)
                {
                    if(max<v[i])
                    {
                    max=v[i];
                    s=i;
                    }
                }
            }
 
        }
        if(max==-1000000001)
        printf("NO\n");
        else
        printf("%s\n", a[s]);
    }
 
     getch();
    return 0;
}
