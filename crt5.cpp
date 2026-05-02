#include<iostream>
using namespace std;

int main(){
    int percentage;
    cout<<"enter your percentage"<<endl;
    cin>>percentage;

    if(percentage>=90){
        cout<<"grade id A"<<endl;
    }

    else if(percentage>=80 && percentage<90){
        cout<<"grade is B"<<endl;
    }

    else if(percentage>=70 && percentage<80){
        cout<<"grade is C"<<endl;
    }

    else if(percentage>=60 && percentage<70){
        cout<<"grade is D"<<endl;
    }

    else{
        cout<<"fail"<<endl;
    }

    return 0;
}