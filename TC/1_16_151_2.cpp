#include<iostream>
#include<vector>
#include<string>
using namespace std;

class PrefixCode
{
     public:
	 void isOne(vector <string> & words)
	 {
		int height, width, i ,j,flag=0;
		string temp;
		height=words.size();
		cout<<height;
		if(height>1)		
		{
		     
			for(i=0;i<height;i++)
			{   temp=words[i];width=words[i].length();
				flag=0;
				for(j=0;j<height;j++)
                    {  
					    if(j!=i)
						{   
                            for(int k=0;k<width;k++)						
				                if(words[i][k]!=words[j][k])
							       {
     								   flag++; cout<<"flag : "<<flag;break;
								   }   
							
					       if(flag==0)
						          {cout<<'"'<<"NO"<<", "<<i<<'"';break;}
						}					
					}  
				//	if(flag==0)
				  //      break;//{cout<<'"'<<"NO"<<", "<<i<<'"';break;}
			       // else
					    
			}
          if(flag!=0)
				cout<<'"'<<"YES"<<'"';				
   
    	}
        else
		    cout<<'"'<<"YES"<<'"';	
	 }
};


int main()
{
    PrefixCode test;
    vector <string> words;
	
	/*
	words.push_back("1010");
	words.push_back("11");
	words.push_back("100");
	words.push_back("0");
	words.push_back("1011");
	/*
	words.push_back("no");
	words.push_back("nosy");
	words.push_back("neighbors");
	words.push_back("needed");
	/
	words.push_back("10001");
	words.push_back("011");
	words.push_back("100");
	words.push_back("001");
	words.push_back("10");
	/
	words.push_back("trivial");
	
	*/
	
	words.push_back("No");
	words.push_back("not");
	test.isOne(words);
	
    return 0;
}