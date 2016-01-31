#include<stdlib.h>
#include<iostream>
#include<math.h>
using namespace std;

int a[]={75,95, 64,17, 47, 82,18, 35, 87, 10,20, 04, 82, 47, 65,19, 01, 23, 75, 03, 34,88, 02, 77, 73, 07, 63, 67,99, 65, 04, 28, 06, 16, 70,92,41, 41, 26, 56, 83, 40, 80, 70, 33,41, 48, 72, 33, 47, 32, 37, 16, 94, 29,53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14,70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57,91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48,63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31,04, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 04, 23};
main()
{
    int lines,take,temp[200]={0},temp3[16384]={0},temp4[16384]={0},var,time,skip,k,temp1,i,j,nos,line,res[16384]={0};
     int n;
         int flag=1;
     var=sizeof(a)/sizeof(int);
     nos=var; 
     for(i=1;i<100;i++)
      {     var=var-i;
           if(var==0)
               {line=i;cout<<"No of lines : "<<i<<"\n"; break;}
      }
     int b[line][line];
      temp1=1;
       for(i=0;i<line;i++)
         {
              for(j=0;j<line;j++)
                 {  b[i][j]=0;}// cout<<b[i][j];}
               //cout<<endl;                   
         }    
      for(i=1;i<line;i++)
         {
              for(j=0;j<=i && j<nos;j++)
                 {  b[i][j]=a[temp1+j]; cout<<b[i][j]<<" "; }
             
              temp1=temp1+j;
              cout<<endl;                    
         }    
     
         
         cout<<endl;
         for(i=0;i<line;i++)
             {temp[i]=b[line-1][i];cout<<temp[i]<<" ";}
             
         cout<<endl;             
         time=2;
         skip=0;
         int count=0,kick=0;
         int tempmax=0,jmax=0,nmax=0;
         for(i=line-2;i>0;i--)
             {
               var=0;count=0;cout<<endl;
              // cout<<"Line no : "<<i<<endl<<endl;
                   for(j=0;j<=i;j++)
                   {     
                                       
                        for(k=0;k<time;k++,kick++)               
                          {   
                             n=b[i][j]; 
                                         
                             
                             if(flag==1)  
                              {    
                                   // cout<<n<<" ";
                                    take=temp[j+k+skip];
                                    res[var+j+k]=n+take;
                                    cout<<res[var+j+k]<<" ";
                                    temp3[var+j+k]=res[var+j+k];
                                    cout<<temp3[2]<<" "<<res[2]<<" ";
                                 //   if(tempmax<res[var+j+k])
                                   //      { tempmax=res[var+j+k];cout<<tempmax<<" "; }//jmax=j;nmax=n;}   
                             //   temp3[]=res[]={67,125,164 164 93 31 27 91 77 98 159 123 151 165 165 140 103 123 166 166
                                //111 54 69 122 129 147 91 44 63 54 31
                              }   
                             else if(flag%2==0)
                              {   
                                  if(kick<time)
                                      take=temp3[kick];
                                  else
                                      take=temp3[j+k+skip];
                                   if(flag==2)
                                       cout<<temp3[2];//cout<<"Love "<<take<<endl;
                                  res[var+j+k]=n+take;
                                  if(flag==2) cout<<res[var+j+k]<<" ";
                                  temp4[var+j+k]=res[var+j+k];
                                  
                                   // if(tempmax<res[var+j+k])
                                     //    { tempmax=res[var+j+k];cout<<tempmax<<" "; jmax=j;nmax=n;}
                              }
                              else
                              {       if(kick<time)
                                      take=temp4[j+k];
                                   else
                                      take=temp4[j+k+skip];
                                     //take=temp4[j+k+skip];
                                      res[var+j+k]=n+take;
                                    // cout<<res[var+j+k]<<" ";
                                    temp3[var+j+k]=res[var+j+k];
                                   if(tempmax<res[var+j+k])
                                         { tempmax=res[var+j+k];cout<<tempmax<<" "; jmax=j;nmax=n;}
                                      //kick++;
                              }
                       //     count++;        
                     // if(n==75||n==64||n==82||n==87||n==82||n==75||n==73||n==28||n==83||n==32||n==91||n==78||n==58||n==73||n==93)
                       //  cout<<"\n The line "<<i<<"has the max : "<<tempmax<<"   Jmax : "<<jmax<<"  no;   "<<nmax<<"  "; 
                                         
                           }
                         
                         // if(j==0 || j==i)
                           //       cout<<"ist nd last no is -- :"<< n<<endl ;      
                          // if(i==(line-2))
                         //  skip=1; 
                        var=j+k;
                    }
                    kick=0;
                 time*=2;
                if(i==(line-2))
                   skip=0;   
                skip=skip+2;  
              //cout<<"\nLine ends here \n\n";    
              flag++;
                               
             }
             
             cout<<endl<<endl<<endl;
             int max=0;
             for(i=0;i<16384;i++)
                   //  cout<<res[i]<<"-";
               if(res[i]>max)
                     max=res[i];
             
             cout<<"Answer: "<<(max+75)<<"correct ans is : 1074"<<endl;        
           system("pause");
}
