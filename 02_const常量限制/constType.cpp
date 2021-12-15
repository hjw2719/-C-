#include<iostream>
//#define PI 3.14

const float FPI = 3.14f;
//常量无法修改是在什么时候检查的；
//1、程序编译时期

int main ()
{
    float r = 0.5;
    float n = FPI * r * r;
    float* p = (float*)&FPI;
    std::cout << p << std::endl;

    return 0;
}
