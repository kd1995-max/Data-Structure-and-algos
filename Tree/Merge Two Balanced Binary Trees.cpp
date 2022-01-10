#include<bits stdc++.h="">
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
};

int *mergearray(int arr1[], int arr2[], int m, int n);

void storeInorder(node* node, int inorder[],
                            int *index_ptr);


node* arrayToBST(int arr[], int start, int end);

node* TreeMerge(node *root1, node *root2, int m, int n)
{
    
    int *arr1 = new int[m];
    int i = 0;
    storeInorder(root1, arr1, &i);

    int *arr2 = new int[n];
    int j = 0;
    storeInorder(root2, arr2, &j);

    
    int *NewArr = mergearray(arr1, arr2, m, n);

    
    return arrayToBST (NewArr, 0, m + n - 1);
}

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return(Node);
}


void printInorder(node* node)
{
    if (node == NULL)
        return;

    
    printInorder(node->left);

    cout << node->data << " ";

    
    printInorder(node->right);
}

int *mergearray(int arr1[], int arr2[], int m, int n)
{
    
    int *NewArr = new int[m + n];
    int x = 0, y = 0, z = 0;

    while (x < m && y < n)
    {
        
        if (arr1[x] < arr2[y])
        {
            NewArr[z] = arr1[x];
            x++;
        }
        else
        {
            NewArr[z] = arr2[y];
            y++;
        }
        z++;
    }

    
    while (x < m)
    {
        NewArr[z] = arr1[x];
        x++; z++;
    }
    while (y < n)
    {
        NewArr[z] = arr2[y];
        y++; z++;
    }

    return NewArr;
}
void storeInorder(node* node, int inorder[], int *index_ptr)
{
    if (node == NULL)
        return;

    
    storeInorder(node->left, inorder, index_ptr);

    inorder[*index_ptr] = node->data;
    (*index_ptr)++; 

    
    storeInorder(node->right, inorder, index_ptr);
}

node* arrayToBST(int arr[], int start, int end)
{
    
    if (start > end)
    return NULL;

    
    int mid = (start + end)/2;
    node *root = newNode(arr[mid]);
    root->left = arrayToBST(arr, start, mid-1);

    
    root->right = arrayToBST(arr, mid+1, end);

    return root;
}

int main()
{
    
    node *root1 = newNode(7);
    root1->left     = newNode(5);
    root1->right = newNode(8);
    root1->left->left = newNode(4);
    root1->left->right = newNode(6);
     root1->right->right = newNode(9);


    
    node *root2 = newNode(2);
    root2->left     = newNode(1);
    root2->right = newNode(3);

    node *mergedTree = TreeMerge(root1, root2, 6, 3);

    cout << "Following is Inorder traversal of the merged tree \n";
    printInorder(mergedTree);

    return 0;
}
</bits>
