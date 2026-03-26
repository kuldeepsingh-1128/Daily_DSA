#include<iostream>
using namespace std;

class Node{
    public:
    int Data;
    Node* next;

    Node(int val){
        Data=val;
        next=NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

class list{
    Node* head;
    Node* tail;

    public:
    list(){
        head=tail=NULL;
    }

    ~list(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }


    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }

    }

    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void printll(){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->Data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
        
    }

    void insert(int val,int pos){
        Node* temp=head;
        Node* newNode=new Node(val);
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"invalid position!!";
                return;
            }
        temp=temp->next;

        newNode->next=temp->next;
        temp->next=newNode;

        }
        
        
    }

    void pop_front(){
        Node* temp=head;
        if(head==NULL){
            cout<<"linked list is empty!!";
            return;
        }else{
            head=head->next;
            delete temp;
            temp=NULL;
        }

    }

    void pop_back(){
        Node* temp=head;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
    }


};

int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.printll();

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.insert(100,2);
    ll.pop_front();
    ll.pop_front();
    ll.printll();

    
    return 0;
}
