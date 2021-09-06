#include<iostream>
#include<algorithm>
using namespace std;

class Functor
{
   public:
   int operator()(int a, int b)
   {
      return a<b;
   }
};

int main()
{
   Functor f;
   int x=5, y=7;
   int ans=f(x,y); /*though is a function object still in case of functors we can use it to access the member function*/
   cout<<ans;
   return 0;
}
