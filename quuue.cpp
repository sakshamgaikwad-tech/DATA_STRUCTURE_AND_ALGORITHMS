#include<iostream>
#include<queue>
using namespace std ;

 int main(){
 	queue <int> q1;
 	q1.push(45);
 	q1.pop();
	q1.push(89);
	q1.pop();
	q1.push(78);
	q1.push(90);
//	q1.pop();
	
	cout<<"the data is "<<q1.front()<<endl;
 	
 	if(q1.empty()){
 		cout<<"the queue is empty you are able to add some element in the queue"<<endl;
 		}
 		else{
 			cout<<"the queue is full you are not able to add more elements in the queue"<<endl;
		 }
	  	return 0;
 }
