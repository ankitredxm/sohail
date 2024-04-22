#include <iostream>
using namespace std;

class shedule
{

    int a, b;

public:
    static int c;
    shedule(int i, int j)
    {
        a = i;
        b = j;
    }
    bool operator==(shedule s)     //bool operation used
    {
        for (int i = a; i < b; ++i)
        {
            for (int j = s.a; j < s.b; ++j)
            {
                if (i == j)
                {
                    ++c;
                    return true;
                }
            }
        }
        return false;
    }
};
int shedule::c = 0;

int main()
{
    int a, b;
    cin >> a >> b;
    int a1, a2;
    cin >> a1 >> a2;
    int a3, a4;
    cin >> a3 >> a4;

    shedule o(a, b), o1(a1, a2), o2(a3, a4);
    if (o == o1 && o == o2 && o1 == o2)
    {
        cout << "The no of required class: " << shedule::c;
    }
    else if (o == o1 || o == o2)
    {
        cout << "The no of required class: " << shedule::c;
    }
    else
    {
        cout << "The no of required class: " << shedule::c;
    }
}