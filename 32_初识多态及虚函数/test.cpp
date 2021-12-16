#include <iostream>

// 面向对象：多态
// 当父类函数有父类的实现，子类函数有子类的实现，让子类对象自己选择各自函数的实现
class CPerson {
public:
    CPerson() {
        m_nType = 0;
    }

    virtual void speak() {
        std::cout << "说人话" << std::endl;
    }

    int m_nType;

};



class CChinese : public CPerson {
public:
    CChinese() {
        m_nType = 1;
    }

    void speak() {
        std::cout << "说中文" << std::endl;
    }

    int m_nType;


};

class CEnglish : public CPerson {
public:
    CEnglish() {
        m_nType = 2;
    }

    void speak() {
        std::cout << "说英文" << std::endl;
    }

    int m_nType;

};    


int main() {
    CChinese chs;
    CChinese chs2;

    CEnglish eng;
    // 这里进行了强制类型转换
    CPerson* arr[3];

    arr[0] = &chs;
    arr[1] = &eng;
    arr[2] = &chs2;

    // 此时均调用父类的speak函数
   // for(int i = 0; i < 3; i++) {
   //     std::cout << i+1 << std::endl;
   //     arr[i]->speak();
   // }
   
    for(int i = 0; i < 3; i++){
        std::cout << i << "========" << std::endl;
        // 2个改变：1、增加父类CPerson virtual speak虚函数
        arr[i]->speak();
        //这里有bug，父类CPerson调用父类属性m_nType，由于CPerson.m_nType = 0所以以下循环均不会进入
       // if(arr[i]->m_nType == 1) {
       //     // 表示对象是中国人
       //     CChinese* pChs = (CChinese*)arr[i];
       //     pChs->speak();
       // } else if(arr[i]->m_nType == 2) {
       //     CEnglish* pEng = (CEnglish*)arr[i];
       //     pEng->speak();
       // }
    }

    return 0;

}
