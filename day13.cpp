  #include <iostream>
using namespace std;


//stack implemaentation using array
// class Stack {
//     int *arr;
//     int top;
//     int size;

// public: 
//     Stack(int size) {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int element) {
//         if (top < size - 1) {
//             top++;
//             arr[top] = element;
//         } else {
//             cout << "Stack overflow" << endl;
//         }
//     }

//     void pop() {
//         if (top >= 0) {
//             top--;
//         } else {
//             cout << "Stack underflow" << endl;
//         }
//     }

//     int peek() {
//         if (top >= 0) {
//             return arr[top];
//         } else {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//     }

//     bool isempty() {
//         return (top == -1);
//     }
// };

// int main() {
//     Stack st(5);

//     st.push(22);
//     st.push(23);
//     st.push(20);

//     cout << st.peek() << endl; 

//     st.pop();
//     cout<< st.peek()<<endl;
//     return 0;
// }
    



//stack implementation using linked list

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }


// };
 
// class Stack{
//     Node* top;

//     public:
//     Stack(){
//         top = NULL;
//     }

//     void push(int element){
//         Node* newNode = new Node(element);
//         newNode->next = top;
//         top = newNode;
//     }

//     void pop(){
//         if(top == NULL){
//             cout<<"stack underflow"<<endl;
//         }

//         else{
//             Node* temp = top;
//             top = top->next;
//             delete temp;
//         }
//     }

//     int peek(){
//         if(top == NULL){
//             cout<<"stack is empty"<<endl;
//             return -1;
//         } else{
//             return top->data;
//         }
//     }

//     bool isempty(){
//         return (top == NULL);
//     }
// };

// int main(){
//     Stack st;

//     st.push(22);
//     st.push(23);

//     st.push(20);
//     cout<<st.peek()<<endl;

//     st.pop();
//     cout<<st.peek()<<endl;

//     return 0;


// }







//queue

// class queue{
//     private:
//     int arr[100];
//     int front , rear;

//     public:
//     queue(){
//         front = 0;
//         rear = -1;
//     }

//     void enqueue(int x){
//         if(rear == 99){
//             cout<<"queue overflow"<<endl;
//         }

//         else{
//             rear++;
//             arr[rear] = x;
//             cout<< x << "inserted" <<endl;
//         }
//     }

//     void dequeue(){
//         if(front > rear){
//             cout<<"queue underflow" <<endl;
//         }

//         else{
//             cout<<arr[front]<<"deleted" <<endl;
//             front++;
//         }
//     }

//     void peek(){
//         if(front > rear){
//             cout<<"queue is empty" <<endl;
//         }

//         else{
//             cout<<"front element : "<< arr[front] <<endl;
//         }
//     }

//     void display(){
//         if(front > rear){
//             cout<<"queue is empty" <<endl;
//         }

//         else{
//             cout<< "queue elements : ";
//             for(int i=front; i<=rear; i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     queue q;

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);

//     q.display();
//     q.dequeue();

//     q.peek();
//     return 0;
// }
 



//queue using linked list

struct Node{
    int data;
    Node* next;
};

class queue{
    private:
    Node* front;
    Node* rear;

    public:
    queue(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int x){
        Node *newNode = new Node();
        newNode -> data = x;
        newNode -> next = NULL;

        if(rear == NULL){
            front = rear = newNode;
        }

        else{
            rear -> next = newNode;
            rear = newNode;
        }

        cout<<x<<"inserted" <<endl;
    }

    void dequeue(){
        if(front == NULL){
            cout<<"queue underflow"<<endl;
            return;
        }

        Node *temp = front;
        cout<<front->data <<"deleted"<<endl;
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }

        delete temp;
    }

    void peek(){
        if(front == NULL){
            cout<<"queue is empty"<<endl;
        }

        else{
            cout<<"front element"<<front->data<<endl;
        }
    }

    void display(){
        if(front == NULL){
            cout<<"queue is empty"<<endl;
            return;
        }

        Node* temp = front;
        cout<<"queue elements";

        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }

        cout<<endl;

    }
    
};


int main()
{
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.peek();

    return 0;
}