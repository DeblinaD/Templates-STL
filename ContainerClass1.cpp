/*container class array*/
#include<iostream>
#include<array> /*this header file must be included */
using namespace std;


int main()
{
   array<int,5>a={10,4,7,9,3}; /*syntax is this*/

   /*now printing of array*/
   for(int num:a)
   cout<<num<<" ";
   cout<<endl;
   
   /*meathods*/
   cout<<a.at(2)<<endl;
   return 0;
}
