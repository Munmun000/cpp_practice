// функции добавления и удаления первого/последнего элемента
// Пример вывода:
// 41      18467   6334    26500   19169    
// 41      18467   6334    26500   19169   2
// 41      18467   6334    26500   19169    
// 18467   6334    26500   19169
// 666     18467   6334    26500   1916

#include <iostream>
using std::cout, std::cin, std::endl;

void fillArr(int* const arr, const int size){   // заполнение случайными числами
    for(int i{}; i<size; i++)
        arr[i] = std::rand();
}

void printArr(const int *const arr, const int size){    // вывод массива
    for(int i{}; i<size; i++)
        cout << arr[i] << '\t';
    cout << endl;
}

void push_front(int *&arr, int &size, const int value){
    int *temp = new int[size+1];

    for(int i{}; i<size; i++){
        temp[i+1] = arr[i];
    }
    temp[0] = value;
    size++;

    delete [] arr;
    arr = temp;
}

void pop_front(int *&arr, int &size){
    if(size>0){
        size--;

        int *temp = new int[size];

        for(int i{}; i<size; i++){
            temp[i] = arr[i+1];
        }

        delete [] arr;
        arr = temp;
    }
}

void push_back(int *&arr, int &size, const int value){
    int *temp = new int[size+1];

    for(int i=0; i<size; i++){
        temp[i] = arr[i];
    }
    temp[size] = value;
    size += 1;

    delete [] arr;
    arr = temp;
}

void pop_back(int *&arr, int &size){
    size--;
    int *temp = new int[size];

    for(int i{}; i<size; i++){
        temp[i] = arr[i];
    }

    delete [] arr;
    arr = temp;
}

int main(int argc, char *argv[])
{
    int size{5};
    int *arr = new int[size];
    fillArr(arr, size);
    printArr(arr, size);

    push_back(arr, size, 2);
    printArr(arr, size);

    pop_back(arr, size);
    printArr(arr, size);

    pop_front(arr, size);
    printArr(arr, size);

    push_front(arr, size, 666);
    printArr(arr, size);

    delete [] arr;
    return 0;
}
