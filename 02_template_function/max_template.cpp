#include <iostream>

using std::cout, std::endl, std::string;

template <typename T>
T maxValue(T a, T b){
    return a > b ? a : b;
}

int main(int argc, char *argv[]){
    cout << "max = " << maxValue(2.3, 4.9) << endl;  // сравнение чисел с плавающей точкой
    cout << "max = " << maxValue(3, 2) << endl;      // сравнение целочисленных
    cout << "max = " << maxValue('c', 'a') << endl;  // сравнение символов
    return 0;
}
