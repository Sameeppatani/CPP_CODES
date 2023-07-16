#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        node *next=NULL;


    }
};
void print(node *head){
    while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
    }

}


int main(){
    node n1(10);
    node *head=&n1;
    node n2(20);
    n1.next=&n2;
    node n3(30);
    n2.next=&n3;
    node n4(40);
    n3.next=&n4;


    print(head);



}
