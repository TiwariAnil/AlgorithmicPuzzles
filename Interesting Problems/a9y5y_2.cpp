Given a descending sorted array of size n, and an integer k, find the first occurence of k in the array ?



int fun(int a[], int st, int en, int k)
{
    int mid=(st+en)/2;

    if(st > en)
        return -1;

    if( a[mid]==k )
    {
        if(mid==0)
            return 0;
        if(a[mid-1]==k)
            fun(a, st, mid-1, k);
        else return mid;
    }
    else if( a[mid]>k)
        fun(a,mid+1, en, k);
   else
       fun(a, st, mid-1, k);
}

int binarySearch(int array[], int length, int k)
{
    int x=fun(array, 0, length-1, k);
    if(x==-1)
        cout<<"NO soln";
    else
        cout<<x;
}


---------------------------------------------------
Given the root node of a binary tree print the tree as follows
Example:
Tree
     1
  2     3
4   5  6   7

Answer:
1
2, 3
4, 5, 6, 7

1 -1
pop
1 , cout<<1, push(2,3)
-1, push(-1)
2 push(4,5)
3 push(6,7)
-1 push(-1)

1,
2, 3,
4, 5, 6, 7,



struct node {
    int value;
    node* left;
    node* right;
};

void print(node* root) {

    if(root==NULL)
        return;
    struct node * nd;
    queue <node *> q;
    nd=new node;
    nd->left=nd->right=NULL;
    nd->value=-1;
    q.push(root);
    q.push(nd);

    while(!q.empty())
    {
        struct node *tmp = q.front();
        q.pop();

        if(tmp->value==-1 && !q.empty())
        {
            cout<<endl;
            nd=new node;
            nd->left=nd->right=NULL;
            nd->value=-1;
            /delete(tmp);
            q.push(nd);
        }
        else if(!q.empty())
        {
            struct node *tmp2=q.front();
            if(tmp2->value==-1)
                cout<<tmp->value;
            else
                cout<<tmp->value<<", ";
            if(tmp->left!=NULL)
                q.push(tmp->left);
            if(tmp->right!=NULL)
                q.push(tmp->right);
            delete(tmp);
        }
    }
}

