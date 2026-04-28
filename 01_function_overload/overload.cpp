#include <iostream>

using std::cout, std::endl, std::string;

void sum(int a, int b){
    cout << a + b << endl;
}

void sum(double a, double b){
    cout << a  + b << endl;
}
void sum(string a, string b){
    cout << a + b << endl;
}

int main(int argc, char *argv[]){
    sum(2, 3);
    sum(2.25, 5.0);
    sum("sun", "rise");
    return 0;
}
