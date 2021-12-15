#include <iostream>

// 面向对象：继承
// 继承的可见性在何时做检查
// 是由编译器在编译时刻做的限制
class CPerson {
public:
    int Gender() {
        return m_nGender;
    }

    void SetGender(int nGender) {
        m_nGender = nGender;
    }

public:
    int m_nPublic;

protected:
    int m_nProtected;

private:
    int m_nGender;

};

class CStudent : public CPerson {
public:
    CStudent() 
    {

    }
private:
    int m_nStuId; //学号

};


int main() {
    int n_PerSize = sizeof(CPerson);
    std::cout << n_PerSize << std::endl;
   
    int n_CStuSize = sizeof(CStudent);
    std::cout << n_CStuSize << std::endl;
    
//    CStudent stu;
//    int* p = (int*)((char*)&stu + 8 ); //指针指向地址是CStudent类继承CPerson类m_nGender 属性的初始位置
//    *p = 123; // 把CPerson.m_nGender赋值为123

// 指针转换安全性问题
    CStudent stu;

// 子类指针转换成父类指针
    CPerson* pPer = &stu;

// 父类指针转换成子类指针 
    CPerson ppPer;
    CStudent* sStu = &ppPer;



    return 0;
}
