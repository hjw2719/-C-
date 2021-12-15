#include <iostream>
typedef int BOOL;

int main() {
    //布尔类型 真假
    //条件判断/逻辑类型
    int n = 5;
    int bRet = (n > 3);
    //void* p = (void*)&bRet;
    int nboolSize = sizeof(bool);
    int nBOOLSize = sizeof(BOOL);
    std::cout << "nboolSize: " << nboolSize << std::endl;
    std::cout << "nBOOLSize: " << nBOOLSize << std::endl;

    if (bRet) {
        printf("n > 3");
    }
    else {
        printf("n <= 3");
    }

    return 0;
}
