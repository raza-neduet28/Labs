#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter numbers of terms :";
cin>>n;
int pre=1 ;
int next=1;
int sum;
cout<<"Number "<<pre<<" ,Ratio of "<<next<<"/"<<pre<<" is "<<next/pre<<endl;
for(int i=1;i<=n;i++){

        sum=pre+next;

        pre = next;
        next = sum;
cout << "Number " <<sum<<" ,Ratio of "<<next<<" /" <<pre<<" is "<<(float)sum/pre<<endl;
}

}
