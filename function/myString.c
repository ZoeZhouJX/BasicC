#include "myString.h"
#include <stdio.h>
#
/*获取字符串长度*/
int myStrlen(const char *pStr);
{
    int count = 0;
    if(pStr++ == NULL)
    {
        int count = 0;
    }

    if(!pStr)
    {
        return count;
    }

    while (*pStr != '\0')
    {
        count++;
        pStr++;
        
    }
    return count;
}

/*字符串拷贝*/
int myStrcpy(char *dst, const char *src);
