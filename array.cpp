#include<iostream>
using namespace std;

int main()
{
    int marks[]={23,12,43,55,52,25};
    /*for(int i=0;i<=5;i++)
    {
        //cin>>marks[i];
        cout<<"Marks of "<<i<<" is "<<marks[i]<<endl;
    }*/
    int i=0;
    while (i<6)
    {
        cout<<marks[i]<<endl;
        i++;
    }
    cout<<endl;
    int* p=marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;


    
return 0;
}