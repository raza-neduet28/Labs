#include<iostream>
using namespace std;
int main(){
double rate,balance;
int year,count;
cout<<"What is the starting Balance :";
cin>>balance;
cout<<"What is the annual interest rate :";
cin>>rate;
cout<<"How many year to calculate interest :";
cin>>year;
count =1;
while(year>=count){
    balance*=rate;
    count++;
}

cout<<"After "<<year<<"years, balance will be "<<balance<<endl;
return 0;
}
