#include "Number.h"
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int Number::transformNumber(char c)  {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
  
}
int Number::transformchar(int value)  {
    if (value >= 0 && value <= 9) return '0' + value;
    if (value >= 10 && value <= 15) return 'A' + (value - 10);
  
}
void Number::changeBase( int base)
{
	///convert to base10
    int base10 = 0;
    for (int i = 0; i < strlen(valuen); i++)
        base10 += transformNumber(valuen[i]) * pow(basen, i);
    ///convert from base10 to the base
    if (base10 == 0) {
        delete[] valuen;
        valuen = new char[2];
        strcpy_s (valuen,2, "0");
        basen = base;
       
    }
    basen = base;
    char newValue[201] = {};
    int nr = 0;
    while (base10 > 0) {
        int remainder = base10 % base;
        newValue[nr++]= transformchar(remainder);

        base10 /= base;
    }
    newValue[nr + 1] = '\0';
    
    
    delete[] valuen;
    valuen = new char[nr + 1];
    //strcpy_s(valuen,nr+1, newValue);
    memcpy(valuen, newValue, strlen(newValue) + 1);
     valuen[nr + 1] = '\0';
}

Number::Number(const char* value, int base)
{
    //delete[]valuen;
    valuen = new char[strlen(value) + 1];
    strcpy_s(valuen, strlen(value) + 1, value);
    basen = base;
}
int reverse(int x)
{
    int temp = 0;
    while (x)
    {
        temp = temp * 10 + x % 10;
        x /= 10;
    }
    return temp;
}
void Number::Print()
{
    cout << "Valoarea este " << valuen << " si baza " << basen;
    cout << endl;
}
int Number::GetBase()
{
    return basen;
}
int Number::GetDigitsCount()
{
    return strlen(valuen);
}

 Number& Number :: operator=(const Number& other)
{
  
         basen = other.basen;
         valuen = other.valuen;
    return (*this);
}
  bool Number::operator<(const Number other)
 {
     int a = 0, b = 0;
     Number temp1(this->valuen, this->basen);
     Number temp2(other.valuen, other.basen);
     temp1.changeBase(10);
     temp2.changeBase(10);
     for (int i =0; i < strlen(temp1.valuen); i++)
         a = a * 10 + transformNumber(temp1.valuen[i]);
     for (int i = 0; i < strlen(temp2.valuen); i++)
         b = b * 10 + transformNumber(temp2.valuen[i]);
     a = reverse(a);
     b = reverse(b);
     if (a < b)
         return true;
     return false;

 }
  bool Number::operator<=(const Number other)
  {
      int a = 0, b = 0;
      Number temp1(this->valuen, this->basen);
      Number temp2(other.valuen, other.basen);
      temp1.changeBase(10);
      temp2.changeBase(10);
      for (int i = 0; i < strlen(temp1.valuen); i++)
          a = a * 10 + transformNumber(temp1.valuen[i]);
      for (int i = 0; i < strlen(temp2.valuen); i++)
          b = b * 10 + transformNumber(temp2.valuen[i]);
      a = reverse(a);
      b = reverse(b);
      if (a <= b)
          return true;
      return false;
  }
  bool Number::operator>(const Number other)
  {
      int a = 0, b = 0;
      Number temp1(this->valuen, this->basen);
      Number temp2(other.valuen, other.basen);
      temp1.changeBase(10);
      temp2.changeBase(10);
      for (int i = 0; i < strlen(temp1.valuen); i++)
          a = a * 10 + transformNumber(temp1.valuen[i]);
      for (int i = 0; i < strlen(temp2.valuen); i++)
          b = b * 10 + transformNumber(temp2.valuen[i]);
      a = reverse(a);
      b = reverse(b);
      if (a > b)
          return true;
      return false;

  }

  bool Number::operator>=(const Number other)
  {
      int a = 0, b = 0;
      Number temp1(this->valuen, this->basen);
      Number temp2(other.valuen, other.basen);
      temp1.changeBase(10);
      temp2.changeBase(10);
      for (int i = 0; i < strlen(temp1.valuen); i++)
          a = a * 10 + transformNumber(temp1.valuen[i]);
      for (int i = 0; i < strlen(temp2.valuen); i++)
          b = b * 10 + transformNumber(temp2.valuen[i]);
      a = reverse(a);
      b = reverse(b);
      if (a >= b)
          return true;
      return false;
  }

  bool Number::operator==(const Number other)
  {
      int a = 0, b = 0;
      Number temp1(this->valuen, this->basen);
      Number temp2(other.valuen, other.basen);
      temp1.changeBase(10);
      temp2.changeBase(10);
      for (int i = 0; i < strlen(temp1.valuen); i++)
          a = a * 10 + transformNumber(temp1.valuen[i]);
      for (int i = 0; i < strlen(temp2.valuen); i++)
          b = b * 10 + transformNumber(temp2.valuen[i]);
      a = reverse(a);
      b = reverse(b);
      if (a == b)
          return true;
      return false;
  }

  bool Number::operator!=(const Number other)
  {
      int a = 0, b = 0;
      Number temp1(this->valuen, this->basen);
      Number temp2(other.valuen, other.basen);
      temp1.changeBase(10);
      temp2.changeBase(10);
      for (int i = 0; i < strlen(temp1.valuen); i++)
          a = a * 10 + transformNumber(temp1.valuen[i]);
      for (int i = 0; i < strlen(temp2.valuen); i++)
          b = b * 10 + transformNumber(temp2.valuen[i]);
      a = reverse(a);
      b = reverse(b);
      if (a != b)
          return true;
      return false;
  }


