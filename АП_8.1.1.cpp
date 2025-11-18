#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
int Count(const char* str)
{
    if (strlen(str) < 3)
        return 0;
    int k = 0;
    for (int i = 1; str[i + 1] != '\0'; i++)
    {

        if (str[i - 1] == '+' && str[i + 1] == '-')
        {
            k++;
        }
    }

    return k;
}

int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "String contained " << Count(str) << " groups of '+ -'" << endl;
    return 0;
}
