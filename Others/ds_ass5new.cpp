#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
/*___________________________________________________________________________
|In this program                                                             |  
|'s' stands for sorted insertion                                             |
|'b' stands for insertion or deletion from begning                           |
|'e'  stands for insertion or deletion from end                              |
|'l' is linear linklist                                                      |    
|'c' is circular linklist                                                    |
|____________________________________________________________________________|*/
typedef struct node  {
				    int info;
				    linknode *next;
			     }n1;
n1 *newptr,*temp,*rear,*front,*ptr,*dptr;
void linked_stack();
void linked_queue();
void Cqueue_circularlinklist();
void sortedinsertion_linklist();
void DEqueue(); 
void insert(char,char);
void delet(char,char);
void display(char);

node * new_node(int num)
	 {
	   ptr=new node;
	   ptr->next=NULL;
	   ptr->info=num;
	   return ptr;
	 }
int main()
{
    char ans='y';
    int num;
    
    while(ans=='y')
      {
         cout<<"Enter the operation u want to perform\n";
         cout<<"1. Linked stack\n"<<"2. Linked queue\n"<<"3. Circular queue using circular link list\n"<<"4. DEqueue using linklist\n"<<"5. Sorted insertion in link list\n" ;
         cin>>num;
	 switch(num)
	       {
		    case 1:linked_stack();
			       break;
			case 2:linked_queue();
			       break;
			case 3:Cqueue_circularlinklist();
                   break;
            case 4:DEqueue();
                   break; 
            case 5:sortedinsertion_linklist();
                   break;              
		     default :cout<<"Wrong choice...........Please see the menu properly!!!!!!!!!!!!!!!!!!!\n\n";
		              break; 
		}
	cout<<"Do u want to see the main menu again..............(y/n)";
	cin>>ans;
	system("cls");
      }
      system("pause");
}
void linked_stack()
  { 
     front=NULL;
     rear=NULL;
    system("cls");
    int num;
    char ans='y';
    while(ans=='y')
       {
       cout<<"\nEnter the operation u want to perform on linked stack";
       cout<<"\n1.Insert in the linked stack"<<"\n2.Delete from the linked stack";
       cin>>num;
	   switch(num)
           {
                  case 1:insert('e','l');
                         display('l');
                         break;
                  case 2:delet('e','l');
                         display('l');
                         break;
                  default:cout<<"wrong choice..........please see the menu properly!!!!!!!!!\n";
                          break;
                                          
            }
            system("cls");
            cout<<"\nDo you want to perform another operation on linked stack.....(y/n) ";
            cin>>ans;
        }
        system("pause");
    }
       
   void linked_queue()
    {
     front=NULL;
     rear=NULL;
    system("cls");
    int num;
    char ans='y';
    while(ans=='y')
       {
       cout<<"\nEnter the operation u want to perform on linked queue";
       cout<<"\n1.Insert in the linked queue"<<"\n2.Delete from the linked queue";
       cin>>num;
	   switch(num)
           {
                  case 1:insert('e','l');
                         display('l');
                         break;
                  case 2:delet('b','l');
                         display('l');
                         break;
                  default:cout<<"wrong choice..........please see the menu properly!!!!!!!!!\n";
                          break;
                                          
            }
            system("cls");
            cout<<"\nDo you want to perform another operation on linked queue.....(y/n) ";
            cin>>ans;
        }
        system("pause");
    }
    void Cqueue_circularlinklist()
     { 
     front=NULL;
     rear=NULL;
    system("cls");
    int num;
    char ans='y';
    while(ans=='y')
       {
       cout<<"\nEnter the operation u want to perform on circular queue(using circular linklist)";
       cout<<"\n1.Insert in the circular queue(using circular linklist)"<<"\n2.Delete from the circular queue(using circular linklist)";
       cin>>num;
	   switch(num)
           {
                  case 1:insert('e','c');
                         display('c');
                         break;
                  case 2:delet('b','c');
                         display('c');
                         break;
                  default:cout<<"wrong choice..........please see the menu properly!!!!!!!!!\n";
                          break;
                                          
            }
            system("cls");
            cout<<"\nDo you want to perform another operation on circular queue.....(y/n) ";
            cin>>ans;
        }
        system("pause");
    }
    void DEqueue()
    { 
     front=NULL;
     rear=NULL;
    system("cls");
    int num,choice,wish;
    char ans='y';
    cout<<"Enter in which type of double ended queue you want perform operation\n";
    cout<<"\n1.Input restricted\n"<<"\n2.Output restricted\n";
    cin>>choice;
    system("cls");
    while(ans=='y')
       {
       
       cout<<"\nEnter the operation u want to perform on  DEqueue(using linklist)";
       cout<<"\n\n1.Insert in the DEqueue(using linklist)......"<<"\n\n2.Delete from the DEqueue(using linklsit).......";
       fflush(stdin);
       cin>>num;
       system("cls");
           if(choice==1)
               { 
                  cout<<"\t\tInput restricted\n\n";
	              switch(num)
                     {
                  case 1:insert('e','l');
                         display('l');
                         break;
                  case 2:cout<<"From where u want to delete....\n\n";
                         cout<<"1.Front\n\n"<<"2.Rear\n\n";
                         cin>>wish;
                         if(wish==1)
                           {
                             delet('b','l');
                             display('l');
                         } else if (wish==2) {
                               delet('e','l');
                               display('l');
                               }
                         break;
                  default:cout<<"wrong choice..........please see the menu properly!!!!!!!!!\n";
                          break;
                          }
                                          
                     }
                     else if(choice==2)
                     {
                          cout<<"\t\tOutput restricted\n\n";
                          switch(num)
                             {
                              case 1:
                                      cout<<"From where u want to insert....\n\n";
                                      cout<<"1.Front\n\n"<<"2.Rear\n\n";
                                      cin>>wish;
                                       if(wish==1)
                                          {
                                            insert('b','l');
                                            display('l');
                                           } else if (wish==2) {
                                             insert('e','l');
                                             display('l');
                                             }
                                       break;      
                              case 2:delet('b','l');
                                     display('l');
                                     break;
                              default:cout<<"wrong choice..........please see the menu properly!!!!!!!!!\n";
                                     break;
                                          
                             }
                      }
                     
            system("cls");
            cout<<"\nDo you want to perform another operation on circular queue.....(y/n) ";
            cin>>ans;
               }
        system("pause");
         }
       void sortedinsertion_linklist()
         {  front=NULL;
            rear=NULL;
            char ans='y';
            cout<<"Sorted insertion begins\n\n";
            system("pause");
            system("cls");
            while(ans=='y')
            {
              display('l');
              cout<<"do u want to enter more";
              cin>>ans;
            }
         }                      
   void insert(char ch,char type)
     {    system("cls");
          int num;
         cout<<"Enter the INFO for new node\n";
	     cin>>num;
	     newptr=new_node(num);
	     if(newptr==NULL)
	        {
	           cout<<"\nCannot create new node!!!!Aborting";
	           exit(1);
	        }
	         if(front==NULL)
			        { front=newptr;
			           rear=newptr;    
                       }               
        else if(type=='l')
        {   
            if(ch=='b')
              {
		          newptr->next=front;
	              front=newptr;
              }
          else if(ch=='e')
               {
                    rear->next=newptr;
                    rear=newptr;
               }
        }  
        else if(type=='c')
         {   
             rear->next=newptr;
             rear=newptr;
             newptr->next=front;
             
         }           
         system("pause");      
                                   
     }
