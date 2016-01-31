#define MAXV 100 /* maximum number of vertices */
#define MAXDEGREE 50 /* maximum vertex outdegree */

typedef struct 
{
	int edges[MAXV+1][MAXDEGREE]; /* adjacency info */
	int degree[MAXV+1]; /* outdegree of each vertex */
	int nvertices; /* number of vertices in graph */
	int nedges; /* number of edges in graph */
} graph;

initialize_graph(graph *g)
{
	int i; /* counter */
	g -> nvertices = 0;
	g -> nedges = 0;
	for (i=1; i<=MAXV; i++) 
		g->degree[i] = 0;
}


read_graph(graph *g, bool directed)
{
	int i; /* counter */
	int m; /* number of edges */
	int x, y; /* vertices in edge (x,y) */
	initialize_graph(g);
	scanf("%d %d",&(g->nvertices),&m);
	for (i=1; i<=m; i++)
	{
		scanf("%d %d",&x,&y);
		insert_edge(g,x,y,directed);
	}
}


insert_edge(graph *g, int x, int y, bool directed)
{
	if (g->degree[x] > MAXDEGREE)
	printf("Warning: insertion(%d,%d) exceeds max degree\n",x,y);
	g->edges[x][g->degree[x]] = y;
	g->degree[x] ++;
	if (directed == FALSE)
	insert_edge(g,y,x,TRUE);
	else
	g->nedges ++;
	
}


print_graph(graph *g)
{
	int i,j; /* counters */
	for (i=1; i<=g->nvertices; i++)
	{
		printf("%d: ",i);
		for (j=0; j<g->degree[i]; j++)
			printf(" %d",g->edges[i][j]);
		printf("\n");
	}
}





