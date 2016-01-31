#include <iostream>
#include <algorithm>
#include <cstdio>
#include <set>
#include <cstdlib>
using namespace std;
multiset<long long > ms;
multiset<long long > ::iterator pointer,temp,temp1;
int main()
{
	
	int num;
	long long median = 0;
	char op;
	long long b,flag;
	cin>>num;
	while(num--)
	{ 
		cin>>op>>b;
		if(op=='a')
		{
			ms.insert(b);
			if(ms.size()==1)
			  {
				//median = b;
				flag = 0;
			    pointer = ms.begin();
			    //cout<<median<<"\n";
			   }
			else 
			  if((ms.size()%2)==0)
			     {
					if(b < *pointer)
					  {
					  // cout<<"1"<<"\n";
                          
					  }
					else
					 {
					//	cout<<"2"<<"\n";
						pointer++;
					 }
					  //cout<<median * 0.5<<"\n";
					  flag = 1;
				 }
			else
			   { 
					if(b >= *pointer)
					   { 
						//	cout<<"3"<<"\n";
						//median = *pointer;
						}
					else 
					   {
						//	cout<<"4"<<"\n";
						pointer--;
					//	median = *pointer;
					   }
					   flag = 0;
					//cout<<median<<"\n";	
			  }	   
		}
		else 
			if(op=='r' && ms.size()>0)
				{
					/*if(ms.size()==0)
					{
						cout<<"Wrong!\n";
						continue;
					}*/
				//	else
					
						temp1 = ms.find(b);
						if(temp1==ms.end() || *temp1!=b)
						{
							cout<<"Wrong!\n";
						}
						else
						if(*pointer==b)
						  {
							if((ms.size()%2)!=0)
							  {
									pointer++; 
									flag = 1;
							  }
							 else
							    {
						               temp = pointer;
						               temp--;
									   if(*temp!=b)
									    pointer--;
							           flag = 0;
								} 
						  }
						else 
						if((ms.size()%2)==0)
			                {
					           if(b < *pointer)
					            {
					              // cout<<"1"<<"\n";
					            }
					           else
					            {
					             //	cout<<"2"<<"\n";
						           pointer--;
					            }
					            flag = 0;
				            }
			            else
			               { 
					         if(b > *pointer)
					           { 
						         //	cout<<"3"<<"\n";
						       }
					         else 
					           {
						        //	cout<<"4"<<"\n";
						        pointer++;
					           }
							   flag = 1;	
			               }
			               ms.erase(temp1);
			               
					
				}
				          if(ms.size()==0)
			               {
							cout<<"Wrong!\n";
							// cout<<"1"<<"\n";      check
						   }
			               else if(flag == 0)
			                {
								median = *pointer;
								 //	cout<<"2"<<"\n";
								 cout<<median<<"\n";
								}
	
							else
							{
								temp = pointer;
								--temp;
								median = *pointer + *temp;
								    if(median%2!=0)
									printf("%.1lf\n", median * 0.5); // or cout<<median * 0.5<<"\n";
                                     else
                                    cout<<median / 2;
                                   
							}
	
	}
	//system("pause");
	return 0;
	
}
