#include <iostream>
#include "LibDS/StaticArray.h"
#include "LibDS/StaticArray.cpp"
#include <vector>
#include <string>

void test_static_array(int test_case_count) {
    bool passed = true;
    std::string message;

    std::cout << "=== Testing Static Array ===" << std::endl;
    std::vector<LibDS::StaticArray<int> * > v;

    for(unsigned int i = 1; i <= test_case_count; i++) {
        v.push_back(new LibDS::StaticArray<int>(i));
    }

    std::cout << "=== Testing Static Array's get_size() function ===" << std::endl;

    unsigned int count = 1;
    for(auto & itr : v) {
        std::cout << "StaticArray - Size: "  << itr->get_size() << std::endl;
        if (itr->get_size() != count) {
            passed = false;
            message = "Static Array get_size() test case --- FAILED";
            return;
        }
        count++;
    }

    if (passed) {
        std::cout << "StaticArray test cases --- PASSED" << std::endl;
    }
    else {
        std::cout << message << std::endl;
    }
}

int main() {
     test_static_array(5);

    return 0;
}
