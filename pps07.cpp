#include <iostream>
using namespace std;

float x, y;
class MathSymbol
{
    /*Abstract class contains at least
                       one pure virtual function*/
public:
    virtual void doOperation() = 0;
};

class Plus : public MathSymbol
{
public:
    void doOperation()
    {
        cout << "\nAddition: " << x + y;
    }
};

class Minus : public MathSymbol
{
public:
    void doOperation()
    {
        cout << "\nSubstraction: " << x - y;
    }
};

int main()
{

    cout << "Enter the value of x and y: \n";
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "\nAll zeros";
        exit(0);
    }

    class MathSymbol *m1[2] = {new Plus(), new Minus()};

    m1[0]->doOperation();
    m1[1]->doOperation();
}
