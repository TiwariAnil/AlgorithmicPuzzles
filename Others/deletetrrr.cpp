deletetree(tnode *root,int x)
{
    tnode *prev;
    char pos;
    curr=root;
    if(c==NULL)
         cout<<"\nnode not found\n";
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
         delit(prev,curr,pos);  
 }
delit(tnode *prev,tnode *curr,char pos)
{
            i
     if(curr->lptr==NULL)
           if(curr->rptr==NULL)
                 if(curr->info < prev->info) 
                          prev->lptr=NULL;
                 else
                          prev->rptr=NULL;
                          
           else               
                if(pos='l') 
                          prev->lptr=curr->lptr;
                else
                          prev->rptr=curr->rptr;
                                              
     else if(curr->rptr=NULL)
           if(pos='r') 
                  prev->rptr=curr->lptr;
           else
                  prev->lptr=curr->lptr;
     else
        {
               temp=curr->rptr;
               while(temp->lptr!=NULL)
                 {
                        prevtemp=temp;
                        temp=temp->lptr;
                  }
               curr->info=temp->info;
               prevtemp->lptr=temp->rptr;
       }
}                                                                                       
