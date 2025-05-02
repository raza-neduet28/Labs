#include<iostream>
using namespace std;
int main(){

char guess;
cout<<"Press any key from Keyboard :";
cin>>guess;
while(guess!='x'){
    cout<<"Wrong, Try another key :";
    cin>>guess;
}
cout<<"Eureka! You have discovered it:";
}
