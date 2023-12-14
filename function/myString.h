#ifndef __MYSTRING_H_
#define __MYSTRING_H_

#include <stdio.h>

//头文件只做函数的声明

/*获取字符串长度*/
int myStrlen(const char *pStr);

/*字符串拷贝*/
int myStrcpy(char *dst, const char *src);

/*字符串比较*/
int myStrcmp(const char *dst, const char *src);

/*字符串拼接*/
int myStrcat(char *dst, const char *src);

#endif