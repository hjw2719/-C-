#include <iostream>

// 初始化列表
// 1、用来调用父类的有参构造
// 2、对于自身成员的初始化
// 3、对于常量成员的初始化




// 函数隐藏
// 1、作用域不同
// 2、函数名相同
// 3、参数列表和调用约定，返回值均不考虑


class CPerson {
public:
    CPerson() {
        std::cout << "CPerson()构造函数调用" << std::endl;
    }

    CPerson(int nGender) {
        m_nGender = nGender; 
    }
    
    // 如果是CPerson(int nGender)这种有参构造，子类CStudent stu初始化
    // 时没发传入参数给父类CPerson的有参构造，因为子类CStudent没有有参
    // 构造函数，所以需要用initial list形式，重写子类的无参构造函数
    CPerson(int nGender, int n) {
        m_nGender = nGender; 
        std::cout << "CPerson(int nGender, int n)" << std::endl;
    }
    
    void test(int n) {
        std::cout << "===========CPerson::test()=============" << std::endl;
    }

//private:
public:
    int m_nGender;

};

class CStudent : public CPerson {
public:
    CStudent():CPerson(123, 4), m_nStuId(4), n(123), m_nGender(456) {
        // 直接双冒号继承父类
        CPerson::m_nGender = 1;
        std::cout << "CStudent initial list" << std::endl;
    }

void test() {
        std::cout << "===============CStudent::test()================" << std::endl;
    }

//private:
public:
    int m_nGender;
    int m_nStuId;
    const int n;

};

int main() {
    CStudent stu;
    // 调用子类的函数
    //stu.test();
    // 调用父类的函数
    //stu.CPerson::test();
    
    std::cout << stu.m_nGender << std::endl;
    // test函数符号直接去子类寻找，如果参数不匹配，则报错 
    //stu.test(5);
    stu.test();

    return 0;
}




