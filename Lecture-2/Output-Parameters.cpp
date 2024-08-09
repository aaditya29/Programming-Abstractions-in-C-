#include <iostream>
using namespace std;

void DatingRange(int age, int &min, int &max)
{
    min = age / 2 + 7;
    max = (age - 7) / 2;
}

int main()
{
    int young;
    int old;
    cout << "A 50 year old man can date someone from" << young << " to" << old << " years old." << endl;
}