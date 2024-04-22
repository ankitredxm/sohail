#include <iostream>
using namespace std;
#define row 50
#define coloumn 50

class Matrix
{
    int arr[row][coloumn];
    int a, b;

public:
    Matrix(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void read()
    {
        cout << "\nEnter the matrix:  \n";
        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
            {
                cin >> arr[i][j];
            }
        }
    }

    void operator+(Matrix m)
    {
        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
            {
                arr[i][j] += m.arr[i][j];
            }
        }
    }

    void operator-(Matrix m)
    {
        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
            {
                arr[i][j] -= m.arr[i][j];
            }
        }
    }

    void display()
    { // display function
    cout<<"\nThe Result:....  \n";
        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int a, b;
    cout << "Enter the rows : ";
    cin >> a;
    cout << "Enter the coloumns : ";
    cin >> b;
    int a1, b1;
    cout << "\nEnter the rows for second matrix : ";
    cin >> a1;
    cout << "Enter the coloumns for second matrix : ";
    cin >> b1;

    if (a != a1 || b != b1)
    {
        cout << "\nInvalid Matrix Size\n";
        return 0;
    }
    Matrix m1(a, b), m2(a1, b1);
    m1.read(); // read funtion using
    m2.read();

    cout << "OPERATION: 1)+  2)-\n";
    char c;
    cin >> c;
    if (c == '+')
    {
        m1 + m2;
        m1.display(); // display function in use
    }
    else
    {
        m1 - m2;
        m1.display();
    }
}
