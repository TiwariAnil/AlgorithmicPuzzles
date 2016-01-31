typedef struct
{
	int v; /* neighboring vertex */
	int weight; /* edge weight */
} edge;
typedef struct
{
	edge edges[MAXV+1][MAXDEGREE]; /* adjacency info */
	int degree[MAXV+1]; /* outdegree of each vertex */
	int nvertices; /* number of vertices in graph */
	int nedges; /* number of edges in graph */
} graph;

prim(graph *g, int start)
{
	int i,j; /* counters */
	bool intree[MAXV]; /* is vertex in the tree yet? */
	int distance[MAXV]; /* vertex distance from start */
	int v; /* current vertex to process */
	int w; /* candidate next vertex */
	int weight; /* edge weight */
	int dist; /* shortest current distance */
	for (i=1; i<=g->nvertices; i++)
	{
		intree[i] = FALSE;
		distance[i] = MAXINT;
		parent[i] = -1;
	}
	distance[start] = 0;
	v = start;

	while (intree[v] == FALSE)
	{
		intree[v] = TRUE;
		for (i=0; i<g->degree[v]; i++)
		{
			w = g->edges[v][i].v;
			weight = g->edges[v][i].weight;
			if ((distance[w] > weight) && (intree[w]==FALSE))
			{
				distance[w] = weight;
				parent[w] = v;
			}
		}
		v = 1;
		dist = MAXINT;
		for (i=2; i<=g->nvertices; i++)
			if ((intree[i]==FALSE) && (dist > distance[i]))
			{
				dist = distance[i];
				v = i;
			}
	}
}
