#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int val){
        data=val;
        next=NULL;
    }
    ~Node(){
        if(next!=NULL){
            cout<<"Node "<<data<<endl;
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
            cout<<"~List "<<endl;
            delete head;
            head=NULL;
        }
    }

    void printll(){
        Node* temp=head;
        
        while(temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        }
        cout<<"NULL\n";
    }

    void push_front(int val){
        Node* NewNode=new Node(val);
        if(head==NULL){
            head=tail=NewNode;
            return;
        }else{
            NewNode->next=head;
            head=NewNode;
        }

    }

    void push_back(int val){
        Node* NewNode=new Node(val);
        if(head==NULL){
            head=tail=NewNode;
            return;
        }

        tail->next=NewNode;
        tail=NewNode;
    }

    void insertmid(int val,int pos){
        Node* NewNode=new Node(val);
        Node* temp=head;
        
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"position is invalid!!";
                return;
            }
            temp=temp->next;
        }
        NewNode->next=temp->next;
        temp->next=NewNode;
    }

    void pop_front(){
        if(head==NULL){
            cout<<"linkedlist is empty..";
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp=head;
        if(head==NULL){
            cout<<"linkedlist is empty..";
            return;
        }

        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;

    }
    int search(int key){
        Node* temp=head;
        int idx=0;
        while (temp!=NULL)
        {
            if(temp->data==key){
            return idx;
            }
            temp=temp->next;
            idx++;
        }
    return -1;
        
    }

    //recursive search
    int helper(Node* temp,int key){
        if(temp==NULL){
            return -1;
        }
        if(temp->data==key){
            return 0;
        }
        int idx=helper(temp->next,key);
        if(idx==-1){
            return -1;
        }
        return idx+1;
    }

    int SearchRec(int key){
    return helper(head,key);
    }

    //reverse linkedlist
    void reversell(){
        Node* curr=head;
        Node* prev=NULL;

        while(curr!=NULL){
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
};



int main(){
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.printll();
    // ll.printll();
    // ll.insertmid(5,2);
    // ll.insertmid(6,4);
    // ll.printll();
    // ll.pop_front();
    // ll.pop_back();
    // ll.printll();
    // cout<<ll.SearchRec(5)<<endl;
    // cout<<ll.search(5)<<endl;

    ll.reversell();
    ll.printll();
}