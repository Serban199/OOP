
#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void BubbleSort(vector<T> &array)
{
    for (int i = 1; i < array.size(); i++)
        for (int j = 1 ; j < array.size(); j++)
            if (array[j] > array[j + 1])
            {
                T aux;
                aux = array[j];
                array[j+1] = aux;
            }

}
int main()
{
    vector<int> intvector = { 8,4,4,7,4,9,2,4,2 };
    BubbleSort(intvector);
    for (const auto& m : intvector)
        cout << m << " ";
    vector<char> charvector = { 'z','a','f','e'};
    BubbleSort(charvector);
    for (const auto& m : charvector)
        cout << m << " ";
    return 0;
}
