#include "Sort.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include<sstream>
using namespace std;
Sort :: Sort(int min, int max, int n1)
{
    srand(time(nullptr));

    for (int i = 0; i < n1; i++)
        v[i] = (rand() % (max - min + 1)) + min;
    n = n1;
}
/*Sort::Sort(int initList[])
{
    for (int i = 0; i < initList.size(); i++)
        v[i] = initList[i];
    
}*/
Sort::Sort(int v1[], int n1)
{
    for (int i = 0; i < n1; i++)
        v[i] = v1[i];
    n = n1;
}
Sort::Sort(string s)
{
    int nr = 0;
    stringstream ss(s);
    string token;
    while (getline(ss, token, ',')) {
        v[nr++] = stoi(token);
    }
    n = nr;
}
void Sort::BubbleSort(bool ascendent)
{
    for(int i=0;i<n;i++)
        for (int j = i + 1; j < n; j++)
        {
            if (ascendent == false)
            {
                if (v[i] < v[j])
                    swap(v[i], v[j]);
            }
            else
            {
                if (v[i] > v[j])
                    swap(v[i], v[j]);
            }
        }
}
void Sort::InsertSort(bool ascendent )
{
    for (int i = 1; i < n; ++i) {
        int key = v[i];
        int j = i - 1;

        if(ascendent=true)
            while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            --j;
        }
        else
            while (j >= 0 && v[j] > key) {
                v[j + 1] = v[j];
                --j;
            }
        v[j + 1] = key;
    }

}
void Sort:: Print()
{
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}
int Sort::GetElementsCount()
{
    return n;
}
int Sort::GetElementFromIndex(int index)
{
    return v[index];
}
