#include<iostream>
using namespace std;

int nThTerm(int n)
{
    int res=0;
    res=(3*n)+7;
    return res;
}

int main()
{
    int num;
    cout<<"Enter Nth term of an AP: ";
    cin>>num;
    cout<<"Value of Nth term is: "<<nThTerm(num);
    
return 0;
}