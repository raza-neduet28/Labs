#include<iostream>
using namespace std;
int main(){

int grade,gradeTotal,numGrade;
double avgGrade;
gradeTotal=0;
numGrade=0;
cout<<"Enter any grade or -1 to quit :";
cin>>grade;
while(grade!=-1){
    gradeTotal+=grade;
    numGrade++;
    cout<<"Enter any grade or -1 to quit :";
cin>>grade;
}
avgGrade=(float)gradeTotal/numGrade;
cout<<"Average Grade is :"<<avgGrade;

}
