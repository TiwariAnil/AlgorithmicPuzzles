

int main()
{
   int i,j,k,l;
   vector<int>a[3010];
   int b[3010]={0},c[3010]={0};
 cin>>i>>j;
 while(j)
 {
  cin>>k>>l;
  a[k].push_back(l);
  a[l].push_back(k);
  c[k]++;c[l]++;
  j--;
 } 
  int left=i;int count=0;
  while(left>1)
    {
	   int d=0;int flag=0;int b[3010]={0};
        for(int p=1;p <=i;p++)
            {
	            if(c[p]==1)
	            {//cout<<p;
	              c[p]=0;
	              
	              int q=a[p][0];
	                
	              for(int x=0;x<a[q].size();++x)
	              {
	                if(a[q][x]==p)
	                    {a[q].erase(a[q].begin()+x);
	                b[d]=q;d++;}
	              }
	            flag=1;
	            left--;
	            }
	            //cout<<c[4];
           }
        //cout<<endl;
        while(d>=0)
        {c[b[d]]--;
         d--;}
        //cout<<c[4]<<endl;
        if(flag==0)
        left=0;
        else
        count++;
    
    }
 cout<<count;

}
