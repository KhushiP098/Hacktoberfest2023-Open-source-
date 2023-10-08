#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *Right;

    // constructor

    Node(int data)
    {
        this->data = data;
        left = NULL;
        Right = NULL;
    }
};



void level_order_traversal(Node *root)
{

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front(); 
        q.pop();

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->Right)
            {
                q.push(temp->Right);
            }
        
    }
}

