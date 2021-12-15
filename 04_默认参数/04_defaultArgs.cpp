#include<iostream>
#include "Test.h"

//  设置n4, n5, n6为默认参数
int TestFoo(int n1, int n2, int n3, int n4, int n5, int n6)
{
    std::cout << n1 << "\t" << n2 << "\t" << n3 << "\t" << n4 << std::endl;
    return 0;
}

int main()
{
    TestFoo(1, 2, 3, 44444);

    return 0;
}
