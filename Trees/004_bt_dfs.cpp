// Binary Tree - Depth First Search (In, Pre, Post)
// Date: 16 December 2018
// Author: Ravi Teja Gannavarapu

// STL array sort: Time complexity -> O(n*logn).
// Traversal Time Complexity -> O(n)

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

Node* arrToBst(int arr[], int first, int last)
{
	if (first > last)
		return NULL;
	int mid = (first + last) / 2;
	Node *root = new Node(arr[mid]);
	root->left = arrToBst(arr, first, mid-1);
	root->right = arrToBst(arr, mid+1, last);
}

void inorder(Node *node)
{
	if (node == NULL)
		return;
	inorder(node->left);
	cout<<node->data<<"->";
	inorder(node->right);
}

void preorder(Node *node)
{
	if (node == NULL)
		return;
	cout<<node->data<<"->";
	preorder(node->left);
	preorder(node->right);
}

void postorder(Node *node)
{
	if (node == NULL)
		return;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<"->";
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++)
		cin>>arr[i];
	sort(arr, arr+n);
	Node *a = arrToBst(arr, 0, n-1);
	inorder(a);
	cout<<endl;
	preorder(a);
	cout<<endl;
	postorder(a);
	cout<<endl;
	return 0;
}
