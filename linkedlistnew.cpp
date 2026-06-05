#include<iostream>
using namespace std;

struct node {
    int data;
    node* next; 
};

int main() {
    node * node1 = new node;
	node *node2 = new node;
	node *node3= new node;
	node *node4 = new node;        
    node1->data = 10;    
    node1->next = node2 ;
	node2->data = 20; 
	node2->next = node3;
	node3->data = 30;
    node3->next = node4;
    node4->data = 40;
    node4->next = NULL;
   
   
    cout << "Node data: " << node1->data << endl;

    return 0;
}

