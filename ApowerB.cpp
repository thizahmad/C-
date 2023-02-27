#include<iostream>
using namespace std;

int main()
{
    int a,b,res=1;
    cout<<"Enter base value: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter power value: ";
    cin>>b;
    for(int i=0;i<b;i++)
    {
        res=a*res;
    }   
    cout<<res;
return 0;
}