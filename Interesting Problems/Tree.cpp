//Data Structure includes
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
//Other Includes
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<sstream>
//some common functionn
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define FORs(i,a,b)             for(int i=a;i>=b;i--)
#define fill(a,v)               memset(a,v,sizeof a)
#define abS(x)                  ((x)<0?-(x):(x))
#define mP                      make_pair
#define pB                      push_back
#define error(x)                cout << #x << " : " << (x) << endl
#define all(c)                  (c).begin(),(c).end()
// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

// Output macros
#define p(n)                        printf("%d",n)
#define pc(n)                       printf("%c",n)
#define pl(n)                       printf("%lld",n)
#define pf(n)                       printf("%lf",n)
#define ps(n)                       printf("%s",n)

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef pair<int,PII> TRI;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<PII> VII;
typedef vector<PLL> VLL;
typedef vector<TRI> VT;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VII> VVII;
typedef vector<VLL> VVLL;
typedef vector<VT> VVT;

using namespace std;

void chekarre(int * arr,int n)
{
    cout<<"[";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"]"<<endl;
}

struct NODE
{
    int info;
    NODE *left, *right;
}*root, *newNODE, *useit;

void createtree(int data)
{
    newNODE = new NODE;
    newNODE->info=data;
    newNODE->left=NULL;
    newNODE->right=NULL;
    if(root==NULL)
    {
        root=newNODE;
    }
    else
    {
        useit=root;
        while(1)
        {
            if(data <= useit->info )
            {
                if(useit->left==NULL)
                {
                    useit->left=newNODE;
                    break;
                }
                else
                    useit=useit->left;
            }
            if(data > useit->info )
            {
                if(useit->right==NULL)
                {
                    useit->right=newNODE;
                    break;
                }
                else
                    useit=useit->right;
            }
        }
    }
}

void postorder(NODE *nd)
{
    if(nd->left!=NULL)
        postorder(nd->left);
    if(nd->right!=NULL)
        postorder(nd->right);
    cout<<nd->info<<"->";
}

void inorder(NODE * nd)
{
    if(nd->left!=NULL)
        inorder(nd->left);
    cout<<nd->info<<"->";
    if(nd->right!=NULL)
        inorder(nd->right);
}

void preorder(NODE * nd)
{
    cout<<nd->info<<"->";
    if(nd->left!=NULL)
        preorder(nd->left);
    if(nd->right!=NULL)
        preorder(nd->right);

}

void display()
{
    cout<<"INO :     ";
    inorder(root);
    cout<<endl;
    cout<<"POST:    ";
    postorder(root);
    cout<<endl;
    cout<<"PRE :     ";
    preorder(root);
}

NODE * search(int val, NODE * nd)
{
    if(nd->info==val)
    {
        cout<<"GOT that Bastard \n";
        return nd;
    }
    if(val < nd->info)
    {
        if(nd->left!=NULL)
            search(val, nd->left);
        else
        {
            cout<<"NOT FOUND at left\n";
            return NULL;
        }
    }
    if( val > nd->info)
    {
        if(nd->right!=NULL)
            search(val, nd->right);
        else
        {
            cout<<"NOT FOUND at right\n";
            return NULL;
        }
    }
}

void deleteit(int val, NODE * nd)
{
    //    incmplete iguess
    if(nd->left->info==val)
    {
        if(nd->left->left==NULL && nd->left.->right==NULL)
        {
            nd->left=NULL;
            return ;
        }
        if(nd->left->left==NULL)
        {
            nd->left=nd->left->left->right;
        }
        if(nd->left->right==NULL)
        {
            nd->left=nd->left->left->right;
        }

    }
    if(nd->right->info==val)
    {

    }
}

void deleteNODE(int val)
{
    NODE * nd, * ptr;
    ptr = search( val, root);
    if(ptr!=NULL)
    {
        deleteit(val, root);
    }
}

// 3 see 1 first
void Justprintpath(int *path,int len)
{
    FOR(i,0,len)
    cout<<path[i]<<" ";
    cout<<endl;
}
// 2  see 1 first
int Print_All_the_Paths_Recursively(int *path, NODE *nd, int len)
{
    // A PreOrder i.e root, then children
    if(root==NULL)
        return 0;
    path[len]=nd->info;
    len++;
    if(nd->left==NULL && nd->right==NULL) // Leaf
    {
        Justprintpath(path, len);
    }
    else
    {
        Print_All_the_Paths_Recursively(path, nd->left, len);
        Print_All_the_Paths_Recursively(path, nd->right, len);
    }
    return 1;
}
// 1 see 2 related fun up ^
void Print_path_main()
{
    int *path;//[1000];
    path= (int *)malloc(sizeof(int)*100);
    Print_All_the_Paths_Recursively(path,root,0 );
}
//-------------------------------------------
void kth_smallest(NODE *nd, int k)
{
    static int cnt=0;
    if(nd==NULL || cnt>=k)
        return ;

    kth_smallest(nd->left, k);
    cnt++;
    if(cnt==k)
    {
        cout<<"Kth Smallest : "<<nd->info<<endl;
        return ;
    }
    //error(nd->info);

    kth_smallest(nd->right, k);
}

