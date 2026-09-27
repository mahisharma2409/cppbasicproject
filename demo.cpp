#include<iostream>
using namespace std;
int main(){
// int age = 22;
// char grade = 'A';
// cout<<"the age is : "<<age<<endl;
// cout<<"the grade is : "<<grade<<endl;
cout<<"enter your age :"<<endl;
int age;
cin>>age;
if(age>=21){
    cout<<"you are egligible to work!!"<<endl;
}
else{
    cout<<"you are not egligible to work in this company!!"<<endl;
}
return 0;
}