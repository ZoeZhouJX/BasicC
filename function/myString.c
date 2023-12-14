#include "myString.h"
#include <stdio.h>
#include <string.h>


#define BUFFER_SIZE 10

/*获取字符串长度*/
int myStrlen( const char *pStr)
{
    int count = 0;

    if(pStr == NULL)
    {
        return count;
    }
    // if (!pStr)
    // {
    //     return count;
    // }
    while ( pStr[count] != '\0')
    {
       count++ ;
    }
    return count;
}

/*字符串拷贝*/
int myStrcpy(char *dst1, const char *src1)
{
    int ret = 0;
    if(src1 == NULL || dst1 == NULL)
    {
        return 0;
    }
    while(*src1 != '\0')
    {
        *dst1 = *src1;
        dst1++;
        src1++;
    }
    return ret;
}

/*字符串比较*/
int myStrcmp(const char* ob1,const char* ob2)
{
    while(*ob1 != '\0' && *ob2 != '\0')
    {
        if(*ob1 > *ob2)
        {
           return 1;
        }
        else if(*ob1 < *ob2)
        {
            return -1;
        }
        else
        {
            ob1++;
            ob2++;
        }
    }
    if (*ob1 == '\0' && *ob2 != '\0')
    {
        return -1;
    }
    else if (*ob2 == '\0' && *ob1 != '\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*字符串拼接*/
int myStrcat(char *dst2, const char *src2)
{
    //判空
    int ret = 0;
    // char *tmpdst = dst2;
    if(dst2 == NULL || src2 == NULL)
    {
        return ret;
    }
#if 1
    int count = 0;
    while(dst2[count] != '\0')
    {
        count++;
    }

    int idx = 0;
    while(src2[idx] != '\0')
    {
        dst2[count] = src2[idx];
        count++;
        idx++;
    }
    dst2[count] = '\0';
#else
    while (*dst2 != '\0')
    {
        dst2++;
    }
    while (*src2 != '\0')
    {
        *dst2 = *src2;
        dst2++;
        src2++;
    }
    *dst2 = '\0';
#endif

    return 0;

}






int main()
{
#if 0
    char *pStr = "hello world";
    printf("len:%d\n", myStrlen(pStr));

    char *src1 = "hello worlhghjgjgjd";
    char dst1[BUFFER_SIZE];
    memset(dst1, 0, sizeof(dst1));

    strncpy(dst1, src1, BUFFER_SIZE - 1);//安全的边界
    printf("string:%s\n", src1);
    printf("string:%s\n", dst1);
    
    char *str1 = "abc";
    char *str2 = "abcd";
    printf("%d\n", myStrcmp(str1, str2));
#endif

    char *src2 = "efgh";        //无法修改 -> 指针
    char dst2[10] = "abcd";     //修改的 -> 定义数组   注意数组大小
    myStrcat(dst2, src2);
    printf("string:%s\n", dst2);

    return 0;
}