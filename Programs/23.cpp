// Write a progrmam to find anagram of two strings

#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cout << "Enter two strings to check anagram: ";
    cin >> a >> b;
    int count[256] = {0};
    for (int i = 0; i < a.length(); i++)
    {
        count[a[i]]++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        count[b[i]]--;
    }
    bool isAnagram = true;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            isAnagram = false;
            break;
        }
    }
    if (isAnagram)
    {
        cout << "The two strings are anagram." << endl;
    }
    else
    {
        cout << "The two strings are not anagram." << endl;
    }
    return 0;
}