#include <iostream>
using namespace std;

class Test
{
    int a, b, c;

public:
    Test()
    {   
        cout<<"Input:\n";
        cin >> a;
        cin >> b;
        cin >> c;
        if (a == 0 && b == 0 && c == 0)
        {
            cout << "All zeros";
            exit(0);
        }
    }
    friend void operator++(Test &t)
    {
        ++t.a;
        ++t.b;
        ++t.c;
    }
    void display()
    {
        cout << a << "," << b << "," << c << "\n";
    }
};

int main()
{
    Test s;
    s.display();
    ++s;
    s.display();
    ++s;
    s.display();
}