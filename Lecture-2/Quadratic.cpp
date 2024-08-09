#include <cmath>
#include <iostream>
using namespace std;

void quadratic(int a, int b, int c, double &root1, double &root2)
{
    double d = sqrt(a * a - 4 * a * c);
    root1 = (-b + d) / (2 * a);
    root1 = (-b + d) / (2 * a);
}

int main()
{
    double root1, root2;
    quadratic(1, -4, -5, root1, root2);
    cout << "The roots are " << root1 << " and " << root2 << endl;
}