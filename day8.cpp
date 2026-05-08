#include<iostream>
using namespace std;

//Abstraction 
// class ATM{
//     private:
//     int balance;

//     public:

//     ATM(int balance){
//         this->balance = balance;
//     }

//     void withdraw(int amount){
//         if(amount > balance){
//             cout<<"Insufficent balance"<<endl;
//         }

//         else{
//             balance -= amount;
//             cout<<"withdraw successfull:"<<amount<<endl;
//         }
//     }

//     void showbalance(){
//         cout<<"current balance:"<<balance<<endl;
//     }
// };

// int main(){
//     ATM a(5000);
//     a.showbalance();
//     a.withdraw(500);
//     a.showbalance();

//     return 0;

// }





//encapsulation 

// class ATM{
//     private:
//     int balance;

//     public:

//     void setbalance(int balance){
//         this->balance = balance;
//     }

//       //in this part our abstraction is working 
//         void withdraw(int amount){
//         if(amount > balance){
//             cout<<"Insufficent balance"<<endl;
//         }

//         else{
//             balance -= amount;
//             cout<<"withdraw successfull:"<<amount<<endl;
//         }
//     }

//     void getbalance(){
//         cout<<"current balance :" << balance <<endl;
//     }
// };

// int main(){
//     ATM a;
//     a.setbalance(5000);
//     cout<<"balance set successfully"<<endl;
//     a.getbalance();
//     a.withdraw(500);
//     cout<<"balance after withdraw:" <<endl;
//     a.getbalance();

//     return 0;
// }







//friend function

// class Area{
//     private:
//     int length;
//     int width;

//     public:

//     void setSides(int l , int w){
//         length = l;
//         width = w;
//     }

//     friend void showArea(Area a);

// };

// void showArea(Area b){
//     int area = b.length * b.width;
//     cout<<"Area is:"<<area<<endl;
// }

// int main(){
//     Area a;
//     a.setSides(5 , 3);
//     showArea(a);
//     return 0;
    
// }




//using namespace std

// namespace virat{
//      void show(){
//         cout<<"he is the part of our team"<<endl;
//      }

    
// }







//const member function
// class Car{
//     private:
//     int speed;
//     public:
//     Car(){
//         speed=120;

//     }
//     void showSpeed()const {
//         cout<<"speed is:"<<speed<<endl;
//     }

// };
// int main(){
// Car c1;
// c1.showSpeed();
// return 0;
// }




//static member function 
class Employee{
    public:
    static int reg_no;
    Employee(){
        reg_no++;
    }

    static void show(){
        cout<<"Employee reg no is: "<<reg_no<<endl;
    }
};

int Employee :: reg_no = 100;

int main(){
    Employee e1;
    Employee e2;
    Employee e3;
    Employee e4;
    Employee :: show();
    return 0;
}