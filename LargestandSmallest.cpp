#include<iostream>
using namespace std;
int main(){
float num1,num3,num2;
cout<<"Enter Number 1:";
cin>>num1;
cout<<"Enter Number 2:";
cin>>num2;
cout<<"Enter Number 3:";
cin>>num3;
float large,small;
if(num1>=num2 && num2>=num1){
    large=num1;
}
else{
if(num1<=num2 && num2>=num3){
    large=num2;}
    else{
        large=num3;
    }
    }
if(num1<=num2 && num3>=num1){
    small=num1;
}
else{
    if(num2<=num3 && num2<=num1){
        small=num2;
    }
    else{
        small=num3;
    }
}
cout<<"The Largest number is :"<<large<<endl;
cout<<"The Smallest number is :"<<small;
}
