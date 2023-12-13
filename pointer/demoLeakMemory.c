#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 10
// 内存泄漏:3种场景
// 1.野指针
// 2.malloc出的堆空间没有被释放
// 3.踩内存（read/write is invalid）

int main()
{
    //1.什么情况下会导致内存泄漏
    //case 1:野指针
#if 0
    int a;
    printf("a:%d\n", a);

    int array[BUFFER_SIZE];
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\t", array[idx]);
    }
    printf("\n");
#endif

#if 0
    char *p;
    printf("\n");
#endif

    //case 2;
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    if(!ptr)
    {
        //todo...
        //状态码
        return -1;
    }
    //使用malloc分配的空间 数据是脏的 （脏数据）
    memset(ptr, 0, sizeof(char) * BUFFER_SIZE);
    
#if 0
    //极度危险的函数 改用strncpy
    strcpy(ptr, "hello world");
#else
    //使用安全
    strncpy(ptr, "hello worldnckjnsd", BUFFER_SIZE - 1);
#endif
    printf("ptr:%c\n", *ptr);

    if(ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }
    if (ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }


    return 0;
}