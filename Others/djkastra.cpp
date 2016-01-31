#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 20
#define INFINITY 9999

class dijkstra
{
private:
 int n;
 int graph[MAX][MAX];
 int colour[MAX];
 int start;
 int distance[MAX];
 int predecessor[MAX];
 enum {green,yellow,red};
public:
 void read_graph();
 void initialize();
 int select_min_distance_lable();
 void update(int);
 void output();
 void function();
};

void dijkstra::read_graph()
{
 cout<<"Enter the no. of nodes in the graph ::";
 cin>>n;
 cout<<"Enter the adjacency matrix for the graph ::\n";
 int i,j;
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   cin>>graph[i][j];
 for(i=1;i<=n;i++)
  colour[i]=green;

 cout<<"Enter the start vertex ::";
 cin>>start;
}

void dijkstra::initialize()
{
 for(int i=1;i<=n;i++)
 {
  if(i==start)
   distance[i]=0;
  else
   distance[i]=INFINITY;
 }

 for(int j=1;j<=n;j++)
 {
  if(graph[start][j]!=0)
   predecessor[j]=start;
  else
   predecessor[j]=0;
 }
}

int dijkstra::select_min_distance_lable()
{
 int min=INFINITY;
 int p=0;
 for(int i=1;i<=n;i++)
 {
  if(colour[i]==green)
  {
   if(min>=distance[i])
   {
    min=distance[i];
    p=i;
   }
  }
 }
 return  p;
}

void dijkstra::update(int p)       // p is a yellow colour node
{
 cout<<"\nupdated distances are ::\n";
 for(int i=1;i<=n;i++)
 {
  if(colour[i]==green)
  {
   if(graph[p][i]!=0)
   {
    if(distance[i]>graph[p][i]+distance[p])
    {
     distance[i]=graph[p][i]+distance[p];
     predecessor[i]=p;
    }
   }
  }
  cout<<distance[i]<<"\t";
 }
}

void dijkstra::output()
{
 cout<<"****** The final paths and the distacnes are ******\n\n";

 for(int i=1;i<=n;i++)
 {
  if(predecessor[i]==0 && i!=start)
  {
   cout<<"ath does not exists between "<<i<<" and the start vertex "
    <<start<<endl;
   exit(1);
  }
  cout<<"path for node "<<i<<" is ::\n";
  int j=i;
  int array[MAX];
  int l=0;
  while(predecessor[j]!=0)
  {
   array[++l]=predecessor[j];
   j=predecessor[j];
  }
  
   for(int k=l;k>=1;k--) //for(int k=l;k > =1;k–-)
   cout<<array[k]<<"->";

  cout<<i<<endl;
  cout<<"distance is "<<distance[i]<<endl<<endl<<endl;
 }
}

void dijkstra::function()
{
 cout<<"\n**********************************************************************\n";
 cout<<"This program is to implement dijkstra’s algorithm using colour codes \n";
 cout<<"**********************************************************************\n\n";
 read_graph();
 initialize();
 //repeate until all nodes become red
 int flag=0;
 int i;

 cout<<"\n\n******** The working of the algorithm is **********\n\n";

 for(i=1;i<=n;i++)
  if(colour[i]!=red)
   flag=1;

 cout<<"The initial distances are ::\n";
 for(i=1;i<=n;i++)
  cout<<distance[i]<<"\t";
 cout<<endl;

 while(flag)
 {
  int p=select_min_distance_lable();
  cout<<"\nThe min distance lable that is coloured yellow is "<<p;
  colour[p]=yellow;

  update(p);
  cout<<"\nnode "<<p<<" is coloured red "<<endl;
  colour[p]=red;

  flag=0;
  for(i=1;i<=n;i++)
   if(colour[i]!=red)
    flag=1;

  cout<<endl<<endl<<endl;
 }
 output();
}

 main()
{
 dijkstra d;
 d.function();
}

