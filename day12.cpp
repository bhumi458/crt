#include<iostream>
using namespace std;


//print the value is power of 2 or not 

// bool ispowerof(int n){
//     if(n == 0){
//         return false;
//     }

//     if(n == 1){
//         return true;
//     }

//     return (n% 2 == 0)  && ispowerof(n/2);
// }

// int main(){
//     int n=96;
//     if(ispowerof(n)){
//         cout<<n <<"is power of 2"<<endl;
//     }

//     else{      
//         cout<<n<<"is not power of 2"<<endl;
//     }

//     return 0;
// }





//linked list 

class Node{
   public:
   int data;
   Node* next;

   Node(int data){
    this->data = data;
    this->next = NULL;
   }


};

void printNodes(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
   
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);


    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth-> next = sixth;


    printNodes(head);
    return 0;

    


}