// file: cpp_closure.cpp
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int main() {
    vector<int> ks{0,1,2};
    vector<function<int(int)>> adders;

    for (int k : ks) {
        auto add_val = [k](int x){ return x + k; };
        adders.push_back(add_val);
    }
    cout << adders[0](10) << " " << adders[1](10) << " " << adders[2](10) << endl;
}
