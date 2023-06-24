#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail==NULL){
        Node* newNode= new Node(d);
        tail= newNode;
        newNode -> next = tail;
    }
    else{
            //non-empty list
            //assuming that the element is present in list
        Node* current = tail;

        while(current->data != element){
            current= current->next;
        }

        //element found- current is representing element wla node
        Node* temp = new Node(d);
        temp-> next = current->next;
        current->next = temp;

    }

}

void deleteNode(Node* &tail,int value){

    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    

    else{
                    //assuming that value is present in the linked list
         Node* previous= tail;
         Node* current = previous -> next;

        while(current -> data != value){
            previous = current;
            current = current->next;
         }

        previous -> next = current -> next;

        //1 node linked list
        if(current== previous){
            tail=NULL;
        }

        // >= 2 NOde linked list
        else if(tail == current){
            tail = previous;
        }
        current -> next = NULL;
        delete current;

   
    
    }
   
}

bool detectLoop(Node* head){

    if( head== NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp!= NULL){

        //cycle is present
        if(visited[temp] == true){
            return true;
        }

        visited[temp]= true;
        temp = temp-> next;
    }
    return false;

}

//floyd's cycle detection algo
Node* detectifLoop(Node* head){

      if( head== NULL){
        return NULL;
    }

    Node* slow =head;                            // will take 2 move
    Node* fast=head;                            // will take one move

    while(slow != NULL && fast != NULL){
        fast= fast->next;
        if(fast != NULL){
            fast= fast->next;
        }

        slow= slow->next;

        if(slow == fast){
            return slow;
        }
    }

    return NULL;
   
}

Node* getStartingNode(Node* head){

    if(head== NULL){
        return NULL;
    }

    Node* intersection= detectifLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head== NULL){
        return;
    }

    Node* startofLoop= getStartingNode(head);
    Node* temp= startofLoop;
    while(temp->next != startofLoop){
        temp= temp->next;
    }
    temp->next = NULL;
}

void print(Node* tail){
    Node* temp = tail;

    if(tail== NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout<<tail->data <<" ";
        tail= tail->next;
    } while(tail != temp);
   cout<<endl;
}

int main(){

    Node* tail= NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,45);
    print(tail);

    insertNode(tail,3,80);
    print(tail); 
    
    insertNode(tail,80,55);
    print(tail);

    deleteNode(tail,3);
    print(tail);

    cout<<detectLoop(tail)<<endl;
    // cout<<detectifLoop(tail);
    
    Node* loop = getStartingNode(tail);
    cout<<"LOOp starts at "<<loop->data<<endl;

    removeLoop(tail);
    cout<<detectLoop(tail);
    return 0;
}