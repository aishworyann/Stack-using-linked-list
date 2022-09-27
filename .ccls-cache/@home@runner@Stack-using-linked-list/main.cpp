#include <iostream>
using namespace std;

class Stack{
public :
int data ;
Stack* next;
};
Stack* top ;

void push(int value){
  Stack* temp = new Stack();
  //to check if the stack heap is full or not in the main memory
  if(!temp){
    cout<<"Stack Overflow"<<endl;
    exit(1);
  }
  
    temp-> data = value;
    temp-> next = top ;
    top=temp;
}

void pop(){

  if(top==NULL){
    cout<<"Stack is underflow"<<endl;
    exit(1);
  }else{
    Stack* temp= new Stack();
    temp=top;
    top= top->next;
    free(temp);
  }
}

int peek(){
  if(top==NULL){
    cout<<"Stack is empty / underflow"<<endl;
    exit(1);
  }
  return top->data;
  
}
void display(){
  // Stack* temp;
  if(top==NULL){
    cout<<"Stack is empty / underflow"<<endl;
    exit(1);
  }
  else{
    // temp= top->next;
    while(top!= NULL){
      cout<<top->data<<" ";
      top= top->next;
    }
  }
}
int main() {
  Stack s;
  push(5);
  push(6);
  push(7);
  pop();
  display();
  peek()
}