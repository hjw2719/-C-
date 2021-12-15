#include <iostream>
#include <cstring>
// 构造与析构
// 构造函数
// 1）用于对象的初始化
// 2)写法：a)函数名是类名
//         b)不写函数的返回值
//         c)可以有多个参数
//         d)也可以没有参数
//
//析构函数：
//1、作用：完成资源的反初始化，资源的释放
//2、析构函数的写法：
//    （1）类名前加上～
//    （2）通常是由编译器决定调用时机，不需要手动调用
//    （3）析构函数不能有参数和返回值
//3、析构函数不能重载




class CStudent {
private:
    int m_nStuId; // 学号
    char m_szName[255]; // 学生姓名


public:
    //构造函数
    //无参构造函数
    CStudent() {
        //为了m_szName创建一个堆空间（分配动态内存）
        printf("CStudent()\r\n");
        //m_szName = (char*)malloc(255);
        strcpy(m_szName, (char*)malloc(255));
    };

    CStudent(char* pName, int nLength) {
        //为了m_szName创建一个堆空间（分配动态内存）
        printf("CStudent(char* pName, int nLength)\r\n");
        if (nLength > 255) {
            return;
        }

        //m_szName = (char*)malloc(255);
        strcpy(m_szName, (char*)malloc(255));
        if (m_szName == nullptr) {
            return;
        }

        memcpy(m_szName, pName, nLength);
    };


    // 默认拷贝构造
    CStudent(CStudent& obj) = default;

//    CStudent(CStudent& obj) {
//        printf("CStudent(CStudent& obj)\r\n");
//    }

    CStudent(char* pszName) {
        pszName = (char*)malloc(255);
        strcpy(m_szName, pszName);
        // this->m_szName = pszName; 
    }

    //一个参数的构造函数
  //  CStudent(char* pszName){
  //  //    strcpy(m_szName, pszName)
  //      printf("CStudent(char* pszName)\r\n");
  //  }
  //  
  //  CStudent(int nStuId, char* pszName) {
  //  //    strcpy(m_szName, pszName);
  //  //    m_nStuId = nStuId;
  //      printf("CStudent(int nStuId, char* pszName)\r\n");

  //  }

  //  void GetName() {
  //      std::cout << m_szName << std::endl;
  //  }

//    void SetNmae(char* pszName) {
//        strcpy_s(m_szName, pszName);
//    }
    ~CStudent(){
        printf("~CStudent()\r\n");
        // free(m_szName);
    }

};



int main()
{
    CStudent stu;
    CStudent stu2("张三");
    CStudent stu3("李四", 8);
    //    CStudent stu = "张三";
//    CStudent stu3 = "王五";

//    CStudent stu(1, "张三");
//    CStudent stu3(3, "王五");

//    std::cout << stu.GetName() << std::endl;
//    std::cout << stu3.GetName() << std::endl;
    
    //stu.SetName("张三")

    //CStudent stu2;
    //stu.SetName("李四")
    

    return 0;
}


