#include<iostream>
#include<string>

using namespace std;

class CCipher
{
       public:
	   string decode(string & cipherText, int shift)
	   {
	         int i=1,z,j;
			 char text[55];
			 text[0]='"';
			 while(cipherText[i]!=text[0])
	         {	
			       j=cipherText[i];
				        if(cipherText[i]-shift < 65 )
                         z= 25+ j-shift;//90-(65-(ciprh -shift))
                   else
                         z= j- shift;	
						
			       text[i]=(char) z;
				   i++;
			 } 
			text[i++]='"';
			return text;
	   }
};

int main()
{
   CCipher test;
   string s,t;
   cin>>s;
  //cout<<s;
   t=test.decode(s,3);
   cout<<endl<<t;
   return 0;
}