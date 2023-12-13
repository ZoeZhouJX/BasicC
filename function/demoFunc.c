#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"
/* 函数参数：可以没有 也可以有 */
/* 函数返回值：可以没有 也可以有。
    没有的情况要写void
    如果有，返回你想返回的数据类型{ int | long | short | char | float | */



/* 函数的定义 */
// case1: 没有参数，没有返回值
#if 0
 void purchaseAppointThing()
 {
    printf("purchase a phone\n");
 }
 #endif

#if 0
// case2：有参数，没有返回值
//* 函数参数一定要有数据类型 
 void myAddnum1(int num1, int num2)
 {
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
 }
 #endif

#if 0
// case3:有参数，有返回值
int myAddnum2(int num1, int num2)
 {
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
    return sum;
 }
#endif

#if 0
/* 枚举  枚举也是一种数据类型 */
enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL,
};
/* 取别名 */
typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL,
} STATUS_CODE;
#endif

int main()
{
#if 0
    /* 函数的调用 */
    purchaseAppointThing();


    int num1 = 5;
    int num2 = 6;


    /* 函数的使用 */
    myAddnum1(num1, num2);


    int totalSum = myAddnum2(num1, num2);
    // if ()
    
    int transFormerprice = 10;

    if(totalSum > transFormerprice)
    {
        printf("get a transForme\n");
    }
    else
    {
        printf("l not geted.\n");
    }
    

    STATUS_CODE status;
    int len = sizeof(status); 
#endif
 
 #if 1
    int num1 = 50;
    int num2 = 60;
    int sum = calculateAdd(num1, num2);
    printf("sum:%d\n", sum);
    
    int num3 = calculateSub(num1, num2);
    printf("sum:%d\n", num3);

    int amass = calculateMul(num1, num2);
    printf("sum:%d\n", amass);

    int num4 = calculateDiv(num1, num2);
    printf("snum4:%d\n", num4);

    char *ptr = NULL;
    int len = 0;
    #if 1
    len = strlen(ptr);
    #else
    int len = myString(ptr);
#endif
    printf("len:%d\n", len);

    return 0;
}