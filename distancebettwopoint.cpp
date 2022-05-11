#include <iostream>
#include <cmath>
using namespace std;
class point;
class point 
{
    int x,y;
    // double dis;
    public:
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    friend void calcdis(point w,point e )
    {
         double dis=sqrt(pow((w.x-e.x),2)-pow((w.y-e.y),2));
         cout<<"the distance between two points is="<<dis;
    }
};
int main()
{
    point o1(2,4);
    point o2(5,6);
    calcdis(o1,o2);
    return 0;

}
