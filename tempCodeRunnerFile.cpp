#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class Triangle
{
    int s1;
    int s2;
    int s3;
    public:
    void input(void);
    void calc(void);
};
void Triangle:: input(void)
{
    cout<<"enter the first side"<<endl;
    cin>>s1;
    cout<<"enter the second side"<<endl;
    cin>>s2;
    cout<<"enter the third side"<<endl;
    cin>>s3;
}
void Triangle:: calc(void)
{
    double area=0.0,s=0.0;
    s=(s1+s2+s3)/2.0;
    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout<<"the area is"<<area;
}
int main()
{
    Triangle t;
    t.input();
    t.calc();
    return 0;
}
