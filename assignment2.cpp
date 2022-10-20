/* Q1) WAP to check whether two numbers(entered by user) are equal or not
#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter you first number"<<endl;
    cin>>a;
    int b;
    cout<<"Enter you second number"<<endl;
    cin>>b;
    cout<<(a==b)<<endl;
    return 0;
}
 Q2) WAP a program to take the values of two variables 
 a and b form the keyboard and then check if both the condition "a<50' and 'a<b' are true"
 #include<iostream>
 using namespace std;
 
 int main(){
    int a;
    cout<<"Enter your first number"<<endl;
    cin>>a;
    int b;
    cout<<"Enter your second number"<<endl;
    cin>>b;
    cout<<((a<50)&&(a<b))?1:0;


    return 0;
 }

 Q3) There are 45 total pupils in the class,25 of whom are boys. wAP a program
 to find howw many girls reveices  grades 'A'if 17 boys made up of 80% of students that received grade A 
 #include<iostream>
using namespace std;

int main(){
   int totalStudents=45;
   int boysAcheived=17;
   int totalGradeA=(80*45)/100; //36
   cout<<"Total girls achieved Grade A are "<<(totalGradeA-boysAcheived)<<endl; 

    return 0;
} 

Q4) WAP a program to calculate the sum of the first and the scond last digit of 5 digit number 

#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter a five digit number"<<endl;
    cin>>a; // 12345
    int b=0;
    int c=a;
    int n=c/10000;
    b+=n;
    n=c%10000;
    n=c%1000;
    n=c%100;
    n=c%10;
    b+=n;
    cout<<"Your result is"<<b<<endl;
    return 0;
}

Q5) Write a program to print sum of the 3 digit numbers */

#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter your number"<<endl;
    cin>>a;//123
    int sum=0;
    int n=a;
    int c;
    c=n/100;
    sum+=c;
    n=n%100;
    c=n/10;
    sum+=c;
    n=n%10;
    sum+=n;
    cout<<"Your sum of digits are "<<sum<<endl;
    return 0;
}

