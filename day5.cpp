#include<iostream>
using namespace std;

//functions

//without argument , without return type
// void printmsg(){
//     cout<<"hello world";
// }

// int main(){
//     printmsg();
//     return 0;
// }


//with argument without return type

// void add(int a , int b){
//     cout<<a+b<<endl;
// }

// int main(){
//     add(2 , 3);
//     return 0;
// }


//with argument , with return type

// int sum(int a , int b){
//     int add = a + b;
//     cout<<add<<endl;
//     return 0;
// }

// int main(){
//     sum(6 , 7);
//     return 0;
// }



//without argument , with return type

// int printmsg(){
//     cout<<"hello bhumi"<<endl;
//     return 0;
// }

// int main(){
//     printmsg();
//     return 0;
// }




//pointers

// int main(){
//     int a = 10;
//     int *ptr = &a;

//     cout<<ptr<<endl;
//     return 0;
// }


// 2nd-code pointer

// int main(){
//     int value = 10;
//     int *ptr = &value;

//     cout<<"ADD;"<<ptr<<endl;
//     cout<<"value = "<<*ptr<<endl;

//     *ptr = 20;
//     cout<<"value = "<<*ptr<<endl;
//     cout<<"value = "<<value<<endl;

//     return 0;
// }




//WAP that takes coffee sort return the total number of coffee volume if 1sort equal to 30ml 
 
//  int coffeesort(int sort){
//     int total = sort  * 30;
//     cout<<"total coffee volume = "<<total<<"ml"<<endl;
//     return 0; 
//  }

// int main()
// {
//     int sort;
//     cout<<"enter the number of coffee short:"<<endl;
//     cin>>sort;

//     coffeesort(sort);
//     return 0;
// }




//write a function with default argument and calling it with ir without parameters 

// int add(int a = 5 , int b = 5){
//     cout<<"sum = "<<a +b<<endl;
//     return 0;
// }

// int main(){

//     add();
//     add(10 , 10);
//     return 0;
// }


//WAP that apply 10% discount using references update the original bill amount and print the original bill

// int discountAtbill(float &bill){
//        bill = bill * 0.9;
//        cout<<"bill after discount = "<<bill<<endl;
//        return 0;
// }

// int main(){

//     float bill;
//     cout<<"enter the bill amount:"<<endl;
//     cin>>bill;

//     discountAtbill(bill);
//     return 0;
// }




// swap two number using pointer

// int swap(int &a , int &b){
//     int *ptr1 = &a;
//     int *ptr2 = &b;

//     int temp;

//      temp = *ptr1,
//     *ptr1 = *ptr2,
//     *ptr2 = temp;

//     cout<<"after swapping a = "<<a <<"and b="<<b<<endl;
    
//     return 0;
// }

// int main(){
//     int a , b;
//     cout<<"enter the value of a and b"<<endl;
//     cin>>a >> b;

//     swap(a , b);
//     return 0;

// }








//write a function that takes length and breadth as a input , return and print the area of rectangle 

int areaOfrectangle(int length , int breadth){
    int area = length * breadth;
    cout<<"area os rectangle =" << area << endl;
    return 0;
}

int main(){
    int length , breadth;
    cout<<"enter the length and breadth of rectangle"<<endl;
    cin>>length;
    cin>>breadth;

    areaOfrectangle(length , breadth);
    return 0;
}
