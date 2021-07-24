/*define a function template to sort an array of any type*/
#include<bits/stdc++.h>
using namespace std;

template<typename T>
T sortingArray(T array[], int n)
{   T store;
for(int j=0; j<n-1; j++)
{
    for(int i=0; i<n-j-1; i++)
    {
       if(array[i]>array[i+1])
       {
          store= array[i];
          array[i]=array[i+1];
          array[i+1]=store;
       }
    }
}
for(int j=0; j<n; j++)
{
    cout<<array[j]<<" ";
}
 cout<<endl;
    return 0;
}

int main()
{
    int n;
    cout<<" Size of array?";
    cin>>n;

    //integer array
    int arrayI[n];
    cout<<"enter elements in integer array";
    for(int i = 0; i <n; i++)
    {
        cin>>arrayI[i];
    }
    sortingArray(arrayI, n);
    
    //float array
    float arrayF[n];
    cout<<"Enter elements in float array"<<endl;
    for(int i = 0; i <n; i++)
    {
        cin>>arrayF[i];
    }
    sortingArray(arrayF, n);

    //character array
    char arrayC[n];
    cout<<"Enter elements in character array"<<endl;
    for(int i = 0; i <n; i++)
    {
        cin>>arrayC[i];
    }
    sortingArray(arrayC, n);
    return 0;
}