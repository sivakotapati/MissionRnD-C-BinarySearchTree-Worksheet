/*

Given a Binary Search Tree ,Calculate its Inorder ,Postorder and PreOrder

Input : A BST
Output : Copy Inorder/Postorder/Preorder into the array specified .

Note : Memory for the Array is already allocated ,Dont allocate it again using malloc
->Take help of helper functions which are actually solving the problem .
->Dont Process Invalid Inputs

Bonus Task : 
->Go to the BSTTransversals Spec File ,We have left a custom test case for you ,Try to fill
it and understand how testing works .
*/

#include <stdio.h>
#include<stdlib.h>
struct node{
	struct node * left;
	int data;
	struct node *right;
};

void bst_inorder(struct node*, int*, int);
void bst_preorder(struct node*, int*, int);
void bst_postorder(struct node*, int*, int);
void inorder(struct node *root, int *arr){
	int val = 0;
	bst_inorder(root, arr, val);
}
void preorder(struct node *root, int *arr){
	int val=0;
	bst_preorder(root, arr,val);
}
void postorder(struct node *root, int *arr){
	int val = 0;
	bst_postorder(root, arr, val);
}
void bst_inorder(struct node *root,int *arr,int  pos){
	if (root == NULL) return;
	arr[pos] = root->data; 
	bst_inorder(root->left,arr,pos+1);
	bst_inorder(root->right,arr,pos+1);
}
void bst_preorder(struct node *root, int *arr, int pos){
	if (root == NULL) return;
	bst_preorder(root->left, arr, pos + 1);
	arr[pos] = root->data;
	bst_preorder(root->right, arr, pos + 1);
}
void bst_postorder(struct node *root, int *arr, int pos){
	if (root == NULL) return;
	bst_postorder(root->left, arr, pos + 1);
	bst_postorder(root->right, arr, pos + 1);
	arr[pos] = root->data;
}
