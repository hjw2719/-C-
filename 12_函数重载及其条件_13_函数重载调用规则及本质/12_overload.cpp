#include<iostream>

#define GETMAX(a, b) ((a) > (b) ? (a) : (b));

/*函数重载
 *C++中允许出现同名的函数 
 *
 *函数重载条件（函数要素：函数名，函数参数，函数返回值，函数的调动约定）
 *1、函数名必须相同
 *2、函数参数个数不同，类型不同，顺序不同
 *3、函数返回值、调用约定（如参数固定的__stdcall、参数可变的__cdel）不做考虑
 *4、作用域相同
 *
 *
 *函数重载的调用规则
 *1、根据函数名找对应的函数，作为候选函数。
 *    1.1如果候选函数个数为0,则报未定义错误（找不到标识符）
 *2、候选函数个数>0，从候选中找匹配的函数（完全匹配，可以转换的匹配（char<-->int,float<-->double,float<-->int））
 *   2.1如果匹配的函数个数 == 0，则错误（隐式转换失败）
 *   2.2如果匹配的函数个数 > 0，找最佳匹配。
 *3、最佳匹配的个数 = 1, 就会调用该函数
 *   最佳匹配的个数 > 1，就会报二义性    
 *


*/

int GetMax (int a, int b)
{
    return ((a) > (b) ? (a) : (b));
}

char* GetMax (char* a, char* b)
{
    return ((a) > (b) ? (a) : (b));
}

int getMax(int a, float b)
{
    return ((a) > (b) ? (a): (b));
}

char* getMax(char* a, char* b) 
{
    return ((a) > (b) ? (a) : (b));
}



int main()
{
    int n = GETMAX(1, 2);

    char* p = 0;
    char* q = 0;
    char* n = getMax(p, q);
    getMax(1.0f, 1);



    return 0;
}
