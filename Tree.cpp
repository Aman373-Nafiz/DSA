#include<iostream>
using namespace std;
class Tree{
    public:
    int data;
    Tree *left;
    Tree *right;
    Tree(){
        data = 0;
        left = right = NULL;
    }
    Tree* insert(Tree *root, int value){
        if(root==NULL){
            data = value;
            left=right=NULL;
        }

        if (value > root->data) {
       
        root->right = insert(root->right, value);
    }
      else if (value <= root->data) {
      
        root->left = insert(root->left, value);
    }
    return root;
 
    }
void PreOrder(Tree *root){
      if(root==NULL){
            return;
        }
        else{
        
            cout<<root->data<<" ->";
            PreOrder(root->left);
            PreOrder(root->right);
        }
}

void PostOrder(Tree *root){
    if(root==NULL){
        return;
    }
    else{PostOreder(root->left);
    PostOrder(root->right);
      cout<<root->data<<" ->";
    }
  
    }

    void Inorder(Tree *root){
        if(root==NULL){
            return;
        }
        else{
            Inorder(root->left);
            cout<<root->data<<" ->";
            Inorder(root->right);
        }
    }

};

int main(){
    Tree b;
    Tree *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    Inorder(root);

}