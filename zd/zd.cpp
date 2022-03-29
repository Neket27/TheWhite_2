#include <iostream>
#include <string>
using namespace std;
#include "set.h"
#include "set.cpp"

int fun(int x, int y) {
    return x + y;
}
int fun(char x, char y) {
    return x + y;
}

int main()
{
    setlocale(LC_CTYPE, "Russian");
    Set<char> a;
    cout << "Ввод и вывод 1 множества " << endl;
    a.Enter();
    a.Show();



}


