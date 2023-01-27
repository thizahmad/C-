#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,q,c,count=0,result;
    cout<<"Enter number: "<<endl;
    cin>>num;
    q=num;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    c=count;
    cout<<"Number of digits: "<<c<<endl;
    result=0;
    q=num;
    int x;
    while(x!=0)
    {
        x=q%10;
        for(int i=0;i<c;i++)
        {
            result=result + pow(x,c); 
        }
        q=q/10;
    }
    if(result==num)
    {
        cout<<"Number is armstrong.";
    }
    else
    {
        cout<<"Not armstrong ";
    }
   
return 0;
}