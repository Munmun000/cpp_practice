// Базовые операции работы с двумерным динамическим массивом: создание, заполнение, обращение, освобождение
// Пример вывода:
// Enter row: 4
// 1       7       14
// 0       9       4 
// 18      18      2 
// 4       5       5 

#include <iostream>
using std::cout, std::cin, std::endl;

int main(int argc, char *argv[])
{
    int column{}, row{};
    cout << "Enter row: ";                  // получение данных о размере
    cin >> row;
    cout << "Enter column: ";
    cin >> column;

    int **arr = new int*[row];              // создание

    for(int i{}; i<row; i++){
        arr[i] = new int[column];
    }

    for(int i{}; i<row; i++){               // заполнение
        for(int k{}; k<column; k++){
            arr[i][k] = std::rand()%20;
        }
    }

    for(int i{}; i<row; i++){               // вывод
        cout << endl;
        for(int k{}; k<column; k++){
            cout << arr[i][k] << "\t";
        }
    }

    for(int i{}; i<row; i++){               // освобождение памяти
        delete [] arr[i];
    }

    delete [] arr;
    return 0;
}
