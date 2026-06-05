#include<iostream>
using namespace std;

struct node{
	node * next;
	int data;
};

int main(){
	
	
	node * node1 = new node;
	node * node2 = new node;
	node * node3 = new node;
	node * node4 = new node;
	
	// assinging the value to nodes data
	
	node1->data = 2;
	node1->next = node2;
	
	node2->data =4;
	node3->next = node3;
	
	node3->data = 6;
	node3-> next = node4;
	
	node4->data = 8;
	node4->next = NULL;
	
	cout<<"node  1 data is : "<<node1->data<<endl;
	cout<<"node  2  data is : "<<node2->data<<endl;
	cout<<"node  3 data is : "<<node3->data<<endl;
	cout<<"node  4  data is : "<<node4->data<<endl;
	cout<<"the last node is : "<<node4->next<<endl;
	
	return 0;
}
