#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* top = NULL;

void push (int value){
    node *newNode = new node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;

}
void pop(){
    if(top==NULL) return;
    node *temp = top;
    top = top->next;
    delete temp;
}
void print(){
    node* temp = top;
    while(temp!=NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    push(5);
    push(6);
    push(7);
    pop();
    print();

}
