#include <iostream>

class CPerson {
    public:
        CPerson() {

        }

        ~CPerson() {

        }

        int GetGender() {
            return m_nGender;
        }

        void SetGender(int nGender) {
            m_nGender = nGender;
        }

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
    CStudent stu;

    stu.SetGender(1);

    std::cout << stu.GetGender() << std::endl;

    return 0;
}
