#include<iostream>
using namespace std;

// int main(){
     
//     int options;
//     cin>>options;

//     switch(options){
       
//         case 's':
//          cout<<"support option selected"<<endl;
//         break;

//         case 'b':
//          cout<<"billing option selected"<<endl;
//         break;

//         case 't':
//          cout<<"tech support option selected"<<endl;
//         break;

//         case 'a':
//          cout<<"how may i help you"<<endl; 
//         break;
 
//         default:
//         cout<<"invalid choice"<<endl;
//         break;
       
//     }

//     return 0;
// }





int main(){
    int withdrawl;
    cout<<"enter withdrawl amount"<<endl;
    cin>>withdrawl;

     if(withdrawl == 0){
        cout<<"transctions is invalid"<<endl;
     }

     else{
        cout<<"transctions is valid"<<endl;
     }

     return 0;
}