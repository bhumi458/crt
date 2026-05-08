#include<iostream>
using namespace std;


//write a program to print student name age and rollno by using class 
// class student{
//     public:
    
//     string name;
//     int age;
//     int rollno;

//     void display(){
//         cout<<"Name:"<<name<<endl;
//         cout<<"Age:"<<age<<endl;
//         cout<<"Rollno:"<<rollno;
//     }
 
// };

// int main(){
//     student s1;
//     s1.name = "Bhumi";
//     s1.age = 20;
//     s1.rollno = 1773;

//     s1.display();


//     return 0;
    
// }





//private
// class student{
//     private:
//     int registration = 12;

//    public:

//     string name;
//     int age;
//     int rollno;

//     void display(){
//         cout<<"registration no :"<<registration<<endl;
//         registration++;
//         cout<<"Name:"<<name<<endl;
//         cout<<"Age:"<<age<<endl;
//         cout<<"Rollno:"<<rollno;
//     }

// };

// int main(){
    
//     student s1;
//     s1.name = "Bhumi";
//     s1.age = 20;
//     s1.rollno = 1773;
  
        
//     student s2;
//     s2.name = "Bhumi";
//     s2.age = 20;
//     s2.rollno = 1773;

//     s1.display();

//     return 0;


// }





//constructor

// class student{
//     public:
//     string name;
//     int age;

//      //default constructor
//      student(){
//         name = "bhumi";
//         age = 20;
//      }

//          void display(){
//         cout<<"Name:"<<name<<endl;
//         cout<<"Age:"<<age<<endl;
//         cout<<"Default constructor"<<endl;
//     }

// };

// int main(){
//     student s1;
//     s1.display();
   
//     return 0;
// }





//WAP tp print area multiple times by using class 

// class area{
//     public:

//     int length;
//     int breadth;
//     int radius;
//     int pi;

//          area(){
//         length = 0;
//         breadth = 0;
//         radius = 0;
//         pi = 0;

//     }  

//     area(int l , int b , int r , int pi){
//         length = l;
//         breadth = b;
//         radius = r;
//         this -> pi = pi;
//     }

 

//     void show(){
//         cout<<"area of rectangle"<<length * breadth<<endl;
//         cout<<"area of circle = "<< pi* radius * radius<<endl;
//         cout<<"area of square = "<< 2*(length + breadth)<<endl;
//     }
// };

// int main(){
 
//     area a1(4 , 4 , 10 , 14);
//     a1.show();
//     area a2;
//     a2.show(); 

    
//     return 0;

// }





//WAP to create a student managle system where we store and display a student details 

// class student{
//     public:
//    string name;
//    int reg;
//    int phno;
//    string email;
//    int rollno;
//    int marks;
//    char grade;

//    student(){
//     name = "bhumi";
//     reg = 12;
//     phno = 1234567890;
//     email= "service@gmail.com";
//     rollno = 1773;
//     marks = 90;
//     grade = 'A';
//    }

//    student(string name , int phno , string email , int rollno , int marks , char grade){
//     this -> name = name;
//     this -> phno = phno;
//     this ->email = email;
//     this -> rollno = rollno;
//     this -> marks = marks;
//     this -> grade = grade;
//    }


//    void display(){
//     cout<<"Name = " << name<<endl;
//     cout<<"PhNo = " << phno<<endl;
//     cout<<"Email = " << email<<endl;
//     cout<<"Rollno = " << rollno<<endl;
//     cout<<"Marks = " << marks<<endl;
//     cout<<"Grade = " << grade<<endl;
//    }

// };

// int main(){
//     student s1;
//     s1.display();

//     student s2("Ankita" , 1234567890, "yahoo@gmail.com", 2076, 95, 'A');
//     s2.display();

//     return 0;
// }  





//copy constructor

class cricketers{
    public:
    string name;
    int runs;

    cricketers(string name , int runs){
        this -> name = name;
        this -> runs = runs;
    }

    cricketers(const cricketers &c){
        this -> name = c.name;
        this -> runs = c.runs;
    }

    void show(){
        cout<<"Name ="<<name<<endl;
        cout<<"Runs = "<<runs<<endl;
    }
};

int main(){
    cricketers c1("virat" , 12000);
    c1.show();

    cricketers c2(c1);
    c2.show();
    return 0;
}

