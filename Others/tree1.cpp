#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct tnode
              {
                    int info;
                    tnode *lptr;
                    tnode *rptr;               
              }n1;
n1 *newptr,*temp,*save,*root,*prevtemp,*curr,*ptr,*prev;      

tnode * createtree();
tnode * new_node(int);
int displaytree(tnode *);
int deletetree(tnode *);
int delit(tnode *,tnode *,char);
tnode * new_node(int num)
	 {
	   ptr = new tnode;
	   ptr->lptr=NULL;
       ptr->rptr=NULL;
	   ptr->info=num;
	   return ptr;
	 }
int main()
{      
       root=NULL;
       save = createtree();
        cout<<"\n the in order display of the tree is :  \n";
       displaytree(save);
       deletetree(save);
        cout<<"\n the in order display of the tree is :  \n";
       displaytree(save);
       system("pause");
       return 0;
}
tnode * createtree()
{
       char ch='y';
       int x,flag=0;
              
       while(ch=='y')
         {
              cout<<"\nenter the info for the leave of tree\n\t\t\t............";
              cin>>x;
              newptr=new_node(x);
              if(newptr==NULL)
                  cout<<"Aborting\n";
              if(root==NULL)
                  {
                            root=newptr;
                            flag=1;               
                	}             
              curr=root;
                                
              while(flag==0)
              {
                 if(newptr->info < curr->info)
                  {  
                     if(curr->lptr==NULL)
                        {   
                              curr->lptr=newptr;  
                              flag=1; 
                        } 
                    
                     else
                          curr=curr->lptr; 
                   }
    
                  else
                   {
                       if(curr->rptr==NULL)
                           {   
                              curr->rptr=newptr;  
                              flag=1; 
    
                           } 
                       else
                            curr=curr->rptr;
                    }  
              }
              cout<<"\nwant to enter more......(y/n)........";
              cin>>ch;
              flag=0;
         }                
      return root;          
} 

int displaytree(tnode *root)            
{    
    
     if(root!=NULL)
        {
            displaytree(root->lptr);
            cout<<root->info<<" , ";        
            displaytree(root->rptr);
            return 1;
         }   
     
}
       
int deletetree(tnode *root)
{
    char pos;
    int x,flag=0;
    cout<<"\n\nenter the no u want to delete       ";
    cin>>x;

    prev=NULL;
    curr=root;
    if(curr==NULL)
         cout<<"\nnode not found\n";
    while(flag==0)
    {     
    
      if(curr->info>x)
          {
            prev=curr;
            curr=curr->lptr;
            pos='l';
          } 
    
      else if(curr->info<x)
          {
            prev=curr;
            curr=curr->rptr;
            pos='r'; 
           }
      else
          flag=1
    
    }    
    delit(prev,curr,pos);      
    return 0;    
 }
int delit(tnode *prev,tnode *curr,char pos)
{
     temp=NULL;
     prevtemp=NULL;      
     if(curr->lptr==NULL)
          { if(curr->rptr==NULL)
                 if(curr->info < prev->info) 
                          prev->lptr=NULL;
                 else
                          prev->rptr=NULL;
                          
           else               
                if(pos='l') 
                          prev->lptr=curr->lptr;
                else
                          prev->rptr=curr->rptr;
          }                                   
     else if(curr->rptr==NULL)
              {   
                if(pos='r') 
                  prev->rptr=curr->lptr;
                else
                  prev->lptr=curr->lptr;
               }
     else
        {
               temp=curr->rptr;
               prevtemp=temp;
               cout <<"\n\n\n at destination";
               while(temp->lptr!=NULL)
                 {
                        cout <<"\n\n\n into the loop";              
                        prevtemp=temp;
                        temp=temp->lptr;
                 }
               curr->info=temp->info;
               prevtemp->lptr=NULL;          
       }

  return 0;

}           
                                                                            
                                   
                                
            
            
            
            
            
            
            
            
            
            
            
            
