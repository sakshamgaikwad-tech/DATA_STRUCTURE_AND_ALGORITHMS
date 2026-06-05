#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack <int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	cout<<"the top before poping"<<endl;
	cout<<s1.top()<<endl;
	
	s1.pop();
	s1.pop();
	cout<<"the top after poping"<<endl;
	cout<<s1.top()<<endl;
	
	s1.pop();
	cout<<"the top after poping pop"<<endl;
	if (s1.empty()){
		cout<<"the satck is empty"<<endl;
	}
	else {
		cout<<"the stack is not empty"<<endl;
	}
	return 0;
}
