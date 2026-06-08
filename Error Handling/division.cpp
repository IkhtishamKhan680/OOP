#include<iostream>
using namespace std;

int main(){

    int a, b;
    cout<<"Enter value for a & b"; cin>>a>>b;
    try{
        if(b==0)
        throw invalid_argument("Division by zero is not allowed it's infinity bro !!");
        cout<<"Result :"<<a/b<<endl;
        // cout<<"Result ="<<a/b<<endl;
    }
    catch(const invalid_argument& e){
        cout<<"Error: "<<e.what()<<endl;
    }
    return 0;
}
