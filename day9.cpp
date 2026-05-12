#include<iostream>
using namespace std;
//1-d arrray 
// int main(){
//     int arr[5];

//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;

// }



//2-D array
// int main(){
//     int arr[3][4] = { {1, 2, 3 , 4}, {5 , 6, 7, 8}, {9 , 1 , 2 , 3}};

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//swap number using array

// int main(){
//     int n;
//     cin>>n;
//    int arr[n];

//    for(int i=0; i<n; i++){
//     cin>>arr[i];
//    }

//    for(int i=0; i<n; i++){
//     for(int j=i+1; j<n; j++){
//         if(arr[i] < arr[j]){
//             swap(arr[i] , arr[j]);
//         }
//     }
//    }
//    for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//    }
//    return 0;
// }




//sum of array

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
  
    cout<<"sum of array is :"<<sum<<endl;

    return 0;
}




