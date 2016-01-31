#include<iostream>
#include<stdlib.h>
using namespace std;

int size=10;

class stack 
{    
         public:		 
         int stackData[20]; 
         int topOfStack;       
 
	     
         stack(int n);            
         void push(int x); 
         int pop();  
		 int peek()
		 {
                  return topOfStack;     
		 }      
};

stack::stack(int n)
{
    topOfStack = 0;
    size = n;
}

void stack::push(int x)
{
  if(topOfStack==size) 
  {
    //cout << "Stack is full\n";
    return;
  }
  stackData[topOfStack] = x;
  topOfStack++;
}

int stack::pop()
{
  if(topOfStack==0) 
  {
    //cout << "Stack is empty\n";
    return 0; // return null on empty stack 
  }
  topOfStack--;
  return stackData[topOfStack];
}


//int size=3;
class Graph 
{

private:
      bool** adjacencyMatrix;
      
public:
      int vertexCount;
	  Graph()//int size )
	  {   //  vertexCount=size;
			cout<<"\nEnter the total no of vertex in the Graph.....................    :    ";
            
			cin>>vertexCount;
			//cout<<vertexCount;
			this->vertexCount = vertexCount;
            adjacencyMatrix = new bool*[vertexCount];
			for (int i = 0; i < vertexCount; i++)
			 {
                  adjacencyMatrix[i] = new bool[vertexCount];
                  for (int j = 0; j < vertexCount; j++)
                        adjacencyMatrix[i][j] = false;
            }
      }
 
      void addEdge(int i,int j) 
	  {     //int i,j;
			//cout<<"\n\nEnter the 2 vertex which r joined by this new edge     (< vertex)  :   ";
            //cin>>i>>j;
			if (i >= 0 && i < vertexCount && j >= 0 && j < vertexCount) 
			{
                  adjacencyMatrix[i][j] = true;
                  adjacencyMatrix[j][i] = true;
                  cout<<"\n\nEdge added successfully ,  :)  ";
			}
            else
                  cout<<"\n\nEdge can not be added  ,  :(  ";
    
      }
 
      void removeEdge(int i,int j) 
	  {
			//int i,j;
			//cout<<"\n\nEnter the 2 vertex which r joined by edge to b removed  (< vertex)  :   ";
            //cin>>i>>j;
            if (i >= 0 && i < vertexCount && j >= 0 && j < vertexCount) 
			{
                  adjacencyMatrix[i][j] = false;
                  adjacencyMatrix[j][i] = false;
                  cout<<"\n\nEdge removed successfully ,  :)  ";
			}
            else
                  cout<<"\n\nDude ther ws no such edge  ,  :(  ";
      }
 
       /*void*/ bool isEdge(int i,int j) 
	  {
            //int i,j;
			//cout<<"\n\nEnter the 2 vertex which r joined by edge to b checked  (< vertex)  :   ";
            //cin>>i>>j;
            if (i >= 0 && i < vertexCount && j >= 0 && j < vertexCount)
                  return adjacencyMatrix[i][j];
		     //                      cout<<"\n\nIts an edge :) ";
			//	             else
                //                        cout<<"\n\nSorry ther is no such edge :( "; 							                       
            //else
              //    return false;
      }
 
      ~Graph() 
	  {
            for (int i = 0; i < vertexCount; i++)
                  delete[] adjacencyMatrix[i];
            delete[] adjacencyMatrix;
      }
};


int getNextUnvisitedNeighbor(int,Graph,bool,int);
int getNextUnvisited(bool,int,int);
int dfs(Graph);      

int getNextUnvisitedNeighbor(int t, Graph G,  bool visitedy[],int n)
{
    for (int j=0;j<n;j++)
       if (G.isEdge(t,j) && !visited[j])
	 return j;
    // if no unvisited neighbors left:
    return n;
}
//Put this before dfs(…). This returns the next unvisited node, or n otherwise
                                                 
int getNextUnvisited(bool visited[],int n, int lastVisited)
{
     int j=lastVisited+1;
     while (visited[j] && j<n)   
	   j++;
     return j;
}



int dfs(Graph G)
  { // returns a parent array representing the DFS tree
     int n=G.vertexCount;
     int * parent = new int[n];
	 stack S(n);  
	 bool  visited[n];
	 for ( int i=0; i<n; i++)	
	     visited[i]=false;
	 int x=0;	// begin DFS from node 0
	 int numOfConnectedComponents=0;
	 while (x<n)
	 {	// begin a new DFS from x
  	    numOfConnectedComponents++;		
  	    visited[x]=true;  
		S.push(x); 
		parent[x] = -1; // x is root
	    while(S.topOfStack!=0) 	 // traverse the current piece
        {
            int t=S.peek( );
            int y=getNextUnvisitedNeighbor(t,G,visited,n);
            if (y<n)
			{
	               visited[y]=true;
	               S.push(y);
	               parent[y]=t;
            }
            else   
			        S.pop( ); 
        }           

		// insert here the yellow box from the next slide
	    x= getNextUnvisited(visited,n,x);
  	 }
	 cout<<"Graph has  '" << numOfConnectedComponents<<"'  connected components\n";
	 return 0;
}


main()
{ 
	 int p,m,n ; 
	 char ch='y',name[10];
	 cout<<"\nCreating the graph";
	 Graph g;
	// cin>>p;
	while(ch=='y')
	{     cout<<"\n                      MENU                             ";
          //cout<<"\n\n1. Create a graph";
		  cout<<"\n\n1. Check for an edgein the graph";
		  cout<<"\n2. Add an edge in the graph";
		  cout<<"\n3. Remove an edge from the graph";
		    
		  cout<<"\n\n              Enter ur choice no.";
	      cin>>p;
		  cout<<"\n\nEntr the edge vertex for operation\n"; 
		  cin>>m>>n;
	      switch(p)
	      {
		         //case 1 : cout<<"\n                  * Graph created  *";
					//	cout<<"\n Enter the graph name : ";
					//	cin>>name;
				//	    Graph g;
				//		break;	   
				 case 1 :{ if(g.isEdge(m,n))
				               cout<<"\n\nIts an edge";
				           else
						       cout<<"\n\nIt is not an edge";    
			              }
						  break;
			     case 2 : g.addEdge(m,n);
				          break;
				 case 3 : g.removeEdge(m,n);
						  break;       
				 
				 defult :		
						cout<<"\nOpps !! Wrong entry  :( ";	 
			            break;
		  }
	     cout<<"\nWant to return to the main MENU(y/n)......";
	     cin>>ch;
	}
	
	dfs(g);
	 //Graph g;
     //r();
   //  g.addEdge();
	 system("pause");	
}
/*
int r()
{
	cout<<"int tha fsaj                "<<size;
	return 0;
}
*/
