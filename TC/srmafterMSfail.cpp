
#include<iostream>
#include<vector>
using namespace std;
class TheBrickTowerMediumDivTwo
{
	public:
		vector <int> find(vector <int> heights)
		{
			vector <int> res;
			int height,max1=-1,pos1,max2=-1,pos2;
			for(int i=0;i<height;i++)
		         if(max1<heights[i] )
					  max1=heights[i],pos1=i;			
				for(int i=0;i<height;i++)
		         if(max2 < heights[i] && max1!=heights[i])
					  max2=heights[i],pos2=i;
		
			res.push_back(min(pos1,pos2));		
			for(int i=0;i<height;i++)
		         if(heights[i]!=max1 && heights[i]!=max2)
					  res.push_back(i);
			res.push_back(max(pos1,pos2));
			return res;
		}
		
		
};



main()
{
	int x;
	cin>>x;
	cout<<x;
}









