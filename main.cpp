#include <iostream>
#include "LibDS/StaticArray.h"
#include "LibDS/StaticArray.cpp"
#include <vector>
#include <string>
#include <math.h>
#define dbg std::cout << "DEBUG: " << std::endl

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
    for(auto itr : v) {
        std::cout << "StaticArray - Size: "  << itr->get_size() << std::endl;
        if (itr->get_size() != count) {
            passed = false;
            message = "Static Array get_size() test case --- FAILED";
            return;
        }
        count++;
    }

    std::cout << "\n=== Testing Static Array's insert_at_end() function ===" << std::endl;

    for(auto itr : v) {
        int element_was_inserted = itr->insert_at_end(floor(random() % 100) - 1);
        if(!element_was_inserted) {
            passed = false;
            message = "Element insert was not successful on StaticArray insert_at_end() test. --- FAILED";
        }

        std::cout << "StaticArray - Element was inserted ? - " <<  (element_was_inserted ? "True" : "False") << std::endl;
    }

    if (passed) {
        std::cout << "StaticArray Test Cases --- PASSED" << std::endl;
    }
    else {
        std::cout << message << std::endl;
    }
}

int main() {
//    test_static_array(5);

    LibDS::StaticArray<int> arr(10);
    arr.insert_at_end(3);
    arr.insert_at_end(3);
    arr.insert_at_end(3);
    arr.insert_at_end(3);

    arr.insert_at_index(10, 0);
    std::cout << "First element: " << arr.get_elements()[0] << std::endl;
    for(int i = 0; i < arr.get_size(); i++) {
        std::cout << arr.get_elements()[i] << std::endl;
    }
    return 0;
}
