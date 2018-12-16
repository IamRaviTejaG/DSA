// BST - Min & Max Element
// Date: 16 December 2018
// Author: Ravi Teja Gannavarapu

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

int findmin(Node *root)
{
	if (root == NULL)
		return -1;
	else if (root->left == NULL)
		return root->data;
	return findmin(root->left);
}

int findmax(Node *root)
{
	if (root == NULL)
		return -1;
	else if (root->right == NULL)
		return root->data;
	return findmax(root->right);
}

void inorder(Node *root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	cout<<root->data<<"->";
	inorder(root->right);
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
