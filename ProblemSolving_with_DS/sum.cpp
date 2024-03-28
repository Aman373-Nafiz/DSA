#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
class BST{
    public:
    int data;
    BST *left,*right;
    BST(){
        data = 0;
        left = right = NULL;
    }

    BST* insert(BST *root,int data){
    if(root==NULL){
            data = data;
            left=right=NULL;
        }
          if (data > root->data) {
       
        root->right = insert(root->right,data);
    }
      else if (data <= root->data) {
      
        root->left = insert(root->left,data);
    }
    return root;
    }
    
    /// ************************************//
    
   
  int max_sum(BST* root) {
        if (root == NULL) {
            return 0;
        }

        int sum = 0;
        queue<BST*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSum = 0;  // Initialize level sum for each level
            int count = q.size();
            while (count--) {
                BST* temp = q.front();
                q.pop();
                levelSum += temp->data;  // Add node data to level sum
                if (temp->left != NULL) {
                    q.push(temp->left);
                }
                if (temp->right != NULL) {
                    q.push(temp->right);
                }
            }
            sum = max(sum, levelSum);  // Update max sum if current level sum is higher
        }

        return sum;
    }


   
    

};


int main(){
   BST b;
    BST* root = NULL;

    // Inserting nodes into the BST
    root = b.insert(root, 50);
    root = b.insert(root, 30);
    root = b.insert(root, 20);
    root = b.insert(root, 40);
    root = b.insert(root, 70);
    root = b.insert(root, 60);
    root = b.insert(root, 80);

    cout << b.max_sum(root) << endl;

}
