#include<stdio.h>
#include<iostream>
using namespace std;
int sex[100000]={0};
#include<stdio.h>
#include<iostream>
using namespace std;
int sex[100000]={0};
class mix
 {  
    public:
    int result()
    {   int i,p,q,n,a,ask=0,b,count=0,temp,tempcount=0,temppos=0,count1=0,count2=0,low=9999,high=0;
	    int se[100000]={0},re[100000]={0};
        scanf("%d",&n);scanf("%d",&q);
   
     while(q--)
     { 
	     scanf("%d",&p);scanf("%d",&a);scanf("%d",&b);
         /*for(i=0;i<n;i++) {   sex[i]=0;}       */
		 //if(p==0 && ask==0)
           //{  low=a;high=b; ask=1;	}	 
	     if(p==0)
		      for(i=a;i<=b;i++)
              { 
                  if(se[i]==0)
			         { 
					     if()
    					 se[i]=1;  re[i]=re[i-1]+1;
					 }
				 else  {se[i]=0; tempcount--;}				 
              }
		 else
 		 {   
              

		 }
	 }
       return 0;
   }
};

int main()
{   mix test;
   //for()
 test.result();
 return 0;
}

/*
class mix
 {  
    public:
    int result()
    {   int i,p,q,n,a,ask=0,b,count=0,temp,tempcount=0,count1=0,count2=0,low=9999,high=0;
	    int sex[100000]={0};
        scanf("%d",&n);scanf("%d",&q);
        //temp=q;
     while(q--)
     {  // cout<<"q: "<<q<<endl;
	     scanf("%d",&p);scanf("%d",&a);scanf("%d",&b);
         for(i=0;i<n;i++) {   sex[i]=0;}       
		 if(p==0 && ask==0)
           {  low=a;high=b; ask=1;	}	 
	     if(p==0)
		      for(i=a;i<=b;i++)
              { 
                  if(sex[i]==0)
			         {
    					 sex[i]=1;  tempcount++;
					 }
				 else  {sex[i]=0; tempcount--;}				 
              }
		 else
 		 {    //if(a<=low && b>=high) //    printf("%d\n",tempcount);
               if (a>low && b<high)					
		        {  count1=0;count2=0;   //cout<<"flag : 1\n";
				   for(i=low;i<=a;i++)
                      if(sex[i]==1)
			             count1++;
                   for(i=b;i<=high;i++)
				       if(sex[i]==1)
					       count2++;
					//if(tempcount!=0)	   
				      printf("%d\n",tempcount-count1-count2);
				}
			  else if(a>low && b>=high)
			      {  count1=0;
                   	//cout<<"flag : 2\n";			   
				    for(i=low;i<a;i++)
                       if(sex[i]==1)
			             count1++;
				      printf("%d\n",tempcount-count1);
				  }  
				else if(a<=low && b<high)
                  {   count2=0;
				       //cout<<"flag : 3\n";
     				  for(i=b+1;i<=high;i++)
				       if(sex[i]==1)
					       count2++;
				     printf("%d\n",tempcount-count2);				
			      }
                else     			  
                   { //   cout<<"flag : 4\n";                       
					   printf("%d\n",tempcount);  }
		    //         printf("%d\n",count);			   
	      
	      //  if(q=!(temp-1))
//           {
		   if(low>a)
       		      low=a;
	        	 if(high<b)
         	    	  high=b;
	//        }		  
//		 count1=0;count2=0;
		 // count=0;
		 }
	//	cout<<"q: "<<q;//<<endl; 
		// cout<<"tempcnt : "<<tempcount<<"\n";cout<<"low : "<<low<<"\n";cout<<"high : "<<high<<"\n";
	 }
	//cout<<endl<<low<<high;
       return 0;
   }
};

int main()
{   mix test;
   //for()
 test.result();
 return 0;
}*/