#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
	};
	
class Solution
{
     public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }
		
	void levelOrder(Node * root)
	{
      //Write your code here
  	  if(root == NULL)
          {
          return;
      }
      
        queue<Node *> bst;
        
        bst.push(root);
        
        Node * current_node = bst.front();
        while(!bst.empty())
        {
            if(current_node->left != NULL)
            bst.push(current_node->left);
            
            if(current_node->right != NULL)
            bst.push(current_node->right);
            
            cout << current_node->data << " ";
            bst.pop();
            current_node = bst.front();
        }
	}
};//End of Solution


int main()
{
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}