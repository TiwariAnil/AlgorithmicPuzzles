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
};//*root, *newNODE, *useit;
void inserttree(int data, NODE **root);
void inorder(NODE *root);
void preorder(NODE *root);
void postorder(NODE *root);
int heightTree(NODE *root);
void Level_Wise_On_NewLine(NODE *root);

void Left_subTree_sum_noed(NODE *root);


int main()
{


    NODE *root=NULL;
    int arr[15]={10,5,15,17,12,13,11,8,3,2,9,6,4,16,20};
    for(int i=0; i<15; i++)
    {
        inserttree(arr[i],&root);
    }

    cout<<"PRE-order\n";
    preorder(root); cout<<endl;
    cout<<"POST-order\n";
    postorder(root); cout<<endl;

/*
    cout<<"IN-order\n";
    inorder(root);
 */
    Level_Wise_On_NewLine(root);
    Left_subTree_sum_noed(root);
    Level_Wise_On_NewLine(root);


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

void Left_subTree_sum_noed(NODE *root){
    if(!root)
        return;
    Left_subTree_sum_noed(root->left);
    if(root->left!=NULL)
        root->info += root->left->info;
    Left_subTree_sum_noed(root->right);

}

void inserttree(int data, NODE **root)
{
    NODE *newnode = new NODE; // or (struct NODE*) malloc(sizeof(sruct NODE);
    newnode->info = data;
    newnode->left = NULL;
    newnode->right = NULL;
    if(*root == NULL)
    {
        *root = newnode;
        //cout<<root->info<<"--- \n";
    }
    else
    {
        //return;
        NODE *tmp = *root;
        while(1)
        {
            if(data <= tmp->info)
            {
                if( tmp->left==NULL)
                {
                    tmp->left=newnode;
                    break;
                }
                else
                    tmp = tmp->left;
            }
            if (data >= tmp->info)
            {
                if( tmp->right== NULL)
                {
                    tmp->right=newnode;
                    break;
                }
                else
                    tmp = tmp->right;
            }
        }
    }
}

void postorder(NODE *root)
{
    if(root->left!=NULL)
        postorder(root->left);
    if(root->right!=NULL)
        postorder(root->right);
    cout<<root->info<<"-> ";
}

void preorder(NODE *root)
{
    if(root!=NULL)
        cout<<root->info<<"-> ";
    if(root->left!=NULL)
        preorder(root->left);
    if(root->right!=NULL)
        preorder(root->right);
}

void inorder(NODE *root)
{
    if(root->left!=NULL)
        inorder(root->left);
    if(root!=NULL)
        cout<<root->info<<"-> ";
    if(root->right!=NULL)
        inorder(root->right);
}
int heightTree(NODE *root)
{
    if(root==NULL)
        return 0;
    else{
        int lheight = heightTree(root->left);
        int rheight = heightTree(root->right);
        if( lheight > rheight)
            return (lheight+1);
        else
            return (rheight+1);
    }
}

void Level_Wise_On_NewLine(NODE *root)
{
    cout<<"\nPringting levelwise : \n";
    queue <NODE *> q;
    q.push(root);
    NODE *nd= new NODE, *tmp;
    nd->info = -20;
    nd->left = NULL;
    nd->right = NULL;
    q.push(nd);
    while(!q.empty())
    {
        tmp=q.front();
        q.pop();
        if(tmp->info==-20 && !q.empty())
        {
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

