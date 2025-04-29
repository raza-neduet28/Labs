#include<iostream>
using namespace std;
int main(){
int x,y,z,min,max;
int sum,product;
double avg;
cout<<"Input three different integers :";
cin>>x>>y>>z;
sum=x+y+z;
avg=(x+y+z)/3.0;
product=x*y*z;
cout<<"Sum is :"<<sum<<endl;
cout<<"Average is :"<<avg<<endl;
cout<<"Product is :"<<product<<endl;
if(x>y && x>z){
    if(y>z){
        cout<<"Smallest is "<<z<<endl;
    }
    else{
        cout<<"Smallest is "<<y<<endl;
    }
     cout<<"Largest is "<<x<<endl;
}
 else if(y>x && y>z){
    if(z<x){
        cout<<"Smallest is "<<z<<endl;
    }
    else{
        cout<<"Smallest is "<<x<<endl;
    }
    cout<<"Largest is "<<y<<endl;
}
else if(z>y && z>x){
        if(x<y){
            cout<<"Smallest is "<<x<<endl;
        }
        else{
            cout<<"Smallest is "<<y<<endl;
        }
        cout<<"Largest is "<<z<<endl;
}
if(x%2!=0){
    cout<<x<<" is odd "<<endl;
}
if(y%2!=0){
    cout<<y<<" is odd "<<endl;
}
if(z%2!=0){
    cout<<z<<" is odd "<<endl;
}
if(x%2==0){
    cout<<x<<" is even"<<endl;
}
if(y%2==0){
    cout<<y<<" is even"<<endl;
}
if(z%2==0){
    cout<<z<<" is even"<<endl;
}
}
