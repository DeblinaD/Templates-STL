//here in this prograam we compare dates
#include<iostream>
using namespace std;

template<typename T>
T Big( T a, T b )
{
    if(a>b)     //remember we can not use this greater than operator to compare dates, for that the operator needs to be
    return a;   //overloaded. and that overloading we did in the class below. even we can not use ternary operator for checking
    else
    return b;
}

class Date
{
    int d, m, y;
    public:
    Date(int d, int m, int y)   //constructor created
    {
        this->d = d;
        this->m = m;
        this->y = y;
    }
        void showdate()
        {
            cout<<d<<"/"<<m<<"/"<<y<<endl;
        }

        bool operator>(Date D)
        {
            if(y>D.y)
            return true;
             else if(y<D.y)
             return false;
             else if(m>D.m)             /*operator overloading hapenninng here*/
             return true;
             else if(m<D.m)
             return false;
             else if(d>D.d)
             return true;
             else 
             return false;

        }
    };

    int main()
    {
        Date d1(1,1,2021), d2(25,2,2021), d3(0,0,0);
        d3=Big(d1,d2);
        d3.showdate();
        return 0;
    }
