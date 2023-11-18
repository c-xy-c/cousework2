#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>user;
    COUT<<"Enter password"
    cin>>key;
    while(not key==password)
    {
        cin>>key2;
        key=key2;
    }
    cout<<"User name:" name<<endl;
    cout<<"Welcome"<<endl;
    cout<<"Customer Number:";
    cin>>n;
    while(not (n>=1&&n<=6))
    {
        cout<<"Customer Number:";
        cin>>n1;
        n=n1;
    }                                          
    int i;
    while(i<=n)
    {
        cout<<"Dish Code";
        cin>>c;
        if(c=="F")
            i+=1;
        else if(not a(c))
            cout<<"This dish code does not exist! Try again!";
        else if(not b(c))
            cout<<"This dish is not available now!";
        else
            
    }

}
int a(c)//判断菜单里有没有这个菜

int b(c)//判断菜品有没有售罄