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


int isempty(){
  return top==NULL;
}


int peek(){
  
  if(top!=NULL){
    return top->data;
  }
  else
    exit(1);
}


void pop(){

  if(top==NULL){
    cout<<"Stack is underflow"<<endl;
    exit(1);
  }else{
    Stack* temp;
    temp=top;
    top= top->next;
    free(temp);
  }
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
    cout<<endl;
  }
}
int main() {
  Stack s;
  cout<<isempty()<<endl;
  push(5);
  push(6);
  push(7);
  pop();
  cout<<"Peak element of stack :"<<peek()<<endl;
  display();
  

  
}