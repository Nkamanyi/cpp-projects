#include<iostream>

using namespace std;

int main(){

    int age;

    cout<<"Enter your age: ";
    cin>>age;

    if(age >= 19){
        cout<<age<<" is an adult"<<endl;
    }
    else if (age >= 13){
        cout<<age<<" is a teenager"<<endl;
    }
     else if (age >= 0){
        cout<< age << " is a child" << endl;
    }
    else if (age < 0){
        cout<<age<<" is not yet born"<<endl;
    }

    return 0;

}