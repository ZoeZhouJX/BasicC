#include <stdio.h>

extern int myadd(int num1, int num2);
extern int mysub(int num1, int num2);
extern int mymul(int num1, int num2);
extern int mydiv(int num1, int num2);


int main()
{
    int num1 = 100;
    int num2 = 20;

    int ret = myadd(num1, num2);
    printf("ret:%d\n", ret);

    return 0;
}