void delet(char ch,char type)
{	system("cls");
    if(front==NULL)
		     {
			 cout<<"\nLink list is empty!!!!!!!!!Aborting";
			 system("pause");
			 //exit(1);
             }
        if(type=='l')
        {
             if(ch=='b')
               {  
                   cout<<"\nThe deleted element is"<<front->info<<"\n";
	               front=front->next;
                   }
         if(ch=='e')
               {   
               temp=front;
              
               while(temp->next!=rear)
                   {
                       temp=temp->next;
                     }
                     cout<<"\nThe deleted element is "<<rear->info<<"\n\n";
                     rear=temp;
                     rear->next=NULL;    
                     
                                      
               }
        }
         if(type=='c')
             { 
                         cout<<"The deleted element is"<<front->info<<"\n";
	                     front=front->next;
	                rear->next=front;
             }                 
system("pause");          
} 
void display(char ch) 
{    system("cls");
     cout<<"\nnow the linked list contains\n";
     dptr=front;
          if(ch=='l')
              {
                 while(dptr!=NULL)
                  {
                      cout<<dptr->info<<"->";
                      dptr=dptr->next;                                             
                  }
                  cout<<"!!!\n";
              } 
              else if(ch=='c')
              {   
                 
                  if(front==rear)
                  cout<<front->info<<"->";
                    else 
                  {          
                      while(dptr->next!=front)
                            {  
                               cout<<dptr->info<<"->";
                               dptr=dptr->next;   
                            }
                       cout<<dptr->info<<"->";
                   }
                   cout<<front->info;
                   
              }                            
   system("pause");                    
}          
          
          
          
          
          
          
          
