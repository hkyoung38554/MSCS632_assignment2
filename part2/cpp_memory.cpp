// file: cpp_memory.cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    int* raw = new int[1000000];
    raw[0] = 7;
    delete[] raw;

    auto arr = make_unique<int[]>(1000000);
    arr[0] = 42;
    cout << "ok" << endl;
}
