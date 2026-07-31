#include <iostream>

using namespace std;

class Compare
{
private:
    /* data */
    int n1;

public:
    Compare(int n1);
    ~Compare();

    bool operator>(Compare &c2)
    {
        return n1 > c2.n1;
    }
};

Compare::Compare(int n1)
{
    this->n1 = n1;
}

Compare::~Compare()
{
}

int main(int argc, char const *argv[])
{
    Compare c1 = 21, c2 = 32;

    if (c1 > c2)
    {
        cout << "C1 is bug";
    }
    else
    {
        cout << "C2 is bug";
    }

    return 0;
}
