#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
class FoxAndFlowerShopDivTwo
{
    public:
    int theMaxFlowers(vector <string> flowers, int r, int c)
    {
    	int height, ans=0, width, i ,j,count=0;
		//string temp;
		height=flowers.size();
		//cout<<height;
		width=flowers[0].length();
//		if(height>1)		

	//cout<<height;
	//cout<<width;
		     
	  if(r!=0) 
			for(i=0;i<r;i++)
				for(j=0;j<width;j++)
					if(flowers[i][j]=='F')
						count++;
						
			ans=max(ans,count);
			count=0;			
			
	if(r+1<height)	  				
		 for(i=r+1;i<height;i++)
				for(j=0;j<width;j++)
					if(flowers[i][j]=='F')
						count++;				
						//width=words[i].length();
					//flag=0;
			ans=max(ans,count);
			count=0;			
		
	if(c+1<width)
		   for(i=0;i<height;i++)
				for(j=c+1;j<width;j++)
					if(flowers[i][j]=='F')
						count++;
			
			ans=max(ans,count);
			count=0;
		
	if(c!=0)
		   for(i=0;i<height;i++)
				for(j=0;j<c;j++)
					if(flowers[i][j]=='F')
						count++;
			
			ans=max(ans,count);
			count=0;
      
	    return ans;
    }
};

int main()
{
	 //PrefixCode test;
    vector <string> words;
	
		
	words.push_back("F");
	words.push_back(".");
	words.push_back("F");
	words.push_back("F");
	words.push_back("F");
	words.push_back(".");
	words.push_back("F");
	words.push_back("F");

	int r=4,c=0;
	FoxAndFlowerShopDivTwo A;
    cout<<A.theMaxFlowers(words, r,  c);
	//words.push_back("0");
	//words.push_back("1011");
	
	return 0; 
}
