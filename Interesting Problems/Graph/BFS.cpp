void bfs(node start)
 {
  queue s;
  s.push(start);
  while (s.empty() == false)
   {
        top = s.front();
        s.pop();
        mark top as visited;
  }
}

*******************************************************

int BFS( int x , int y , int s , int t )
{
	queue < pair < PII , int > > q;
	q.push( make_pair( PII( x , y ) , 0 ) );
	while( !q.empty() )
	{
		x = q.front().fr.fr;
		y = q.front().fr.se;
		int dd = q.front().se;
		q.pop();
		if( x == s && y == t )
			return dd;
		for( int i = -1 ; i < 2 ; i ++ )
			for( int j = -1 ; j < 2 ; j ++ )
				if( avail.find( PII( x+i , y+j ) ) != avail.end() )
				{
					avail.erase( avail.find( PII( x+i , y+j ) ) );
					q.push( make_pair( PII( x+i , y+j ) , dd+1 ) );
				}
	}
	return -1;
}


int bfsr( int x , int y )
{
	queue < pair < PII , int > > q;
	q.push( make_pair( PII( x , y ) , 0 ) );
	while( !q.empty() )
	{
		x = q.front().fr.fr;
		y = q.front().fr.se;
		int dd = q.front().se;
		q.pop();
		if( x == ex && y == ey )
			res=dd;
		for( int i = -1 ; i < 2 ; i ++ )
			for( int j = -1 ; j < 2 ; j ++ )
				
		if( r[x+i][y+j]==0 && x+i <n && x+i>=0 && y+i <n && y+i>=0 && s[x+i][y+j]!='#')
				{
					r[x+i][y+j]=dd+1;
					q.push( make_pair( PII( x+i , y+j ) , dd+1 ) );
				}
	}
	return -1;
}
int bfsw( int x , int y )
{
	queue < pair < PII , int > > q;
	q.push( make_pair( PII( x , y ) , 0 ) );
	while( !q.empty() )
	{
		x = q.front().fr.fr;
		y = q.front().fr.se;
		int dd = q.front().se;
		q.pop();
		
		for( int i = -1 ; i < 2 ; i ++ )
			for( int j = -1 ; j < 2 ; j ++ )
				
		if( w[x+i][y+j]==0 && x+i <n && x+i>=0 && y+i <n && y+i>=0 && s[x+i][y+j]!='#')
				{
					w[x+i][y+j]=dd+1;
					q.push( make_pair( PII( x+i , y+j ) , dd+1 ) );
				}
	}
	return -1;
}






























