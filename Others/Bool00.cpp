#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    //int x;
    //	bool b, int a[3][3];   this is invalid for a bool matrix :[
    bool b,v;
    int s=3; //char v;
	bool ** a[s][s];bool k[s][s];  //both are valid thenn why to use 1st one,,,,,,because 1st 1 is pointer based...:)	
	cout<<"enter bool b"; 
    cin>>b;
    cout<<"printin bool";//b=0......for input of b =a-z,;[-/?>< any character,     0    ,
                         //b=1.....for any input as 1,1,2,4,45,54,-2,-66,.....execpt 0 any int,
    cout<<b;
     **a=new bool * [s];
    for(int i=0;i<s;i++)
     {  
			*a[i] = new bool * [s];
            for(int j=0;j<s;j++)    
             {
				//	cout<<"\n enter bool value  :   ";        ******cant not do this;;;;;   :(
				//	cin>>v;
				//	a[i][j]= v;
			    a[i][j]=false;       //u can only enter the two value 'true' 'false'
			    k[i][j]=false;
			} //   gets(a[i][j])// a[i][j]=false;//cin>>**a[i][j];//cout<<"\.";
     }
     
     /*

bool **Madj;
int NodeCount=4;

bool **Madj = new bool*[NodeCount];
for (int i=0; i<NodeCount; i++){
    Madj[i] = new bool [NodeCount];
    for (int j=0; j<NodeCount; j++){
        Madj[i][j] = false;
    }
}   */

    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)    
           cout<<"\nvalue of  a["<<i<<"]["<<j<<"].."<<a[i][j]<<".....and.."<<"value of  k["<<i<<"]["<<j<<"].."<<k[i][j];
    system("pause");
    return 0;

}
