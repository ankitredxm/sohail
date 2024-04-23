#include <iostream>

using namespace std;

class point
{
    float x;
    float y;

public:
point()
{
    x=0;
    y=0;
}
    friend void operator>>(istream &in, point &p)
    {
        in >> p.x;
        in >> p.y;
    }

    void check(point &d)
    {
        if ((x == d.x) && (y == d.y))
        {
            cout << "Invalid Co-ordinates ";
            exit(0);
        }
    }
    friend void operator<<(ostream &out, point &p1)
    {   
        
        out << p1.x << endl;
        out << p1.y << endl;
    }
};

int main()
{
    point p, p1;
    cin >> p;
    cin >> p1;
    
    p.check(p1);
    cout << p;

    cout << p1;

    return 0;
}
