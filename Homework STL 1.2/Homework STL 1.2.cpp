#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::set<int> unique_numbers;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        unique_numbers.insert(num);
    }

    std::vector<int> sorted_unique_numbers(unique_numbers.begin(), unique_numbers.end());

    std::sort(sorted_unique_numbers.rbegin(), sorted_unique_numbers.rend());

    for (int num : sorted_unique_numbers) {
        std::cout << num << std::endl;
    }

    return 0;
}
