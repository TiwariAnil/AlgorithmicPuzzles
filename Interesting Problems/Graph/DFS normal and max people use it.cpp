// Calculated root node sexy :* :* :* :* :* 
//
	   OTher one , for left up right down :)
	   
	   
	   
int dfs( int x, int y)
{
     if (x==ex && y==ey)
     {
          FLAG=1;
          return 1; // success
     }

     visit[x][y]=1;
     for (int i=-1; i<2; i++)
          for(int j=-1; j<2; j++)
          {
               xx=x+i; yy=y+j;
               if(i!=j)
               if( xx>=0 && xx<n && yy>=0 && yy<m)
             if(visit[xx][yy]!=1   && s[xx][yy]!= '#' && r[xx][yy]<w[xx][yy])
               {
                    visit[xx][yy]=1;
                    dfs(xx, yy);
               }
          }
     return 1;
}
-----------------------------------------------------------------

int x_axis[8]={-1,-1,-1,0,0,1,1,1};
int y_axis[8]={0,1,-1,1,-1,0,1,-1};
void dfs(int x,int y)
{  s[x][y]='*';
   int i;
   for(i=0;i<8;i++)
   {  int nx=x_axis[i]+x;
      int ny=y_axis[i]+y;
      if(nx>=0 && nx<n && ny>=0 && ny<m && s[nx][ny]=='@')
              dfs(nx,ny);
   }
}

-----------------------------------------------------------------


class CellRemoval {
public:
	int dfs(vector <int> p,int t, int d)  //binary tree , where d is to be deleted and we have to count
	//the remaing alive afer d and its children are dead :)
	{
		int min=1;
		if(t==d)
			return 0;

		for(int i=0;i<p.size();i++)
			if(p[i]==t)
				min+=dfs(p,i,d);
		return min;
	}
	int cellsLeft(vector <int> p, int d)
	{
		int size=p.size(),t=0;
		for(int i=0;i<size;i++)
		{
			if(p[i]==-1)
				{t=dfs(p,i,d);break;}

		}
		return t/2;

	}
};

class CellRemoval {
public:
	vector <int> g[55];
	int dfs(int x,int d)
	{	
		if(x==d)
			return 0;
		int res=0;
		for(int i=0;i<g[x].size();i++)
			res+=dfs(g[x][i], d);
		return res > 0 ? res : 1;

	}
	int cellsLeft(vector <int> p, int d) 
	{
	int n=p.size();
	//for(int i=0;i<n;i++)
	//	g[i].clear();
	for(int i=0;i<n;i++)
		if(p[i] != -1)
			g[p[i]].push_back(i);
	for(int i=0;i<n;i++)
		if(p[i] == -1)
			return dfs(i,d);
	return 0;
	}
};


