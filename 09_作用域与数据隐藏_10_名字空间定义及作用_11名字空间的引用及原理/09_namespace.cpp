#include<iostream>

/*
  作用域：
 1、全局作用域 名字空间域（namespace）
 2、局部作用域 块作用域
 3、类域（class）

数据隐藏
1、在不同的作用域可以定义多个相同名字的变量
2、内部的变量会隐藏外部的变量(内>外查找，就近查找)

名字空间
三班 张三
四班 张三


*/

/* shellMad 名字空间
1、一种作用域的划分，通常用于区分项目中模块或组件
2、关键字namespace，可以分开使用
3、名字空间可以嵌套
4、名字空间可以取别名

名字空间的引用
1、直接使用名字空间::内容（推荐）
2、声明名字空间 using namespace::ShellMad
3、声明只使用名字空间的部分变量或函数 using ShellMad::n;

名字空间的原理
.c/.cpp -->g++ --> .o --> linker --> 可执行文件

*/
namespace ShellMad {
    int nWidth = 5;
    namespace ShellGame {
        int nMoney;
    }
    void foo() {
        int nWidth = 999; 
    }
}

namespace nNamespace = ShellMad::ShellGame; // 名字空间取别名

namespace Ali {
    int nWidth = 5;
}

int nWidth = 101;

int n = 6;
int main()
{
    printf("global n=%d\n", n);
    int n = 5;

    /*块作用域,局部作用域，仅块内生效*/
    {
        int n = 7;
        printf("block n=%d\n", n);
    }
 
    printf("main n=%d\n", n);
    
    ShellMad::foo();
    std::cout << ShellMad::nWidth << "==1111111111=="<< std::endl;

    ShellMad::nWidth = 6;
    std::cout << ShellMad::nWidth << "==2222222222=="<< std::endl;
    Ali::nWidth = 7;
     

    return 0;
}
