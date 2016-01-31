#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
bool visited[5000 + 10] = {0};
/*
void dfs(int vertex)
{
    if(visited)

    visited[vertex] = true;
}
*/
int main()
{
    int n,m,i,j,pi;
    cin>>n>>m;
    int x[m + 10];
    int y[m + 10];
    int index[10000]={0};
    //vector <int>v[5000];
    for(int i = 0 ;i < m;i++)
        {
           // int x,y;
            cin>>x[i]>>y[i];

        }
        pi=1;
        //int index[0]=0;
        for(i=0; i<m; i++)
        {
            if(index[x[i]]==0 && index[y[i]]==0)
            {
                index[x[i]]=pi;
                index[y[i]]=pi;
                pi++;
            }
            else
            if(index[x[i]]==index[y[i]])
            {
                cout<<"corrupt";
                return 0;
            }
            else if(index[x[i]]==0 || index[y[i]]==0)
            {
                if(index[x[i]]>0)
                {
                    index[y[i]]=index[x[i]];
                }
                else
                index[x[i]]=index[y[i]];


            }
            else
            {
                if(index[x[i]]<index[y[i]])
                {
                    for(j=0; j<n; j++)
                    {
                        if(index[j]==index[x[i]])
                        index[j]=index[x[i]];
                    }
                }
                else
                {
                    for(j=0; j<n; j++)
                    {
                        if(index[j]==index[y[i]])
                        index[j]=index[y[i]];
                    }

                }

            }
            }
        //cout
    //dfs(1);
    cout<<"not corrupt";
    return 0;
}
