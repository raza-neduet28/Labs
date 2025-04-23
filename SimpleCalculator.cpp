#include<iostream>
using namespace std;
int main(){
double num1,num2,result;
char op;
cin>>num1>>op>>num2;
if(op=='+'){
    result=num1+num2;
}
else if(op=='-'){
    result=num1-num2;
}
else if(op=='*'){
    result=num1*num2;
}
else if(op=='/'){
    result=num1/num2;
}
else{
    cout<<"\n Invalid Operator you choose\n";
}
cout<<"Your Result is:"<<result;

}
