#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter age =";
    cin>>age;

    if(age>=18 && age<=99){
        cout<<"eligible to vote"<<endl;
    }

    else if(age>=100){
        cout<<"century category"<<endl;
    }

    else if(age>=0 && age<=17){
        cout<<"not eligible to vote"<<endl;
    }

    else{
        cout<<"invalid age"<<endl;
    }

    return 0;
}