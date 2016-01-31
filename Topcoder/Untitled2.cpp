long nCr(int n,int m)	{
	long bc[100][100]; // size ???
	REP(i,n+1) bc[i][0] = bc[i][i] = 1;
	FOR(i,1,n)
		FOR(j,1,i-1)
			bc[i][j] = bc[i-1][j-1] + bc[i-1][j];

	return( bc[n][m] );
}
