#include<iostream>
using namespace std;
 
 struct node {
 	int data;
 	node * left;
 	node * right;
 };
 
 struct node * create (int data){
 	struct node * n = new node ;
 	n->data = data;
 	n->left = NULL;
 	n->right = NULL;
 }
 
 int main(){
 	
 	struct node * p = create (90);
 	struct node * p1 = create (110);
 	struct node * p2 = create (150);
 			
 	p->left = p1;
 	p->right = p2;
 	
 	cout << "     Root Node:     " << p->data << endl;
    cout << "Left Child of Root: " << p->left->data << endl;
    cout << "Right Child of Root:" << p->right->data << endl;
    
//            90
//          /    \
//	     110      150
 	return 0;
 }
