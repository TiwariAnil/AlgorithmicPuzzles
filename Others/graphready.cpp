#include<iostream>
#include<stdlib.h>
using namespace std;
/*class vertex 
{     
	  public:
      int vetx;
	     	
};*/
//int r();
int size=3;
class Graph {
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
			for (int i = 0; i < vertexCount; i++) {
                  adjacencyMatrix[i] = new bool[vertexCount];
                  for (int j = 0; j < vertexCount; j++)
                        adjacencyMatrix[i][j] = false;
            }
      }
 
      void addEdge() 
	  {     int i,j;
			cout<<"\n\nEnter the 2 vertex which r joined by this new edge     (< vertex)  :   ";
            cin>>i>>j;
			if (i >= 0 && i < vertexCount && j >= 0 && j < vertexCount) 
			{
                  adjacencyMatrix[i][j] = true;
                  adjacencyMatrix[j][i] = true;
                  cout<<"\n\nEdge added successfully ,  :)  ";
			}
            else
                  cout<<"\n\nEdge can not be added  ,  :(  ";
    
      }
 
      void removeEdge() 
	  {
			int i,j;
			cout<<"\n\nEnter the 2 vertex which r joined by edge to b removed  (< vertex)  :   ";
            cin>>i>>j;
            if (i >= 0 && i < vertexCount && j >= 0 && j < vertexCount) 
			{
                  adjacencyMatrix[i][j] = false;
                  adjacencyMatrix[j][i] = false;
                  cout<<"\n\nEdge removed successfully ,  :)  ";
			}
            else
                  cout<<"\n\nDude ther ws no such edge  ,  :(  ";
      }
 
      /*bool*/void isEdge() 
	  {
            int i,j;
			cout<<"\n\nEnter the 2 vertex which r joined by edge to b checked  (< vertex)  :   ";
            cin>>i>>j;
            if (i >= 0 && i < vertexCount && j >= 0 && j < vertexCount)
                /*  return*/if(adjacencyMatrix[i][j])
				                        cout<<"\n\nIts an edge :) ";
				             else
                                        cout<<"\n\nSorry ther is no such edge :( "; 							                       
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
main()
{ 
	 int p;char ch='y',name[10];
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
	      switch(p)
	      {
		         //case 1 : cout<<"\n                  * Graph created  *";
					//	cout<<"\n Enter the graph name : ";
					//	cin>>name;
				//	    Graph g;
				//		break;	   
				 case 1 : g.isEdge();
			              break;
			     case 2 : g.addEdge();
				          break;
				 case 3 : g.removeEdge();
						  break;       
				 
				 defult :		
						cout<<"\nOpps !! Wrong entry  :( ";	 
			            break;
		  }
	     cout<<"\nWant to return to the main MENU(y/n)......";
	     cin>>ch;
	}
	
	
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
