#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;  // Declaring an empty vector of integers
    std::vector<int> v2(10, 5);  // Vector with 10 elements, each initialized to 5
}

v.push_back(10);  // Adds 10 to the end of the vector
v.push_back(20);  // Adds 20 to the end of the vector

std::cout << v[0] << std::endl;  // Access the first element
std::cout << v.at(1) << std::endl;  // Access the second element with bounds checking

std::cout << "Size of vector: " << v.size() << std::endl;
