#include<iostream>
using namespace std;
int main(){
// int age = 22;
// char grade = 'A';
// cout<<"the age is : "<<age<<endl;
// cout<<"the grade is : "<<grade<<endl;
//SELECTION CONTROL STRUCTURE IF-ELSE
// cout<<"enter your age :"<<endl;
// int age;
// cin>>age;
// if(age>=21){
    // cout<<"you are egligible to work!!"<<endl;
    //we can also use else if here multiple times for multiple conditions
//}
//else{
  //  cout<<"you are not egligible to work in this company!!"<<endl;
//}
//SWITCH CASE CONTROL STRUCTURE
int age;
switch(age){
    case 18:
    cout<<"you are an adult!!"<<endl;
    break;
    case 21:
    cout<<"you can work in this company!!"<<endl;
    break;
    default:
    cout<<"you are not egligible to work in this company!!"<<endl;
}
return 0;
}