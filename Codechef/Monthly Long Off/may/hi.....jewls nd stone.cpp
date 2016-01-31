#include<stdio.h>
#include<string.h>
 
int main()
{
    int t,q,i,count,k;
    char a[1000],b[1000];
    int la,lb,c[200];
    scanf("%d",&t);
    for(i=0; i<200; i++)
    c[i]=0;
    for(q=0; q<t; q++)
    {
        count=0;
        scanf("%s",&a);
        scanf("%s",&b);
        la=strlen(a);
        lb=strlen(b);
        for(i=0; i<la; i++)
        {
            k=a[i];
            c[k]=1;
        }
        for(i=0; i<lb; i++)
        {
            k=b[i];
            if(c[k]==1)
            count++;
        }
        printf("%d\n",count);
        for(i=0; i<200; i++)
        c[i]=0;
    }
}
