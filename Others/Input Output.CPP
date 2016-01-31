#include<iostream>
#include<conio.h>
#include<fstream.h>
#include<string.h>
using namespace std;
class Phonlist
{
      char Name[20];
      char Address[30];
      
      //char Areacode[5];
      char PhoneNo[15];
      public:
      int code;
      //void Register();
      void input()
      {
           cin>>code;
       cin>>Name;
       cin>>PhoneNo;     
       cin>>Address;
      }
      void output()
      {
           cout<<code<<" --- ";
       cout<<Name;cout<<" ---- ";cout<<PhoneNo;cout<<" --- "<<Address;     
      }
};//ph;
int transfer()
{  ifstream fin;
   ofstream fout;
   Phonlist ph;
   fin.open("PHONE.txt",ios::in|ios::binary);
   fout.open("PHONBACK.txt",ios::out|ios::binary);
   while(!fin.eof())
   {
                    fin.read((char*)&ph,sizeof(ph));
                    if(ph.code==34 )
                            fout.write((char*)&ph,sizeof(ph));//fout<<ph.code;//
   }
   fin.close();
   fout.close();
   return 0;
  }
int main()
{
    ofstream out;
    out.open("PHONE.txt",ios::out|ios::binary);
    Phonlist p1;
    //p1.input();
    //p1.output();
    cout<<"times : ";
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
            p1.input();p1.output();cout<<endl;
            out.write((char*)&p1,sizeof(p1));
     }
    
    transfer();
    //int an;
    //cin>>an;
              getch();
    return 0;   
}
