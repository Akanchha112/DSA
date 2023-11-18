
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int data;
    Tree *left;
    Tree *right;
    Tree(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Tree *buildtree(Tree *root)
{
    cout << "enter data:";
    int data;
    cin >> data;
    root = new Tree(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter left of " << data << endl;
    root->left = buildtree(root->left);
    cout << "enter right of " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void printTree(Tree *root)
{
    std::queue<Tree *> q;
    q.push(root);
    Tree *temp = root;
    while (!q.empty())
    {
        Tree *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}
Tree *deletenode(Tree *root, int key)
{
    Tree *temp = root;
    queue<Tree *> q;
    q.push(temp);
    while (!q.empty())
    {
        Tree *node = q.front();
        if (node->left->data == key)
        {
            node->left = node->left->left;
        }
        if (node->right->data == key)
        {
            node->right = node->right->right;
        }
        q.pop();
        if (node->left)
        {
            q.push(node->left);
        }
        if (node->right)
        {
            q.push(node->right);
        }
    }

    return root;
}
int main()
{
    Tree *root = NULL;
    root = buildtree(root);
    printTree(root);
    deletenode(root , 5);
    printTree(root);
    cout << "Hello World";

    return 0;
}
