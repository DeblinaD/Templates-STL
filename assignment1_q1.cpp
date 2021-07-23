//define a function template to print an array of any types
#include<iostream>
using namespace std;
int N;
template<typename T>
T printArray( T array[], size_t n)
{   
    for(int i= 0; i < n; i++)
    {
      cout<<array[i]<<" ";
    }
    return 0;
}

int main()
{
    int n;
    cout<<"size of array?";
    cin>>n;
    
    float arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
   printArray(arr, n);
   return 0;
}

/* NOTE: size_t is an unsigned integral data type which is defined in various header files. it is a type 
which is used to represent the size of object in bytes and therefore is used to return by the size of
operator. here we are using it for the length of array, since we can not take int n there as it was giving
error.*/