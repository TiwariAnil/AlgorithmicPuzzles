#include<iostream>
#include<string>
#include<vector>
//#define ditherd s;
using namespace std;

class ImageDithering{
 public:
 int count(string dithered, vector <string> screen)
 { 
	char ch;int cout=0;
	int siz1;
	siz1=sizeof(dithered);	
    for(int i=0;i<siz1;i++)
       for( int loop = 0; loop < screen.size(); loop++ )
           for( int secLoop = 0; secLoop < screen[loop].size(); secLoop++ )
               if( screen[loop][secLoop] == dithered[i] )
			          count ++;    
		      
	
	
	return count;
};
