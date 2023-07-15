class MyCircularDeque {

    int* arr;
    int front;
    int rear;
    int size;

public:
    MyCircularDeque(int k) {
        size = k;
        arr= new int[k];
        front = -1;
        rear = -1;
    }
    
    bool insertFront(int value) {
        // if queue is full
       if( isFull()){
            return false;
        } 
        else if(front == -1){         // inserting first element
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1){         // if front is at starting
            front = size-1;                // to maintain cyclic nature
        }
        else{
            front--;                    //normal flow
        }
        arr[front] = value;
        return true;
    }
    
    bool insertLast(int value) {
         // if queue is full
       if( isFull()){
            return false;
        } 
        else if(isEmpty()){         // inserting first element
            front = rear = 0;
        }
        else if(rear == size-1 && front !=0 ){             // if rear  is at end
            rear =0;                // to maintain cyclic nature
        }
        else{
            rear ++;
        }
        arr[rear] = value;
        return true;
    }
    
    bool deleteFront() {
        
       //check empty or not
        if(isEmpty()){
            return false;
        }

        arr[front] = -1;
        //single element
        if(front == rear){
            front= -1;
            rear= -1;
        }

        //front at last index
        else if(front == size-1){
            front= 0;
        }

        else{
            front++;
        }

        return true;
    }
    
    bool deleteLast() {
        //check empty or not
        if(isEmpty()){
            return false;
        }

        arr[rear] = -1;
        //single element
        if(front==rear){
            front=-1;
            rear=-1;
        }

        //rear is at starting
        else if(rear  == 0){
            rear = size-1;
        }

        else{
            rear --;
        }

        return true;
    }
    
    int getFront() {
           if(isEmpty()) {
            return -1;
        }
        return arr[front];
    }
    
    int getRear() {
         if(isEmpty()) {
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
          if(front==-1 ){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
         if( (front==0 && rear == size-1)||(front != 0 && rear==(front-1)%(size-1)) ){
            return true;
        } 

        else{
            return false;
        }
    }
};