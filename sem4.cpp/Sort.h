#pragma one
#include<string>
#include <iostream>
using namespace std;
class Sort
{
    int v[101], n;
public:
    
    Sort(int min, int max, int n1);
    Sort(int initlist[]);
    Sort(int v1[], int n1);
    Sort(string s);
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
