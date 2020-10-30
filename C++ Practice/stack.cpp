#include <iostream>
#define MAX_SIZE 100

using namespace std;

class Stack{
	private:
		int top;
		int stack_array[MAX_SIZE];
	public:
		Stack();
		~Stack();
		void push(int ele);
		int pop();
		int peek();
		bool isEmpty();
		bool isFull();
};

Stack::Stack(){
	this->top = -1;
}

Stack::~Stack(){}

void Stack::push(int ele){
	if (!isFull()){
		top++;
		this->stack_array[this->top] = ele;
	}else{
		cout<<"Stack Overflow! Cannot add more data.";	
	}
}

int Stack::pop(){
	if (!isFull()){
		return this->stack_array[this->top--];
	}
	cout<<"Stack Underflow!";
	return -1;	
}

int Stack::peek(){
	if (!isFull()){
		return this->stack_array[this->top];
	}
	cout<<"Stack Underflow!";	
	return -1;
}

bool Stack::isEmpty(){
	return (this->top < 0);
}

bool Stack::isFull(){
	return (this->top >= MAX_SIZE-1);
}

int main(){
	Stack s1;
	cout<<"Successfully initiated a stack\n";
	s1.push(2);
	cout<<s1.peek();
	cout<<s1.pop();
	cout<<s1.pop();
	return 0;
}
