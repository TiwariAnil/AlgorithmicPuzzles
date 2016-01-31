#include<iostream>
#include<vector>
#include<string>
using namespace std;
class ImageDithering
{    public :
     int count(string &dithered, vector <string>& screen)
	 {
     int height, width,counts=0; 
	 height=screen.size();	 
     if(height!=0)
	 {
	     width=screen[0].length();
		 for(int i=0;i<height;i++)
		    for(int j=0;j<width;j++)
			         if(dithered.find( screen[i].substr(j,1))!=-1)
					         counts++;
    }
    return counts;
	}

};

int main()
{
   ImageDithering test;
   string s = "anil";
   vector <string> v;
   v.push_back("sdklf");
   v.push_back("jhfaa");
   v.push_back("ansli");
   cout<<"resutl : "<<test.count(s,v)<<endl;
   return 0;
}
