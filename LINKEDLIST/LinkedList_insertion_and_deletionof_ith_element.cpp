#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node*next;

        node(int data){
            this->data=data;
            next=NULL;


        }

};
void print(node *head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node*takeinput(){
    int data;
    cin>>data;
    node*head=NULL;

    while(data!=-1){
        node*newnode=new node(data);
        if(head==NULL){

        head=newnode;

        }else{
          node*temp=head;
            //time complexity is n^2
          while(temp->next!=NULL){
                temp=temp->next;
                }
                temp->next=newnode;

         }
        cin>>data;
    }
    return head;

}
node * insertnode(node*head,int n,int data){
    node*newnode=new node(data);
    int i=0;
    node*temp=head;
    if(n==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(temp!=NULL && i<n-1){
        temp=temp->next;
        i++;
    }
    if(temp!=NULL){
    node*a=temp->next;
    temp->next=newnode;
    newnode->next=a;
}
return head;
}
void deletenode(node*head,int n){
    int i=0;
    node*temp=head;
    while(i<n-1 && temp!=NULL){
            temp=temp->next;
        i++;
    }
    if(temp!=NULL && temp->next!=NULL){
        node*a=temp->next;
        temp->next=a->next;
        delete a;

    }


}

int main(){
    node*head=takeinput();
    print(head);

    head=insertnode(head,5,1000);
    print(head);
    deletenode(head,1);
    print(head);


}
