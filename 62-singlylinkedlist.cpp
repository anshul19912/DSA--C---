#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;                         // next node address

    Node(int data){
        this -> data= data;
        this -> next = NULL;
    }


};

void insertAtHead(Node* &head, int d){

    //create new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertAtTail(Node* &tail, int d){

    //create new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;

}

void InsertAtPosition(Node* &tail ,Node* &head ,int position, int d){
   
   //insert at start
   if(position == 1){
    insertAtHead(head, d);
    return;
   }

    Node* temp = head;
    int cnt=1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

   
    if(temp -> next == NULL){        //inserting at last position
        insertAtTail(tail,d);
        return;
    }
    
    //creating a node for d
    Node* nodetoInsert = new Node(d);

    nodetoInsert -> next = temp -> next;

    temp -> next = nodetoInsert;


}

void deleteNode(int position, Node* &head, Node* &tail){

    //deleting start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{
        //deleting any middle or last node
    Node* current= head;
    Node* previous= NULL;

    int cnt=1;

    while(cnt < position){
        previous = current;
        current = current->next;
        cnt++;
    }

    
    if(current -> next == NULL){         //deleting last node
        previous -> next = current -> next;
        current -> next = NULL;
        tail= previous;
        delete current;
        return;
    }

    previous -> next = current -> next;
    current -> next = NULL;
    delete current;


    }
    
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
       temp = temp-> next;
    }
    cout<<endl;
}

int main(){

    //creating new node
    Node* node1= new Node(56);
    
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node1
    Node* head = node1;
    // print(head);

    // insertAtHead(head, 12);
    // print(head);

    // insertAtHead(head, 50);
    // print(head);

    Node* tail = node1;
    print(head) ;

    insertAtTail(tail,45);
    print(head);

    insertAtTail(tail,10);
    print(head);

    InsertAtPosition(tail, head, 3, 20);
    print(head);
    
    deleteNode(4, head,tail);
    print(head);

    
    return 0;
}