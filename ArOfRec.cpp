#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Program To Calculate Area And Perimeter Of A Rectangle \n";
    cout<<"Enter length ";/*'<<' is a insertion operator */
    cin>>x;/* '>>' is a extraction operator*/
    cout<<"Enter breadth ";
    cin>>y;
    cout<<"The Area is: "<<x*y;
    cout<<"\nThe Perimeter is: "<<2*(x+y);
    
}