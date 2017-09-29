
#include <iostream>
#include <cstring>
using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    }; 


    string toSequence(TreeNode* root) {
        // write code here
        
        TreeNode*p=new TreeNode;
        p=root;
        string str;
        if(root!=NULL)
            {
            str+="(";
            str+=toSequence(root->left);
            str+=toSequence(root->right);
            str+=")";
        }
        else
            str="";
        delete p;
        return str;
    }
