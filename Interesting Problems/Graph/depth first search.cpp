//Learning pointers of a class !! hahahaha 

#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;
#define MAXV 100 /* maximum number of vertices */
#define MAXDEGREE 50 /* maximum vertex outdegree */


/* NORMAL GRAPH IMPLEMENTATION */
		struct graph
		{
			int edges[MAXV+1][MAXDEGREE];	/* adjacency info */
			int degree[MAXV+1]; 			/* outdegree of each vertex */
			int nvertices; 					/* number of vertices in graph */
			int nedges; 					/* number of edges in graph */
		}; 
			
		int insert_edge(graph *g, int x, int y, int directed)
		{
			if (g->degree[x] > MAXDEGREE)
				printf("Warning: insertion(%d,%d) exceeds max degree\n",x,y);
			if(g->edges[x][g->degree[x]-1]!=y)
			{	
				g->edges[x][g->degree[x]] = y;
				g->degree[x] ++;
			}
			if (directed == 0)
				insert_edge(g,y,x,1);
			//else
				//g->nedges ++;
			
			return 0;
		}
		int initialize_graph(graph *g)
		{
			int i; /* counter */
			g -> nvertices = 0;
			g -> nedges = 0;
			for (i=1; i<=MAXV; i++) 
				g->degree[i] = 0;
		
			return 0;
		}
		
		int read_graph(graph *g, int directed)
		{
			int i; /* counter */
			int m; /* number of edges */
			int x, y; /* vertices in edge (x,y) */
			initialize_graph(g);
			//printf("Vertices and Edges : ");
			scanf("%d %d",&(g->nvertices),&m);
			printf("\n");
			//printf("Enter all edges : \n");
			for (i=1; i<=m; i++)
			{
				scanf("%d %d",&x,&y);
				insert_edge(g,x,y,directed);
			}
			
			return 0;
		}
		// PRINTING THE GRAPH ITSELF TRAVERSE IT ALL ALONG, OTHER 
		// SEARCHES ARE LIKE BFS,DFS IS TO GET PATH ETC.....		
		int print_graph(graph *g)
		{
			int i,j; /* counters */
			for (i=1; i<=g->nvertices;i++)
			{
				printf("%d: ",i);
				for (j=0; j<g->degree[i]; j++)
					printf(" %d",g->edges[i][j]);
				printf("\n");
			}
			return 0;
		}
/* Depth FIRST SEARCH */		

int processed[MAXV];  /*Level=0 which vertices have been processed */
int discovered[MAXV]; /*Level=1 which vertices have been found */
int parent[MAXV];     /* discovery relation */

int initialize_search(graph *g)
{
	int i; /* counter */
	for (i=1; i<=g->nvertices; i++) 
	{
		processed[i] = discovered[i] = 0;
		parent[i] = -1;	
	}
	return 0;
}

int process_vertex(int v)
{
	printf(" \n %d :\n",v);
	return 0;
}

int process_edge(int x, int y)
{
	printf("(%d,%d) ",x,y);
//	nedges = nedges + 1;
	return 0;
}

int dfs(graph *g, int v)
{
	int i; /* counter */
	int y; /* successor vertex */

	//if (finished) return; /* allow for search termination */
	//if(g->edges[v][g->degree[v]]!=y)
	
	discovered[v] = 1;
	process_vertex(v);
	for(i=0; i<g->degree[v]; i++)
	{
		y = g->edges[v][i];
		//if (g->edges[v][i] !=0)
		//{
			if (discovered[y] ==0) 
			{
				parent[y] = v;
				process_edge(v,y);
				dfs(g,y);
			} 
		//	else
		//		if (processed[y] == 0)
		//			process_edge(v,y);
		//}
		//if (finished) return;
	}
	//processed[v] = 1;
	return 0;
}


int main()
{	
	int l;
	graph p,*g;
	g=&p;
	read_graph(g,1);//1 for directed , 0 for undirected :) 
	printf("\nPrinting the Graph\n");
	print_graph(g);
	int start;
	cin>>start;
	dfs(g,start);
	return 0;
}
/*
5 9
1 2
1 3
1 4
3 4
3 5
4 4
4 5
5 1
5 4	
Printing the GrapH
1:  2 3 4
2:  3
3:  4 5
4:  4 5
5:  1 4
*/
