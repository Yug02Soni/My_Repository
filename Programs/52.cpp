// Demo of Overloading != operator in C++

#include <iostream>

using namespace std;

class Compare
{
private:
    /* data */
    int n1;
    int n2;

public:
    Compare(int n1, int n2);
    ~Compare();

    bool operator!=(Compare &c2)
    {
        return (n1 != c2.n1) || (n2 != c2.n2);
    }
};

Compare::Compare(int n1, int n2)
{
    this->n1 = n1;
    this->n2 = n2;
}

Compare::~Compare()
{
}

int main(int argc, char const *argv[])
{
    Compare c1 = {21, 32}, c2 = {21, 32};

    if (c1 != c2)
    {
        cout << "C1 and C2 are not equal";
    }
    else
    {
        cout << "C1 and C2 are equal";
    }

    return 0;
}
