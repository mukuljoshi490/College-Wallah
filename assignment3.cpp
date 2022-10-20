/*Q1) WAP to print that given number is even or odd

#include<iostream>
using namespace std;

 int main(){
    int a;
    cout<<"Enter a value"<<endl;
    cin>>a;
    if (a%2==0){
        cout<<"It is even number"<<endl;
    }
    else {
        cout<<"It is odd number"<<endl;
    } 



}

Q2) WAP to take age as input and print that it is child adult or teenager

#include<iostream>
using namespace std;

 int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if (age>=18)
    {
        cout<<"Adult"<<endl;
    }
    else if (((age>12)&&(age<18)==1))
    {
        cout<<"Teenager"<<endl;
    }
    else
    {
        cout<<"Child"<<endl;
    }
 }

Q3) WAP to print a number which is even and divisible by 3 

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if (((num%2==0)&&(num%3==0))==1){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl ;
    }


}

Q4) WAP to print a number which divisible by 3 and 5 

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if (((num%3==0)&&(num%5==0))==1){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl ;
    }


}
Q5) WAP to print the day based on the day number */

#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter a day"<<endl;
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thursday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"Satuday"<<endl;
        break;
    case 7:
        cout<<"Sunday"<<endl;
        break;
    
    default:
        cout<<"Invalid number,Try Again"<<endl;
        break;
    }



}

