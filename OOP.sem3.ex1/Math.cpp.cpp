#include "Math.h"
#include <iostream>
#include <stdarg.h>
#include <cstring>
int Math::Add(int a,int b)
{
    return a + b ;
}
int  Math::Add(int a, int b,int c)
{
    return a + b+c;
}
int  Math::Add(double a, double b)
{
    return a + b;
}
int  Math::Add(double a, double b,double c)
{
    return a + b+c;
}
int  Math::Mul(int a, int b)
{
    return a * b;
}
int  Math::Mul(int a, int b,int c)
{
    return a * b * c;
}
int  Math::Mul(double a, double b)
{
    return a * b;
}
int  Math::Mul(double a, double b,double c)
{
    return a * b * c;
}
int  Math::Add(int count, ...)
{
    int result = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i)
        result += va_arg(args, int);
    va_end(args);
    return result;
}
char* Math::Add(const char* a, const char* b)
{
    if (a == nullptr || b == nullptr)
        return nullptr;

   
    char result[51];

    result[0] = '\0'; 
    strcpy_s(result, a);
    strcat_s(result, b);

    return result;
}

