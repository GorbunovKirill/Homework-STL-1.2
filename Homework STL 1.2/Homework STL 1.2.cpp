#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    std::cout << "[IN]:\n";
    int n;
    std::cin >> n;

    std::set<int> unique_numbers;

 
    std::copy_n(std::istream_iterator<int>(std::cin), n, std::inserter(unique_numbers, unique_numbers.end()));


    std::vector<int> sorted_unique_numbers(unique_numbers.begin(), unique_numbers.end());

    std::sort(sorted_unique_numbers.rbegin(), sorted_unique_numbers.rend());

    std::cout << "[OUT]:\n";
    std::for_each(sorted_unique_numbers.begin(), sorted_unique_numbers.end(), [](int num) {
        std::cout << num << std::endl;
        });

    return 0;
}
