#include<iostream>

int main(int nArgc, char* pArgv[])
{
//    const char* p = "Hello World!";
// 指针内容(常量)无法被修改
//    p[0] = 'a';

// 指针本身值可以修改，但是指针所引用的值无法修改    
//    char* p3 = nullptr;
//    p = p3;

// char* const 类型，指针所引用的值可以修改，但指针本身地址无法修改
//    char szBuf[256] = "Hello World!";
//    char* const p = szBuf;
//    
//    p[0] = 'A';
//    std::cout << sizeof(*p) << std::endl; // sizeof(*p) = 1
//    std::cout << *p << std::endl;         // *p 是A

// 以下赋值操作均报错
//    const char* const p = "Hello World!"
//    p[0] = 'A';
//    p = nullptr;

// 将const int*强制转换成int*,以下2种强制转换都可以
    const int n = 5;
//    int* p = (int*)&n;
    int* p = const_cast<int*>(&n);
    *p = 1;
    std::cout << *p << std::endl;

    return 0;
}
