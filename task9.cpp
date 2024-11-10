#include<iostream>
using namespace std;
string check_point(int h,int x,int y)
{
    // Border
    if (y == 0)
    {
        return "Border";
    }
    else if (y==h  &&  (x<=h || (x>=2*h  &&  x <= 3*h)))
    {
        return "Border";
    }
    else if (y<=h  && ( x == 0  ||  x == 3*h))
    {
        return "Border";
    }
    else if ((y>=h &&  y<=h*4)  &&  (x==h   ||  x ==h*2))
    {
        return "Border";
    }
    else if ((x>=h &&  x<=2*h)  && y == h*4  )
    {
        return "Border";
    }

    //Inside
    else if (y<=h  &&  x <= 3*h)
    {
        return "Inside";
    }
    else if ((x>=h  &&  x <= 3*h) && (y>=h &&  y<=h*4) )
    {
        return "Inside";
    }

    //Outside
    else 
    {
        return "Outside";
    }
    
}