#include<iostream>
using namespace std;
template<typename T>

T check(T a, T b)
{
    a = a>b?a:b;  
    return a;
}

int main()
{
    int x,y;
    cout<<"Enter the two values";
    cin>>x>>y;
    cout<<"The greater no is: "<<check(x,y)<<endl;

    float p,q;
    cout<<"Enter the two values";
    cin>>p>>q;
    cout<<"The greater no is: "<<check(p,q);

    return 0;
}