Number Number :: operator +(const Number other)
{
    int maxbase;
    if (basen > other.basen)
        maxbase = basen;
    else
        maxbase = other.basen;
    
    char* tempvaluen1 = new char[strlen(this->valuen)];
    tempvaluen1 = valuen;
    int tempbase1 = this->basen;

    Number temp1(this->valuen,this->basen);
    Number temp2(other.valuen,other.basen);
    temp1.changeBase(10);
    temp2.changeBase(10);
    char sumchar[50]{};
    int a = 0, b = 0;
    for (int i = strlen(temp1.valuen) - 1; i >= 0; i--)
        a = a * 10 + transformNumber(temp1.valuen[i]);
    for (int i = strlen(temp2.valuen) - 1; i >= 0; i--)
        b= b * 10 + transformNumber(temp2.valuen[i]);
    a = reverse(a);
    b = reverse(b);
    int sum = a+b;
    int nr = 0;
    //changeBase(maxbase);
    int tempbase = this->basen;
    this->basen = maxbase;
    while (sum)
    {
        sumchar[nr++] = transformchar(sum % 10);
        sum /= 10;
    }
    for (int i = 0; i < strlen(sumchar) / 2; i++)
        swap(sumchar[i], sumchar[strlen(sumchar) - i - 1]);
    this->basen = tempbase;
    this->valuen = new char[strlen(tempvaluen1)];
    this->valuen = tempvaluen1;
    this->basen = tempbase1;
    return Number(sumchar, maxbase);

}
Number Number :: operator -(const Number other)
{
    int maxbase;
    if (basen > other.basen)
        maxbase = basen;
    else
        maxbase = other.basen;

    char* tempvaluen1 = new char[strlen(this->valuen)];
    tempvaluen1 = valuen;
    int tempbase1 = this->basen;

    Number temp1(this->valuen, this->basen);
    Number temp2(other.valuen, other.basen);
    temp1.changeBase(10);
    temp2.changeBase(10);
    char sumchar[50]{};
    int a = 0, b = 0;
    for (int i = strlen(temp1.valuen) - 1; i >= 0; i--)
        a = a * 10 + transformNumber(temp1.valuen[i]);
    for (int i = strlen(temp2.valuen) - 1; i >= 0; i--)
        b = b * 10 + transformNumber(temp2.valuen[i]);
    a = reverse(a);
    b = reverse(b);
    int sum = a - b;
    int nr = 0;
    //changeBase(maxbase);
    int tempbase = this->basen;
    this->basen = maxbase;
    while (sum)
    {
        sumchar[nr++] = transformchar(sum % 10);
        sum /= 10;
    }
    for (int i = 0; i < strlen(sumchar) / 2; i++)
        swap(sumchar[i], sumchar[strlen(sumchar) - i - 1]);
    this->basen = tempbase;
    this->valuen = new char[strlen(tempvaluen1)];
    this->valuen = tempvaluen1;
    this->basen = tempbase1;
    return Number(sumchar, maxbase);

}
Number Number::operator+=(const Number& other) {
    *this = *this + other;
    return *this;
}

Number& Number::operator--()
{
    
    for (int i = 1; i < strlen(valuen); i++)
        valuen[i - 1] = valuen[i];
    valuen[strlen(valuen)-1] = '\0';
    return *this;
}
Number& Number::operator--(int)
{
 valuen[strlen(valuen)-1] = '\0';
    return *this;
}
int  Number ::operator[](int x)
{
    return valuen[x];

}


