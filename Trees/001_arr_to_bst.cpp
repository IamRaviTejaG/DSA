// Arr -> BST
// Date: 14 December 2018
// Author: Ravi Teja Gannavarapu

// Uses the STL sort for sorting array. Time complexity: O(n*logn).
// BST traversal takes O(n) time.

#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
	Node(int a) // Constructor to create a new node with given values and NULL at left and right pointers
	{
		data = a;
		left = NULL;
		right = NULL;
	}
};

struct Node *arrToBst(int arr[], int first, int last)
{
	if (first > last)
		return NULL;
	int mid = (first + last) / 2;
	struct Node *root = new Node(arr[mid]);
	root->left = arrToBst(arr, first, mid-1);
	root->right = arrToBst(arr, mid+1, last);
}

void inorder(struct Node *node)
{
	if (node == NULL)
		return;
	inorder(node->left);
	cout<<node->data<<"->";
	inorder(node->right);
}

void preorder(struct Node *node)
{
	if (node == NULL)
		return;
	cout<<node->data<<"->";
	preorder(node->left);
	preorder(node->right);
}

void postorder(struct Node *node)
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
	struct Node *a = arrToBst(arr, 0, n-1);
	inorder(a);
	cout<<endl;
	preorder(a);
	cout<<endl;
	postorder(a);
	cout<<endl;
	return 0;
}
