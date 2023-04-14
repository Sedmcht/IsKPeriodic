#include <iostream>
using namespace std;

bool IsKPeriodic(string str, int k)
{
    if (k >= str.size())
        return false;
    
    for (int i = 0; i < str.size() - k; i++)
    {
        if (str[i] != str[i + k])
            return false;
    }
    return true;
}

int main()
{
    cout << IsKPeriodic("abcabcabcabc",3);
}

