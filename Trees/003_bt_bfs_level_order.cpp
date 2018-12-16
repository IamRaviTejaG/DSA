// Binary Tree - Level Order Traversal
// Date: 16 December 2018
// Author: Ravi Teja Gannavarapu

// Time Complexity -> O(n)
// Space Complexity -> Best: O(1), Worst: O(n)

#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *left, *right;
	Node(int a) // Constructor to create a new node
	{
		data = a;
		left = NULL;
		right = NULL;
	}
};

Node* insert(Node *root, int value)
{
	if (root == NULL)
		root = new Node(value);
	else if (value <= root->data)
		root->left = insert(root->left, value);
	else
		root->right = insert(root->right, value);
	
	return root;
}

void levelOrder(Node *root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);
	while (!q.empty())
	{
		Node *current = q.front();
		cout<<current->data<<"->";
		if (current->left != NULL)
			q.push(current->left);
		if (current->right != NULL)
			q.push(current->right);
		q.pop(); // remove the element at front
	}
}

int main()
{
	int q;
	cin>>q;
	Node *root = NULL; // Creates an empty tree
	while (q--)
	{
		int b;
		cin>>b;
		root = insert(root, b);
	}
	inorder(root);
	cout<<endl;
	cout<<findmin(root)<<endl;
	cout<<findmax(root)<<endl;
	return 0;
}
