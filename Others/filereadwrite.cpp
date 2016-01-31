#include<iostream>
#include<fstream>
using namespace std;
struct stud
{
	int rol;
	char sex;
	char name[30];
		
};

int main()
{
	int i,x,c;
	stud s1;
	cout<<"How many records do you want to store  :   ";
	cin>>c;
	

	ofstream t;
	t.open("test.txt",ios::out);
	for(i=0;i<c;i++ )
	{
		cout<<"roll: ";cin>>s1.rol;
		cout<<"sex : ";cin>>s1.sex;
		cout<<"name: ";cin>>s1.name;
		cout<<endl;
		t.write((char*)&s1,sizeof(s1));
	}
	t.close();
	ifstream oja;
	oja.open("test.txt",ios::in);
	cout<<"Enter the roll no for which you want to search the results :   ";
	cin>>x;
	while(!oja.eof())
	{
	   oja.read((char*)&s1,sizeof(s1));
	   if(s1.rol==x)
		{
			cout<<"roll: ";cout<<s1.rol<<endl;
			cout<<"sex : ";cout<<s1.sex<<endl;
			cout<<"name: ";cout<<s1.name<<endl;
			return 0;
		}
	}
}

