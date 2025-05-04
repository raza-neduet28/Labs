#include<iostream>
using namespace std;
int main(){
int Number,num1,result;
cout<<"Enter a number to start running sum :";
cin>>Number;
cout<<"Running Sum :"<<Number<<endl;
while(Number<=100000){
    cout<<"Enter other number :";
    cin>>num1;
    result=num1+Number;
    Number=result;
    cout<<"Running Sum is :"<<result<<endl;
}



}
