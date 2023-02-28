#include<iostream>
using namespace std;
class Average
{
    public:
    void avg();
};
void avg()
{
    float n,a,sum=0;
    cout<<"Enter number of terms: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    float avg=sum/n;
    cout<<"Average is : "<<avg<<endl;
}

int main()
{

    avg();
    return 0;
}