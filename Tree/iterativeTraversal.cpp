#include<bits/stdc++.h>


using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void inorder(struct node *root)
{
   if(root)
   {
       inorder(root->left);
       cout<<root->data<<" ";
       inorder(root->right);
   }
}
 
void inorder_stack(node *root)
{
   stack<node *> s;
   node *curr=root;
 
   while(curr || !s.empty())
   {
       while(curr)
       {
           s.push(curr);
           curr=curr->left;
       }
       curr=s.top();
       s.pop();
       cout<<curr->data<<" ";
       curr=curr->right;
   }
}


void preorder(struct node *root)
{
    if(root)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

//preorder traversal using stack data structure
void preorder_stack(struct node *root)
{
    stack<struct node *> s;
    struct node *temp;
    while(root || !s.empty())
    {
        while(root)
        {
            cout<<root->data<<" ";
            s.push(root);
            root=root->left;
        }
        temp=s.top();
        s.pop();
        root=temp->right;
    }
}

void postorder(struct node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

void postorder_stack(node* root)
{
    // create an empty stack and push the root node
    stack<node*> s;
    s.push(root);
 
    // create another stack to store postorder traversal
    stack<int> out;
 
    // loop till stack is empty
    while (!s.empty())
    {
        // pop a node from the stack and push the data into the output stack
        node* curr = s.top();
        s.pop();
 
        out.push(curr->data);
 
        // push the left and right child of the popped node into the stack
        if (curr->left) {
            s.push(curr->left);
        }
 
        if (curr->right) {
            s.push(curr->right);
        }
    }
 
    // print postorder traversal
    while (!out.empty())
    {
        cout << out.top() << " ";
        out.pop();
    }
}


int main(int argc, char const *argv[])
{
    struct node *root = NULL;
    root = new node();
    root->data = 1;
    root->left = new node();
    root->left->data = 2;
    root->right = new node();
    root->right->data = 3;
    root->left->left = new node();
    root->left->left->data = 4;
    root->left->right = new node();
    root->left->right->data = 5;
    root->right->left = new node();
    root->right->left->data = 6;
    root->right->right = new node();
    root->right->right->data = 7;

    node *root1 = root;
    cout<<"Preorder traversal of binary tree using call stack is \n";
    preorder(root1);
    cout<<endl;

    node *root2 = root;
    cout<<"Preorder traversal of binary tree using stack DS is \n";
    preorder_stack(root2);
    cout<<endl;

    node *root3 = root;
    cout<<"Inorder traversal of binary tree using call stack is \n";
    inorder(root3);
    cout<<endl;

    node *root4 = root;
    cout<<"Inorder traversal of binary tree using stack DS is \n";
    inorder_stack(root4);
    cout<<endl;

    node *root5 = root;
    cout<<"Postorder traversal of binary tree using call stack is \n";
    postorder(root5);
    cout<<endl;

    node *root6 = root;
    cout<<"Postorder traversal of binary tree using stack DS is \n";
    postorder_stack(root6);
    cout<<endl;



    return 0;
}
