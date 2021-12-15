#include<iostream>

/*以下值传递*/
void foo(int n)
{
    n = 8;
}

/*以下地址传递*/
void foo(int* pN)
{
    *pN =8;
}

/*以下传入引用类型的参数*/
void fooRef(int& n)
{
    n = 6;
}

/*
  引用（左值）
  1、引用在定义时必须初始化，不能用常量为引用赋值
  2、只有常量引用可以使用常量来初始化
  3、引用的关系一旦建立则无法修改
  4、引用的使用：
    (1)作为函数参数  
    (2)作为函数返回值
  5、二级引用？（没有这个说法），但有二级指针  
  可以使用指针的引用来替代二级指针 

  引用的本质
  编译器产生的关联对应的存储器地址常量指针

*/


int& fooRtnRef()
{
    int k = 3;
    return k;
}

void exchange(int*& n1, int*& n2)
{
    int* k = n1;
    n1 = n2;
    n2 = k;
    return;
}



int main()
{
    int n = 5;
    int m = 6;
    int& ref = n;
    printf("%p\r\n", ref);
    std::cout << m << "\t" << n << "\t" << std::endl;
    
    int* pN = &n;
    int* pM = &m;
    exchange(pN, pM);
    std::cout << m << "======\t" << n << "========\t" << std::endl;

/*不存在二级引用*/    
//    int& ref = n;
//    int&& pRef = ref;
    

//    int& refN = n; // 引用（左值，引用就是变量的别名
//    // refN = 6;
//    //n = 6;
//    fooRef(refN);

/*更简洁写法*/
    fooRef(n);

    const int & crefN = 12;

//    std::cout << n << std::endl;

//    int& refK = fooRtnRef();
//    refK = 123; /*这么写编译OK但有warning，就是函数内部局部变量不能在函数外部再改变，运行的时候程序走到这行报错*/
//
//    std::cout << refK << std::endl;

    return 0;
}
