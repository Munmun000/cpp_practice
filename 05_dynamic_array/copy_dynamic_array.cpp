// Создание копии линамического массива
/*
Пример вывода:
Enter size for a first array: 6
Enter size for a second array: 5
First array:    41      18467   6334    26500   19169   15724
Second array:   11478   29358   26962   24464   5705
After coping ****************************************        
First array:    41      18467   6334    26500   19169   15724
Second array:   41      18467   6334    26500   19169   15724
0x32a7bff818
0x32a7bff810
*/
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

int main(int argc, char *argv[])
{
    int sizeF{}, sizeS{};
    cout << "Enter size for a first array: ";
    cin >> sizeF;
    cout << "Enter size for a second array: ";
    cin >> sizeS;

    int *firstArr = new int[sizeF];      // создание первого массива
    int *secondArr = new int[sizeS];     // создание массива для копирования

    fillArr(firstArr, sizeF);
    fillArr(secondArr, sizeS);

    cout << "First array:\t";
    printArr(firstArr, sizeF);
    cout << "Second array:\t";
    printArr(secondArr, sizeS);

    delete [] secondArr;                // копирование первого массива во второй
    secondArr = new int[sizeF];
    for(int i{}; i<sizeF; i++){
        secondArr[i] = firstArr[i];
    }

    cout << "After coping ****************************************" << endl;
    cout << "First array:\t";
    printArr(firstArr, sizeF);
    cout << "Second array:\t";
    printArr(secondArr, sizeF);

    cout << &firstArr << endl;  // проверка адресов
    cout << &secondArr << endl;

    delete [] firstArr;
    delete [] secondArr;

    return 0;
}