void Iterative_INORDER__DFS()
{
    NODE * curr=root, *tmp;
    stack <NODE *> s;
    int done=0;
    while(!done)
    {
        if(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        else if(!s.empty())
        {
            tmp=s.top();
            s.pop();
            cout<<tmp->info<<"-->";
            curr=tmp->right;
        }
        else
            done=1;
    }
    return;
}

void Iterative_LEVELWISE__BFS()
{
    cout<<"\nPrinting in LEVEL: ";
    NODE * curr=root, *tmp;
    queue <NODE *> q;
    q.push(root);
    //q.push(NULL);
    while(!q.empty())
    {
        tmp=q.front();
        q.pop();
        cout<<tmp->info<<" ";
        if(tmp->left)
            q.push(tmp->left);
        if(tmp->right)
            q.push(tmp->right);
    }
    cout<<endl;
}

void Level_Wise_On_NewLine()
{
    cout<<"\nPrinting LEVELwise : \n";
    NODE * tmp, *nd;
    queue<NODE *> q;
    q.push(root);
    nd=new NODE;
    nd->left=nd->right=NULL;
    nd->info=-20;
    q.push(nd); // to seperate the first level
    while(!q.empty())
    {
        tmp=q.front();
        q.pop();
        //error(tmp->info);
        if(tmp->info==-20 && !q.empty())
        {

            //delete(tmp);
            nd=new NODE;
            nd->left=nd->right=NULL;
            nd->info=-20;
            cout<<endl;
            q.push(nd);
        }
        else if(!q.empty())
        {
            cout<<tmp->info<<" ";
            if(tmp->left)
                q.push(tmp->left);
            if(tmp->right)
                q.push(tmp->right);
        }
    }
    cout<<endl;
}

void Level_Wise_spiral(NODE * root)
{
    // double ended queue, or below this is using 2 stacks
    // O(n)
    if (!root) return;
    deque <NODE*> nodesQueue;
    int nodesInCurrentLevel = 1;
    int nodesInNextLevel = 0;
    nodesQueue.push_back(root);
    bool dir = true;
    while (!nodesQueue.empty())
    {
        NODE* currNode ;
        if(dir)
        {
            currNode = nodesQueue.front();
            nodesQueue.pop_front();
        }
        else
        {
            currNode = nodesQueue.back();
            nodesQueue.pop_back();
        }
        nodesInCurrentLevel--;
        if (currNode)
        {
            cout << currNode->info << " ";
            if(dir)
            {
                nodesQueue.push_back(currNode->left);
                nodesQueue.push_back(currNode->right);
            }
            else
            {
                nodesQueue.push_front(currNode->right);
                nodesQueue.push_front(currNode->left);
            }
            nodesInNextLevel += 2;
        }
        if (nodesInCurrentLevel == 0)
        {
            cout << endl;
            nodesInCurrentLevel = nodesInNextLevel;
            nodesInNextLevel = 0;
            dir = dir ? false: true;

        }
    }
}

void ZigZag(NODE *root)
{
    stack<NODE *> s1;
    stack<NODE *> s2;
    NODE *temp;
    /*Put the first node into stack*/
    s1.push(root);
    while(1)
    {
        while(s1.size() > 0)
        {
            temp = s1.top();
            s1.pop();
            cout<<" "<<temp->info;
            /*Put the data in left right fashion*/
            if(temp->left)
                s2.push(temp->left);
            if(temp->right)
                s2.push(temp->right);
        }
        cout<<endl;
        while(s2.size() > 0)
        {
            temp = s2.top();
            s2.pop();
            cout<<" "<<temp->info;
            /*REVERSE!!!Put the data in right left fashion*/
            if(temp->right)
                s1.push(temp->right);
            if(temp->left)
                s1.push(temp->left);
        }
        cout<<endl;
        if(s2.size() == 0 && s1.size() == 0)
            break;
    }


}


NODE * Limit_Range(NODE * root, int mx, int mn)
{

    // returns a tree having data only between mx and mn, all other NODEs are deleted
    if(!root)
        return NULL;
    root->left=Limit_Range(root->left,  mx, mn);
    root->right=Limit_Range(root->right, mx, mn);

    if(root->info < mn)
    {
        NODE * temp=root->right;
        delete(root);
        return temp;
    }
    if(root->info > mx)
    {
        NODE * temp=root->left;
        delete(root);
        return temp;
    }

    return root;
}

void add_Greater_Nos_to_each_NODE(NODE * root)
{
    static int adds=0;
    if(root)
    {
        if(root->right)
            add_Greater_Nos_to_each_NODE(root->right);
        root->info+=adds;
        adds=root->info;
        if(root->left)
            add_Greater_Nos_to_each_NODE(root->left);
    }
}

int diff_Bet_Odd_n_Even_Levels(NODE *root)
{
    if(root)
    {
        return root->info - (diff_Bet_Odd_n_Even_Levels(root->left)+diff_Bet_Odd_n_Even_Levels(root->right));
    }
    return 0;
}

void Print_All_Ancestors_Iterative(NODE *root, int x)
{
    // A PreOrder thing
    if(!root) return;
    stack <NODE *>s;

    while(1)
    {
        while(root && root->info != x) // NODE is checkd here
        {
            s.push(root);
            root= root->left;
        }
        if(root && root->info == x)
            break;
        if(s.top()->right==NULL)
        {
            root=s.top();
            s.pop();
            while(!s.empty() && s.top()->right == root)
                root = s.top() , s.pop();
        }
        if(s.empty())
            root=NULL;
        else
            root= s.top()->right;
    }
    while(!s.empty())
    {
        cout<<s.top()->info<<" ";
        s.pop();
    }
}

bool Print_All_Ancestors_Recursive(NODE *root, int x)
{
    if(!root)
        return false;
    if(root->info==x)
        return true;
    if(Print_All_Ancestors_Recursive(root->left, x) || Print_All_Ancestors_Recursive(root->right, x))
    {
        cout<<root->info<<" ";
        return true;
    }
    return false;
}

int MxLevel=0;      // SOME TIMES PUBLIC MAY NOT WORK
void print_Left_Side_view_of_BinaryTree(NODE *root, int cur_level)
{
    if(!root) // CAN DO SAME FOR RIGHT VIEW ALSO JUST CHANGE CALLING ORDER BELOW
        return;
    if(cur_level > MxLevel)
    {
        cout<<root->info<<", ";
        MxLevel=cur_level;
    }
    print_Left_Side_view_of_BinaryTree(root->left, cur_level+1);
    print_Left_Side_view_of_BinaryTree(root->right, cur_level+1);
}

// 2
map <int, int> map_vertical_sum;
void vertical_sum_util(NODE *root, int hori_dist)
{
    if(!root)
        return;
    if(root->left)
        vertical_sum_util(root->left, hori_dist+1);
    map_vertical_sum[hori_dist]= map_vertical_sum[hori_dist]+root->info;
    if(root->right)
        vertical_sum_util(root->right, hori_dist-1);
}

// 1 BELOW IS THE DIRECT IMPLEMENTATION
void vertical_sum_of_binary_tree(NODE * root)
{
    vertical_sum_util( root, 0);
    FOR(i,-3, 4) // PRINT FOR ALL POSSIBLE HORIZONTAL DISTs
    {
        // MAY BE ITS IN REV ORDER
        error(map_vertical_sum[i]);
    }
}

//2		 Lol can do that with int also
vector <int> vertical_pool_plus[100], vertical_pool_minus[100];
void print_vertical_util(NODE *root, int hori_dist)
{
    if(!root) return ;
    if(root->left)
        print_vertical_util(root->left, hori_dist+1);
    if(hori_dist>=0)
        vertical_pool_plus[hori_dist].push_back(root->info);
    else
        vertical_pool_minus[hori_dist*-1].push_back(root->info);
    if(root->right)
        print_vertical_util(root->right, hori_dist-1);
}

//1       BELOW IS THE DIRECT ONE, WITHOUT GLOBAL
void print_vertical_tree(NODE *root)
{
    print_vertical_util(root, 0);
    int var;
    FOR(i,0,10000)
    {
        if(vertical_pool_plus[i].size()==0)
        {
            var=i;
            break;
        }
    }
    for(int i=var-1; i>=0; i--)
    {
        for(int j=0; j<vertical_pool_plus[i].size(); j++)
            cout<<vertical_pool_plus[i][j]<<", ";
        cout<<endl;
    }
    for(int i=1; i<100000; i++)
    {
        if(vertical_pool_minus[i].size()==0)
            break;
        for(int j=0; j<vertical_pool_minus[i].size(); j++)
            cout<<vertical_pool_minus[i][j]<<", ";
        cout<<endl;
    }
}

int diameter(NODE * root, int * height)
{
    int lh=0, rh=0;
    int ldia=0, rdia=0;
    if(root==NULL)
    {
        *height=0;
        return 0;
    }
    ldia=diameter(root->left, &lh);
    rdia=diameter(root->right, &rh);
    *height=max(lh, rh)+1;
    return max(lh+rh+1, max(ldia, rdia));
}
void fixPrevPtr(struct NODE *root)
{
    static struct NODE *pre = NULL;

    if (root != NULL)
    {
        fixPrevPtr(root->left);
        root->left = pre;
        pre = root;
        fixPrevPtr(root->right);
    }
}

// Changes right pointers to work as next pointers in converted DLL
struct NODE *fixNextPtr(struct NODE *root)
{
    struct NODE *prev = NULL;

    // Find the right most NODE in BT or last NODE in DLL
    while (root && root->right != NULL)
        root = root->right;

    // Start from the rightmost NODE, traverse back using left pointers.
    // While traversing, change right pointer of NODEs.
    while (root && root->left != NULL)
    {
        prev = root;
        root = root->left;
        root->right = prev;
    }

    // The leftmost NODE is head of linked list, return it
    return (root);
}

// The main function that converts BST to DLL and returns head of DLL
struct NODE *BTToDLL(struct NODE *root)
{
    // Set the previous pointer
    fixPrevPtr(root);

    // Set the next pointer and return head of DLL
    return fixNextPtr(root);
}

void print_ancestor(NODE *root,int  data)
{	// Better use iterative PREORDER !
    if(!root)return;
    queue<NODE *> q;
    q.push(root);
    NODE *tmp=root;
    int flag=0;
    while(!q.empty())
    {
        if(tmp==NULL)
        {
            tmp=q.front();
            q.pop();
        }
        flag=0;
        //error(tmp->info);
        while(tmp)
        {
            if(tmp->info == data)
            {
                flag=1;
                break;
            }
            tmp=tmp->left;
            if(tmp)
                q.push(tmp);
        }
        if(flag==1)
        {

            while(!q.empty())
            {
                NODE *tmp=q.front();
                q.pop();
                if(tmp->info==data)
                    break;
                cout<<tmp->info<<", ";
            }
            break;
        }
        tmp=tmp->right;
    }
}


int finalans=-1;
int inOrder_Successor(NODE * root, int val)
{
    static int prev;//, prev2=-1;
    if(!root) return -1;

    inOrder_Successor(root->left, val);
    if(root->info==val)
        finalans=prev;
    else
        prev=root->info;
    inOrder_Successor(root->right, val );
}

int main()
{
    NODE *tempNODE, *newnd;
    int src, ans=1;
    int data;
    int d[15]= {10,5,15,17,12,13,11,8,3,2,9,6,4,16,20};

    FOR(i,0,15)
    createtree(d[i]);

    error(inOrder_Successor(root, 3));
    error(finalans);



    print_ancestor(root, 2);
    cout<<endl;

    print_vertical_tree(root);
    display();
    int height=0;
    cout<<"Diam: "<<diameter(root, &height);

    //NODE *head=BTToDLL(root);

    cout<<endl;
    /*while(head)
    {
        cout<<head->info<<" ---- ";
        head=head->right;
    }*/
    cout<<"Babucheck-------\n";
    Level_Wise_spiral(root);
		ZigZag(root);
    return 0;
}

/*
				10
		 5				15
      3    8		  12   17
	 2 4  6 9	    11 13 16 20


VERTICAL            SUM
2                =	2
3                =	3
4, 5, 6, 11      =	26
8, 10, 12        =	30
15, 13, 16, 9    =	53
17               =	17
20               =	20


*/


Recursive functions ;)
eg 319
0 100    + 100 to 300 + 0 to 19
0,100        DONE       0,10 + 0,9
DONE                    DONE   DONE

// Take n = 319 as example => 162
int numberOf2s Between 0 And N	(int n)
{
    if (n < 2)
        return 0;

    int result = 0;
    int power10 = 1;
    while (power10 * 10 < n)
        power10 *= 10;

    // power10 = 100
    int msb = n / power10; // 3
    int reminder = n % power10; // 19

    // Count # of 2s from MSB
    if (msb > 2)    // This counts the first 2 from 200 to 299
        result += power10;
    if (msb == 2)   // If n = 219, this counts the first 2 from 200 to 219 (20 of 2s).
        result += reminder + 1;

    // Count # of 2s from reminder
    // This (recursively) counts for # of 2s from 1 to 100; msb = 3, so we need to multiply by that.
    result += msb * numberOf2s(power10);
    // This (recursively) counts for # of 2s from 1 to reminder
    result += numberOf2s(reminder);

    return result;
}
*/













