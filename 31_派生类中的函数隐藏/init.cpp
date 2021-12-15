#include <iostream>

// 初始化列表
// 1、用来调用父类的有参构造
// 2、对于自身成员的初始化
// 3、对于常量成员的初始化




// 函数隐藏

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


private:
    int m_nGender;

};

class CStudent : public CPerson {
public:
    CStudent():CPerson(123, 4), m_nStuId(4), n(123) {
        std::cout << "CStudent initial list" << std::endl;
    }

private:
    int m_nStuId;
    const int n;

};

int main() {
    CStudent stu;


    return 0;
}




