 #include <iostream>
using namespace std;

 //single inheritence
// class Player
// {
// public:
//     string name;
//     int age;
//     void setName(string n)
//     {
//         name = n;
//     }
// };

 

// class Cricketer : public Player
// {
// public:
//     int runs;
//     void setruns(int r)
//     {
//         runs = r;
//     }
//     void show()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Runs: " << runs << endl;
//     }
// };

// int main()
// {
//     int r;
//     cin >> r;
//     Cricketer c1;
//     c1.setName("Virat");
//     c1.setruns(r);
//     c1.show();

//     return 0;
// }
     



//multilevel inheritence

// class Player
// {
// public:
//     string name;
//     int age;
//     void setName(string n)
//     {
//         name = n;
//     }
// };

 

// class Cricketer : public Player
// {
// public:
//     int runs;
//     void setruns(int r)
//     {
//         runs = r;
//     }
// };

// class IndianCricketer : public Cricketer
// {
// public:
//     string state;
//     void setState(string s)
//     {
//         state = s;
//     }

//     void show()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Runs: " << runs << endl;
//         cout << "State: " << state << endl;
//     }
// };

// int main()
// {
//     int r;
//     cin >> r;
//     string s;
//     cin >> s;
//     IndianCricketer c1;
//     c1.setName("Virat");
//     c1.setruns(r);
//     c1.setState(s);
//     c1.show();

//     return 0;
// }




//multiple inheritance

// class Player
// {
// public:
//     string name;
//     int age;
//     void setName(string n)
//     {
//         name = n;
//     }
// };


// class batsman {
//     public:
//     int runs;
//     void setRuns(int r){
//         runs = r;
//     }
// };

// class bowler{
//     public:
//     int wickets;
//     void setwickets(int w){
//         wickets = w;
//     }
// };

// class allrounder: public batsman,  public bowler{
//     public:
//     string state;
//       void setState(string s)
//     {
//         state = s;
//     }

//     void show(){
//         cout<<"Name = "<<name<<endl;
//         cout<<"Runs = "<<runs<<endl;
//         cout<<"Wickets = "<<wickets<<endl;
//         cout<<"State = "<<state<<endl;
//     }
// };

// int main(){
//     int r , w;
//     cin>>r>>w;
//     allrounder c1;
//     c1.setName("hardik");
//     c1.setRuns(r);
//     c1.setwickets(w);
//     c1.show();
  
//     return 0;
// }








//multiple inheritance 
 
// class Player
// {
// public:
//     string name;
//     int age;
//     void setName(string n)
//     {
//         name = n;
//     }
// };

 

// class Cricketer
// {
// public:
//     int runs;   
//     void setruns(int r)
//     {
//         runs = r;
//     }
// };

// class IndianCricketer : public Cricketer, public Player
// {
// public:
//     string state;
//     void setState(string s)
//     {
//         state = s;
//     }

//     void show()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Runs: " << runs << endl;
//         cout << "State: " << state << endl;
//     }
// };

// int main()
// {
//     int r;
//     cin >> r;
//     string s;
//     cin >> s;
//     IndianCricketer c1;
//     c1.setName("Virat");
//     c1.setruns(r);
//     c1.setState(s);
//     c1.show();

//     return 0;
// }





 //virtual function
//   class player{
//     public:
//     virtual void show(){
//         cout<<"i am a player"<<endl;
//     }
//   };

//   class cricketer : public player{
//     public:
//     int a;
//   };

//   int main(){
//     cricketer c1;
//     c1.show();
//     return 0;

//   }





//purevirtual function

//   class player{
//     public:
//     virtual void show() = 0; 
//   };

//   class cricketer : public player{
//     public:
//     int a;
//     void show(){
//         cout<<"i am a player"<<endl;
//     }
// };

//   int main(){
//     cricketer c1;
//     c1.show();
//     return 0;

//   }




//operator overloading 

 
