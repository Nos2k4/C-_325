#include <iostream>
using namespace std;
class lesgo
{
    public:
    // Overloaded function - adds two integers
    int add(int a, int b) {
        cout << a + b << endl;
    }

    // Overloaded function - adds two doubles
    double add(double a, double b) {
        cout << a + b << endl;
    }

    // Overloaded function - adds three integers
    int add(int a, int b, int c) {
        cout << a + b + c << endl;
    }
};

int main() {
    lesgo obj;
    obj.add(5, 10);
    obj.add(5.5, 10.5);
    obj.add(5, 10, 15);
    return 0;
}