// file: cpp_sum.cpp
#include <iostream>
using namespace std;

// Intentional mistakes: 'o' undeclared, missing semicolon
int calculateSum(int arr[], int size) {
    int total = o;             // 'o' not declared
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total               // <- missing semicolon
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = calculateSum(numbers, size);
    cout << "Sum in C++: " << result << endl;
    return 0;
}
