/*
DFS(input: Graph G)
 {
	Stack S; Integer x, t; 
   	while (G has an unvisited node x)
    {
		visit(x); push(x,S); 
		while (S is not empty)
                { 
			t := peek(S); 
			if (t has an unvisited neighbor y)
			{ visit(y); push(y,S); }
			else 
				pop(S); 
		}
	}
}

*/
int getNextUnvisitedNeighbor(int t, graph G,  bool visited[],int n)
{
    for (int j=0;j<n;j++)
       if (G.isEdge(t,j) && !visited[j])
	 return j;
    // if no unvisited neighbors left:
    return n;
}
//Put this before dfs(…). This returns the next unvisited node, or n otherwise
int getNextUnvisited(bool visited[],int n, int lastVisited){
     int j=lastVisited+1;
     while (visited[j] && j<n)   
	   j++;
     return j;
}



int * dfs(Graph G)
  { // returns a parent array representing the DFS tree
     int n=G.vertexCount;
     int * parent = new int[n];
	 int S[n];  
	 bool visited[n];
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
	    while(!S.isEmpty()) 	 // traverse the current piece
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
	 cout<<“Graph has “<< numOfConnectedComponents<<
			“ connected components\n”;
	 return p;
}
//Put this before dfs(…)
// returns the leftmost unvisited 
// neighbor of node t. If none 
// remains, returns n.
/***************************************************************************************




BFS(input: graph G)
 {
  	Queue Q;    Integer x, z, y; 
	while (G has an unvisited node x) 
     {
		visit(x); Enqueue(x,Q); 
		while (Q is not empty)
              {
			z := Dequeue(Q); 
			for all (unvisited neighbor y of z)
                             {  visit(y); Enqueue(y,Q); 
			}
		}
	}
}

*/
