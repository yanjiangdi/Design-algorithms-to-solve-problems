
#include <iostream>
	
typedef struct node
{
	int key;
	node* lchild;
	node* rchild;
}*Node;
	
class BinarySortTree
{
	private:
		Node root;
		void _insert(Node &root,int key)
		{
			if(!root)
			{
				Node n = new node;
				n->key = key;
				n->lchild = n->rchild = NULL;
				root = n;
			}
			else if(root->key>key)
			{
				insertParentNode = root;
				_insert(root->lchild,key);
			}
			else
			{
				insertParentNode = root;
				_insert(root->rchild,key);
			}
		}
		void destory(Node &root)
		{
			if(root)
			{
				destory(root->lchild);
				destory(root->rchild);
				delete root;
			}
		}
	public:
		Node insertParentNode;
		BinarySortTree(){		 root = NULL; insertParentNode = NULL;}
		~BinarySortTree() { destory(root);}
		void insert(int key)
		{
			_insert(root,key);
		}
};
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int t;
		BinarySortTree *bst = new BinarySortTree();
		while(n--)
		{
			cin>>t;
			bst->insert(t);
			if(bst->insertParentNode==NULL)
			{
				cout<<"-1"<<"\n";
			}else
				cout<<bst->insertParentNode->key<<"\n";
		}
		delete bst;
	}
}
