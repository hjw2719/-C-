#include<iostream>

#define GETMAX(a, b) ((a) > (b) ? (a) : (b))

inline int getMax(int a, int b) {
    return a > b ? a : b;
}

int main(int argc, char* argv[])
{
    int n = argc + 10;
//    int n1 = GETMAX(n++, 2); // n1 = 12
//    std::cout << n1 << std::endl;
    // int n1 = ((n++) > (2) ? (n++) : (2)) //  先执行最左边n++操作，此时n=12,然后执行右边n++操作，此时n=13，但是返回的是12 > 2时n的值
//    int n1 = getMax(1, 2);
//    int n2 = getMax(2, 3);
//    int n3 = getMax(2, 4);
    int n4 = getMax(n++, 2); // n4 = 11 
    std::cout << n4 << std::endl;

    return 0;
}
