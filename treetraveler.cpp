#include<iostream>
using namespace std;

struct node{
	int data;
	node * left;
	node * right;
};

node * createnode(int data){
	node * n = new node;
	n->data = data;
	n->left = NULL;
	n->right = NULL;
}

// in - order   |  pre - order | post - order |
// 
//1] left        1]   root         1] left 
//2] root        2]   left         2] left
//3]right        3]  right         3] right

 void preorder(struct node * root){
 	if ( root != NULL){
 		cout<<root->data<<endl;;
 		preorder(root->left);
 		preorder(root->right);
	 }
 }
 
 void postorder(struct node * root){
 	if ( root != NULL){
 		postorder(root->left);
 		postorder(root->right);
 		cout<<root->data<<endl;
	 }
 }
 
 
 void inorder(struct node * root){
 	if ( root != NULL){
 		inorder(root->left);
 		cout<<root->data<<endl;
 		inorder(root->right);
	 }
 }
 
int main(){
	
	struct node * p = createnode(10);
	struct node * p1 = createnode(20);
	struct node * p2= createnode(30);
	struct node * p3 = createnode(40);
	struct node * p4 = createnode(50);
	struct node * p5 = createnode(60);
	struct node * p6 = createnode(70);
	
	p->left = p1;
	p->right = p2;
	p1->left = p3;
	p1->right = p4;
	p2 -> left = p5;
	p2->right = p6;
	 
	 cout<<"this is inorder"<<endl;
	 inorder(p);
	 cout<<"this is preorder"<<endl;
	 preorder(p);
	 cout<<"this is postorder"<<endl;
	 postorder(p);
	
	return 0;
}
