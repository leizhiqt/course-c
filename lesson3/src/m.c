#include <stdlib.h>
//main.c  
int a = 0; //全局初始化区  
char *p1; //全局未初始化区  
  
int main()  
{  
    static int c = 0;//全局（静态）初始化区  
    int b; //栈  
    char s[] = "abc"; //栈  
    char *p2; //栈  
    char *p3 = "123456"; //"123456\0"在常量区，p3在栈上。  
    p1 = (char *)malloc(10);  
    p2 = (char *)malloc(20); //分配得来得10和20字节的区域就在堆区。
}
