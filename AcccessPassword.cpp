#include<iostream>
using namespace std;
int main(){
string storedpass="Well@123";
string pass;
cout<<"Enter your Password :";
cin>>pass;
if(pass==storedpass){
    cout<<"\n Access Granted\n";
}
else{
    cout<<"\n Access Denied\n";
}
return 0;
}
