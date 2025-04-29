#include<iostream>
using namespace std;
int main(){
int num;
int digit1,digit2,digit3,digit4,digit5;
cout<<"Enter the number :";
cin>>num;
cout<<num/10000<<"   ";
num=num%10000;
cout<<num/1000<<"   ";
num=num%1000;
cout<<num/100<<"   ";
num=num%100;
cout<<num/10<<"   ";
num=num%10;
cout<<num;
}
