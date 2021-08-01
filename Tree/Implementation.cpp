#include <bits/stdc++.h>

using namespace  std;

struct Node
{

    int data;
    Node *left, *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }

};

int main(int argc, char const *argv[])
{
    Node *head = new Node(20);
    head->left = new Node(30);
    head->right = new Node(40);
    head->left->left = new Node(50);
    return 0;
}
