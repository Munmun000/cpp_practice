#include <iostream>

using std::cout, std::cin, std::endl;

template <typename T>
void Swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(int argc, char *argv[])
{
    int a=2, b=5;
    cout << "a: " << a << " b: " << b << endl;
    Swap(a, b);
    cout << "a: " << a << " b: " << b << endl;

    return 0;
}
