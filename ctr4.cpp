#include<iostream>
using namespace std;

int main(){
     int sum =0;
     while(true){
        int n;
        cout<<"enter a number"<<endl;
        cin>>n;

        if(n<0){
            break;
        }

        sum = sum+n;
     }

      
     cout<<"sum is=" << sum<<endl;
     return 0; 

}