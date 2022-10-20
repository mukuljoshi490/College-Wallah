#include<iostream>
using namespace std;



int main(){
    //Product of number
    int x;
    cout<<"Enter the value of x ";
    cin>>x;
    int y;
    cout<<"Enter the value of y ";
    cin>>y;
    int c;
    c=x*y;
    cout<<"The product of x and y is "<<c;

    //ASCII value of U
    cout<<"ASCII value is "<<int('U');

    //Swap of two numbers
    
    int a;
    int b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;

    int c;
    c=a;
    a=b;
    b=c;

    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;

    //Length and breadth of rectangle
    int length,breadth;
    cout<<"Enter the length of rectangle ";
    cin>>length;
    cout<<"Enter the breadth of rectangle ";
    cin>>breadth;
    int area=length*breadth;
    cout<<"The area of rectangle is "<<area;

    //Cube of a number

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int c;
    c=num*num*num;
    cout<<"The cube of a number is "<<c;

    // To find the size of data type
 
 cout<<sizeof(int);

}
