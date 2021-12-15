#include <iostream>

// 派生类的构造顺序
//1、先父类
//2、后子类
//
//派生类的析构顺序
//1、先子类
//2、后父类
//
//成员类的构造顺序
//1、先成员类
//2、后自己
//
//成员类的构造顺序
//1、先自己
//2、后成员类

class CPerson {
public:
    CPerson() {
        m_nGender = 123;
        std::cout << "CPerson 构造" << std::endl;
    }
    ~CPerson() {
        std::cout << "CPerson 析构" << std::endl;
    }

    int Gender() {
        return m_nGender;
    }

    void SetGender(int nGender) {
        m_nGender = nGender;
    }

public:
    int m_nGender;
};

class CTest {
public:    
    CTest() {
        std::cout << "CTest 构造" << std::endl;
    }
    ~CTest() {
        std::cout << "CTest 析构" << std::endl;
    }

private:
    CPerson per; 
}; 

class CStudent : public CPerson {
public:
    CStudent() {
        std::cout << m_nGender << std::endl;
        std::cout << "CStudent 构造" << std::endl;
    }
    ~CStudent() {
        std::cout << "CStudent 析构" << std::endl;
    }
private:    
    int m_nStuId; //学号

};

int main() {

    // 构造顺序：先执行基类构造函数，再执行子类构造函数
    // 析构顺序：先执行子类析构函数，再执行基类析构函数
    CStudent stu;
    
    // 类的组合形式，可以看成CTest是包含CPerson的，CTest是子类，CPerson是基类
    // 先执行基类CPerson构造函数，再执行子类CTest构造函数，先执行子类CTest析构函数，再执行基类CPerson析构函数

    CTest ctest;

    return 0;
}
