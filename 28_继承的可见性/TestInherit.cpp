#include <iostream>

// 面向对象：继承
//
// public:    公有
// protected: 保护
// private:   私有

// 继承的可见性


class CPerson {
    public:
        CPerson() {

        }

        ~CPerson() {

        }

    void SetGender(int nGender) {
        m_nGender = nGender;
    }
    
    int GetGender() {
        return m_nGender;
    }
    
    public:
        int m_Public;

    protected:
        int m_Protected;

    private:
        int m_Private;

    private:
        char m_szName[255];
        int m_nGender;

};

//继承
//一个类是另一个类的儿子
//子类      父类
//派生类    基类

class CStudent : public CPerson
{
public:
    CStudent() {
        m_Public     = 1; // 子类内部可直接访问父类的公有成员
        m_Protected  = 1; // 子类内部可直接访问父类的保护成员
        // m_Private    = 1; // 子类内部不可访问父类的私有成员
    }

    ~CStudent() {

    }
// m_nGender是私有属性，public访问不到
//    int GetGender() {
//        return m_per.m_nGender;
//    }

// 不用继承的话，这么写
//    void SetGender(int nGender) {
//        m_per.SetGender(nGender);
//    }

private:
    CPerson m_per;  // 组合关系
    int m_nStuID;
//    char m_szName[255];
//    int  m_nGender;
};

// 老师类
class CTeacher
{
    public:
        CTeacher() {

        }
        
        ~CTeacher() {

        }

        int GetGender() {
            return m_nGender;
        }

        void SetGender(int nGender) {
            m_nGender = nGender;
        }
    
    private:
        char m_szName[255];
        int  m_nGender;

};



int main()
{
    CPerson per;
    per.m_Public    = 1;
   // 保护成员类外无法访问
   // per.m_Protected = 1;
   // 私有成员类外无法访问
   // per.m_Private   = 1 

    CStudent stu;

    stu.SetGender(1);

    std::cout << stu.GetGender() << std::endl;

    return 0;
}
