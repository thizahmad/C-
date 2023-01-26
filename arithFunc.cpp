#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int mul(int a, int b)
{
    int c=a*b;
    return c;
}
int sub(int a, int b)
{
    int c=a-b;
    return c;
}
float quo(float a,float b)
{
    float c=a/b;
    return c;
}
void intro(void)
{
    cout<<"!!!!BASIC CALCULATOR!!!!"<<endl;
}
int main()
{
    int num1, num2;
    intro();
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"Sum is: "<<sum(num1,num2)<<endl;
    cout<<endl;
    cout<<"Subtraction is: "<<sub(num1,num2)<<endl;
    cout<<endl;
    cout<<"Multiplication is: "<<mul(num1,num2)<<endl;
    cout<<endl;
    cout<<"Quotient is: "<<quo(num1,num2)<<endl;
return 0;
}