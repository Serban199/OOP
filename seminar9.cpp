#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <queue>
using namespace std;
ifstream fin("input.txt");
class Sort
{
public:
    bool operator()(pair<string, int>& q1, pair<string, int>& q2)
    {
        if (q1.second != q2.second)
            return q1.second < q2.second;
        else
            return q1.first > q2.first;
    }
};

int main() {
    map<string, int> myMap;
    string string1;
    getline(fin, string1);
    string frecv = "";
    for (int i = 0; i < string1.size(); i++)
    {
        if ((string1[i] >= 'a' && string1[i] <= 'z') || (string1[i] >= 'A' && string1[i] <= 'Z'))
        {
            frecv += string1[i];
        }
        else
        {
            if (frecv != "")
            {
                for (int j=0;j<frecv.size();j++)
                    frecv[j] = tolower(frecv[j]);
               
                    myMap[frecv] += 1;
            }
            frecv = "";
        }
    }

    priority_queue<pair<string, int>, vector<pair<string, int>>, Sort > myQueue(myMap.begin(), myMap.end());
    while (!myQueue.empty())
    {
        cout << myQueue.top().first << " => " << myQueue.top().second << '\n';
        myQueue.pop();
    }


    return 0;
}
