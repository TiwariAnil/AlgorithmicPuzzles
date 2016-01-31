#include<iostream>
#include<string>

using namespace std;

class CCipher
{
       public:
	   string & decode(string & cipherText, int shift)
	   {
	         int i=0,j;
			 string text;
			 while(cipherText[i]!='\0')
	         {
                   if(cipherText[i]-shift < 65 )
                         text[i]= 25+cipherText[i]-shift;//90-(65-(ciprh -shift))
                   else
                         text[i]= cipherText[i]-shift;			 
			 
			 } 
			 return text;
	   }
};

int main()
{
   CCipher test;
   string s="DEFGH";
   cout<< test.decode(s,3);
   return 0;


}