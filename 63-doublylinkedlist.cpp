#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* previous;
    Node* next;

    Node(int d){
        this-> data= d;
        this-> previous= NULL;
        this-> next= NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int d ){
    
    //if list is empty
    if(head== NULL){
        Node* temp = new Node(d);
        head= temp;
        tail= temp;
    }
    else{
        Node* temp = new Node(d);
         temp -> next = head;
         head-> previous = temp;
          head= temp;
    }

}

void insertAtTail(Node* &tail, Node* &head, int d ){
    //if list is empty
    if(tail== NULL){
        Node* temp = new Node(d);
        tail= temp;
        head= temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp-> previous = tail;
        tail= temp;
    }
  

}

void insertAtPosition(Node* &head, Node* &tail, int d, int position){

    //insert at start
    if(position == 1){
        insertAtHead(head,tail, d);
        return ;
    }

     Node* temp = head;
    int cnt=1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

   
    if(temp -> next == NULL){        //inserting at last position
        insertAtTail(tail,head, d);
        return;
    }
    
    //creating a node for d
    Node* nodetoInsert = new Node(d);

    nodetoInsert -> next = temp -> next;
    nodetoInsert -> previous = temp;
    temp->next->previous = nodetoInsert;

    temp -> next = nodetoInsert;

}

void deleteNode(int position, Node* &head, Node* &tail){

    //deleting start node
    if(position == 1){
        Node* temp = head;
        temp -> next -> previous= NULL;
        head =temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{
        //deleting any middle or last node
    Node* current= head;
    Node* previous= head -> previous;

    int cnt=1;

    while(cnt < position){
        previous = current;
        current = current->next;
        cnt++;
    }

   
    if(current -> next == NULL){                    //deleting last node
        current -> previous = NULL;               
        previous -> next = current -> next;
        current -> next = NULL;
        
        tail= previous;
        delete current;
        return;
    }

    current -> previous = NULL;
    previous -> next = current -> next;
    current -> next = NULL;
    previous -> next-> previous = previous;
    
    delete current;
    }
    
}


void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getlength(Node* head){
    int length = 0;
    Node* temp = head;

    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

int main(){

    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    

    insertAtHead(head, tail, 55);
    print(head);
    insertAtHead(head, tail, 578);
    print(head);


    insertAtTail(tail, head, 99);
    print(head);
     insertAtTail(tail,head, 120);
    print(head);

    cout<<getlength(head)<<endl;

    insertAtPosition(head,tail,1450, 2);
    print(head);

    insertAtPosition(head,tail,15, 5);
    print(head);

    deleteNode(3,head,tail);
    print(head);

    deleteNode(5,head,tail);
    print(head);
    
    return 0;
}