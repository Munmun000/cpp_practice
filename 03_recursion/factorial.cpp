#include <iostream>

using std::cout, std::endl, std::string;

int fact(int a){
    if(a == 0)
        return 1;
    if(a > 1)
        return a * fact(a-1);
    return a;
}

int main(int argc, char *argv[]){
    cout << fact(0) << endl;
    cout << fact(1) << endl;
    cout << fact(9) << endl;
    return 0;
}
