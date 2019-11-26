#include <iostream>
using namespace std;

const double pi = 3.14159;

void calculate()
{
    double area;
    double radius;

    cout<<"Enter radius: "<<endl;
    cin>>radius;

    area = pi * radius * radius;

    cout<<"Area is: "<<area<<endl;
}

int main()
{
    calculate();
    return 0;
}
