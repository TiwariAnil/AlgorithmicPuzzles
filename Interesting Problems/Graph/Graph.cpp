//Learning pointers of a class !! hahahaha 

#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;
#define MAXV 100 /* maximum number of vertices */
#define MAXDEGREE 50 /* maximum vertex outdegree */

//My code
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
			
			g->edges[x][g->degree[x]] = y;
			g->degree[x] ++;
			if (directed == 0)
				insert_edge(g,y,x,1);
			else
				g->nedges ++;
			
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
			printf("Enter no of vertices and no of edges : ");
			scanf("%d %d",&(g->nvertices),&m);
			printf("\n");
			printf("Enter all edges : like a b return b c return ... \n\n");
			for (i=1; i<=m; i++)
			{
				scanf("%d %d",&x,&y);
				insert_edge(g,x,y,directed);
			}
			
			return 0;
		}
				
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

int main()
{	
	int l;
	graph p,*g;
	g=&p;
	read_graph(g,1);//1 for directed , 0 for undirected :) 
	printf("\nPrinting the Graph\n");
	print_graph(g);
	return 0;
}
