#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
    char s;	
    long long x,a,b,res=0,flag;
	float temp1,temp2;
	multiset<int> m;
	multiset<int>::iterator p,it,val;
	for(int i = 0; i < N; i++)
        {
			cin >>s>>x;
          	if(s=='r')
			{
			/*		
				if(m.size()>0)
				{
						p = m.find(x);
						for (it=m.begin(); it!=m.end(); it++)
    					{
							if(*it==x)
							{ 
								m.erase(it);
								a=m.size();
								//cout<<a<<"  siz   ";
								if(a==0)
								   break;
								p=m.begin();
								if(a%2==0)
									{	
										if(a>2)
										{	int j=1;
											while(j<=a/2-1)
												p++,j++;					
										}
										//cout<<"*p++: "<<*(++p);
										temp1=*p;
									//	cout<<"t1 :  "<<temp1;
										p++;
										temp2=*p;
									//	cout<<"t2 :  "<<temp2;
										temp=(temp1+temp2)/2;
										cout<<temp<<endl;
									}	
								else
									{
										int j=1;
										while(j<=(a/2))
										p++,j++;
										temp=*p;
										cout<<temp<<endl;
									}
								flag=1;
								break;
							}		
						}
						if(flag==0)
							cout<<"Wrong!\n";
					}
					else
						cout<<"Wrong!\n";	
			}
*/
			
				if(m.size()>0)
					{
						p = m.find(x);
        				if(p == m.end() || *p != x)
			 				{ cout << "Wrong!\n"; goto c;}
						else if(*val==x)
						{
     					   	if(m.size()%2 != 0)
								val++;
           					else 
							{
				            	it = val; 
								it--;
				            	if(*it != x) 
								  val--;
				            }   
       					}
				        else if(x>=*val && m.size()%2 == 0)
							 val--;
				        else if(x<=*val && m.size()%2 != 0)
							 val++;
				        m.erase(p);                      
				    }
				 //else   
			    //	{cout << "Wrong!\n";continue;}
			}			 		
			else   
			{
				/*	m.insert(x);
						a=m.size();
						p=m.begin();
						if(a%2==0)
							{
								if(a>2)
								{	int j=1;
									while(j<=a/2-1)
										p++,j++;					
								}
								temp1=*p;
								p++;
								temp2=*p;
								temp=(temp1+temp2)/2;
								cout<<temp<<endl;
							}	
						else
							{
								int j=1;
								while(j<=(a/2))
								p++,j++;
								temp=*p;
								cout<<temp<<endl;
							}			
			}      */
		        m.insert(x);
		        if(m.size()==1)
					 val = m.begin();
		        else if(x >= *val && m.size()%2 == 0)
					 val++;
		        else if(x < *val && m.size()%2 != 0)
					 val--; 
		    }        
			if(m.size()==0) 
				cout << "Wrong!\n";
		    else if(m.size()%2!=0)
				cout << *val << endl;
		    else 
			{ 
		          res = *val;
		          val--;
		          res = res+*val;
		          if(res%2==0)
		              printf("%.0f\n", res/2.);
		          else
		              printf("%.1f\n", res/2.);
		          val++;
		    }
				c:
				flag=0;
		}
	return 0;
}
