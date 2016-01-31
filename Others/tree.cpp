#include<iostream>
#include<stdlib.h>

using namespace std;
typedef struct tnode
              {
                    int info;
                    tnode *lptr;
                    tnode *rptr;               
              }n1;
n1 *newptr,*temp,*save,*root,*prevtemp,*curr,*ptr,*prev,*copy,*save1;
int flag=0;    

tnode * createtree();
tnode * new_node(int);
int inordertree(tnode *);
int preordertree(tnode *);
int search(tnode *);
int deletetree(tnode *);
tnode * copytree(tnode *);
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
        inordertree(save);
        cout<<"\n\n the pre order display of the tree is :  \n";
       preordertree(save);
       
       
       cout<<"\nnow the copping started.............\n\n\n";
       system("pause");
       
	   save1=copytree(save);
           cout<<"\n\n the in order display of the copied tree\n";
        inordertree(save1);
       deletetree(save);
        cout<<"\n\n the in order display of the tree is :  \n\n";
       inordertree(save);
       search(save);
       
       if(flag==0)
       cout<<"\n\n value was not in the tree!!!!!! :(";
    
       return 0;
}

tnode * copytree(tnode * root)
{   
      
      if(root==NULL)
      return NULL;
      
    
      else
   {  n1 *tem;
    //tem=new tnode;
      tem=new_node(root->info);
   // tem->info=root->info;
      tem->lptr=copytree(root->lptr);
      tem->rptr=copytree(root->rptr);
      return tem;
}
    
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
                              //cout<<"hase 1";
                         } 
                    
                     else
                          curr=curr->lptr; //cout<<"hase 2";}
                   }
                  //if(newptr->info>curr->info)
                  else
                   {
                       if(curr->rptr==NULL)
                           {   
                              curr->rptr=newptr;  
                              flag=1; 
                              //cout<<"hase 3";
                           } 
                       else
                            curr=curr->rptr;// cout<<"hase 4";}
                    }  
              }
              cout<<"\nwant to enter more......(y/n)........";
              cin>>ch;
              flag=0;
         }                
      return root;          
} 

int inordertree(tnode *root)            
{    
    
     if(root!=NULL)
        {
            inordertree(root->lptr);
            cout<<root->info<<" , ";
           //delete root->lptr;         
            inordertree(root->rptr);
            return 1;
         }   
     
}     
int preordertree(tnode *root)            
{    
    
     if(root!=NULL)
        {
            
           //delete root->lptr;         
            preordertree(root->rptr);
            cout<<root->info<<" , ";
            preordertree(root->lptr);
            
            return 1;
         }   
     
}     
int search(tnode *root)            
{    int x;
    cout<<"enter the no u wanna search";
    cin>>x;
    if(root!=NULL)
        {
            if(root->info==x||root->lptr->info==x||root->rptr->info==x)
            {
                             cout<<"\n\nur value  "<<x<<" was found\n\n";
                       flag++;
                        return 0;
             }
            inordertree(root->lptr);
            
           //delete root->lptr;         
            inordertree(root->rptr);
            return 1;
         }   
     
}       
/*
void inorder (node *tree)
{
	if(tree != NULL)
	{
		inorder(tree->left);
		cout << tree->data;
		delete tree->data;
		inorder(tree->right);
	}


*/
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
      else if(curr->info==x)
           flag=1;
      else 
	       cout<<"this no. does not exist in the tree  \n\n";  
    }    
    if(flag==1)
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
                if(pos=='l') 
                          prev->lptr=curr->lptr;
                else
                          prev->rptr=curr->rptr;
          }                                   
     else if(curr->rptr==NULL)
              {   
                if(pos=='r') 
                  prev->rptr=curr->lptr;
                else
                  prev->lptr=curr->lptr;
               }
     else
        {
               temp=curr->rptr;
               prevtemp=temp;
               
               while(temp->lptr!=NULL)
                 {
                                      
                        prevtemp=temp;
                        temp=temp->lptr;
                 }
               curr->info=temp->info;
               prevtemp->lptr=NULL;           //temp->rptr;
       }

  return 0;

}           
                                                                            
                                   
            
            
            
            
            
            
            
            
            
            
            
            
