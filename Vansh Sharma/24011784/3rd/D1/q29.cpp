#include <iostream>
#include <vector>
void printVector(const std::vector<int>& v) {
    for (int element : v) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}
int main() {
    int n;
    std::cout << "Enter the number of integers (N): ";
    std::cin >> n;

    std::vector<int> vec;
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        vec.push_back(val);
    }
    std::cout << "Initial vector: ";
    printVector(vec);
    int pos;
    std::cout << "\n--- Query 1 ---" << std::endl;
    std::cout << "Enter position to erase (0-based index): ";
    std::cin >> pos;
    if (pos >= 0 && pos < vec.size()) {
        vec.erase(vec.begin() + pos);
    } else {
        std::cout << "Invalid position. No element erased." << std::endl;
    }
    std::cout << "Vector after query 1: ";
    printVector(vec);
    int start_pos, end_pos;
    std::cout << "\n--- Query 2 ---" << std::endl;
    std::cout << "Enter range to erase [start_pos, end_pos) (0-based, exclusive end): ";
    std::cin >> start_pos >> end_pos;
    if (start_pos >= 0 && end_pos <= vec.size() && start_pos < end_pos) {
        vec.erase(vec.begin() + start_pos, vec.begin() + end_pos);
    } else {
        std::cout << "Invalid range. No elements erased." << std::endl;
    }

    std::cout << "Vector after query 2: ";
    printVector(vec);
    std::cout << "\n--- Final Result ---" << std::endl;
    std::cout << "Final size of vector: " << vec.size() << std::endl;
    std::cout << "Final vector contents: ";
    printVector(vec);

    return 0;
}