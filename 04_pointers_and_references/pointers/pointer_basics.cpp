#include <iostream>

using std::cout, std::cin, std::endl, std::string;

void printArr(const int *arr, int size){
    for(int i{}; i<size; i++){
        cout << arr[i] << endl;
    }
}

int main(int argc, char *argv[]){
    int size{};

    while(size < 1){
        cout << "Enter the size of array: ";    // запрашиваем размер массива
        cin >> size;
    }
    int *arr = new int[size];

    for(int i{}; i<size; i++){  // заполнение массива числами от 1 до size
        arr[i] = i+1;
    }

    printArr(arr, size);        // вывод массива

    delete [] arr;
    return 0;
}
