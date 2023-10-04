#include <iostream>
#include <fstream>
#include <typeinfo>

using namespace std;

int main(int argc, char *argv[]){
    cout << typeid(argv[1]).name() << endl;
    cout << argv[2] << endl;
    cout << argv[1][0] <<endl;
    cout << sizeof(argv[1]) << endl;
    cout << sizeof(argv[1][0]) << endl;
    cout << sizeof(argv[1][1]) << endl;
    cout << sizeof(char) << endl;
     
    return 0;
}