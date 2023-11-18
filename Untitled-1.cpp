#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;
    char y1,y2,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    x1=c(x1,y1)
    x2=c(x2,y2)
    while(not (a2(x1,x2)&&b(y1)&&b(y2)&&d(x1,x2)))
    {
        if(not a(x1,x2,x3))
            cout>>"Error!! The value entered is less than 0!"
        else if(not (b(y1)&&b(y2)))
            cout>>"Error!! The unit entered is not supported by the program!"
        else if(not (a2(x1,x2)))
            cout>>"Error!! The length is less than 10 cm!"
        else
            cout>>"Error!! One length is less than 10% of the other!"
    }
    else
    {
    cout>> s(x1,x2,x3) >>endl
    cout>> h(s(x1,x2,x3),x1,x2,x3)
    }             
    return 0
}
int a(x1,x2)
{
    if(x1>0&&x2>0)
        return true
    else
        return false
}
int b(y)
{
    if(y=="m"||y=="dm"||y=="cm")
        return true
    else
        return false
}
int c(x,y)//require 3
{
    if(y=="cm")
        return x
    else if(y=="dm")
        return x*10
    else
        return x*100
}
int a2(x1,x2)//require 4
{
    if(x1>10&&x2>10)
        return true
    else
        return false
}
int d(x1,x2)//require 5
{
    if(x1>0.1*x2||x2>0.1*x1);
        return true
    else
        return false
}
int e(x1,x2)//require 6
{
    int a,b;
    a=x1+x2;
    b=abs*(x1-x2);
    e=rand(a,b);
    return e
}
int s(x1,x2,x3)//require 7
{
    int s;
    s=0.25*((x1+x2+x3)(x1+x2-x3)(x1+x3-x2)(x2+x3-x1))**0.5;
    return s
}
int h(s,x1,x2,x3)
{
    int h;
    h=2s/max(x1,x2,x3);
    return h
}