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





// int main(){
//     int withdrawl;
//     cout<<"enter withdrawl amount"<<endl;
//     cin>>withdrawl;

//      if(withdrawl == 0){
//         cout<<"transctions is invalid"<<endl;
//      }

//      else{
//         cout<<"transctions is valid"<<endl;
//      }

//      return 0;
// }



//WAP to print number between 1 to n that is divisible by 2
// int main(){
//    int n;
//    cout<<"enter number"<<endl;
//    cin>>n;

//    for(int i=1; i<=n; i++){
//       if(i%2 == 0){
//          cout<<i<<endl;
//       }
//    }

//    return 0;
// }



//same question but use while loop 
// int main(){
//    int i;
//    cout<<"enter the value of i"<<endl;
//    cin>>i;

//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;

//    while(i<=n){
//       if(i%2== 0){
//          cout<<i<<endl;
          
//       }

//       i++;
//    }

//    return 0;
// }



//do whileloop

// int main(){
//    int i;
//    cout<<"enter the value of i"<<endl;
//    cin>>i;

//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;

//    do{
//       if(i%2 ==0){
//          cout<<i<<endl; 
//     }

//     i++;
//    }

//    while(i <= n);
  
//    return 0;
// }




//calculate factorial 
// int main(){
//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;

//    int fact = 1;
//    for(int i=1; i<=n; i++){
//       fact = fact*i;
//    }


//    cout<<"factorial of "<<n<<"is"<<fact<<endl;
//    return 0;
// }




//fibonacci series 

// int main(){
//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;

//    int x = 0;
//    int y = 1;

//    for(int i=1; i<=n; i++){
//       cout<<x<<" ";
//       int z = x+y;
//       x = y;
//       y = z; 

//    }

//    return 0;
// }



//multiplication table 

// int main(){
//    int n;
//    cout<<"enter the value of n"<<endl;
//    cin>>n;

//    for(int i=1; i<=n; i++){
//       int a = i*2;
//       cout<<a<<endl;
//    }

//    return 0;

// }



//write a number to check it is prime or not 

int main(){
   int n;
   cout<<"enter the value of n"<<endl;
   cin>>n;

    for(int i=2; i<=n; i++){
      if(n%i == 0){
         cout<<"number is not prime"<<endl;
         break;
      }

      else{
         cout<<"number is prime"<<endl;
         break;
      }
    }

    return 0;

}