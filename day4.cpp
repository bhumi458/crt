//patterns

#include<iostream>
using namespace std;

//ques-1
//****
//****
//****
//****  

// int main(){
//     for(int i=1;i<=5; i++){
//         for(int j=1; j<=4; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }




//ques-2
//*
//**
//***
//****  

// int main(){
//     int r;
//     cin>>r;

//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


 
//ques-3

//   *
//  **
// ***
//****
//  int main(){
//    int n;
//     cin>>n;
 
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=(n-i); j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }

//     return 0;
// }




//ques-4
//*****
//*   *
//*   *
//*   *
//*****

// int main(){
//    int n;
//    cin>>n;
//   for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         if(i==1 || i==n || j==1 || j==n){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
//   }
 
//   return 0;
// }



//pyramid question

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=n; j>i; j--){
            cout<<" ";
        }

        for(int k=1; k<=i; k++){
            cout<<" *";
        }
        cout<<endl;
    }

    return 0;
}






//extra 
//  int main(){
//    int n;
//     cin>>n;
 
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=(n-i); j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<i;
//         }

//         cout<<endl;
//     }

//         for(int i=n; i>=1; i--){
//         for(int j=1; j<=(n-i); j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<i;
//         }

//         cout<<endl;
//     }

//     return 0;
// }

 




 


