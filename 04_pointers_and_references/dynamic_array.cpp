// Создание, заполнение и удаление динамического массива

#include <iostream>
using std::cout, std::cin, std::endl;

int main(int argc, char *argv[])
{
    int size{};
    while(size < 1){
        cout << "Enter size: ";
        cin >> size;
    }

    int *arr = new int[size];       // создание с указанным размером

    for(int i{}; i<size; i++)       // заполнение случайными числами
        arr[i] = std::rand();

    for(int i{}; i<size; i++)       // вывод массива
        cout << arr[i] << endl;

    delete [] arr;                  // освобождение памяти
    return 0;
}
