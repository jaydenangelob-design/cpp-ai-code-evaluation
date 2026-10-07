#include <iostream>
#include <vector>
#include <stdexcept>

int findLargest(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        throw std::invalid_argument("Input vector cannot be empty.");
    }

    int largest = numbers[0];

    for (std::size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    return largest;
}

int main() {
    std::vector<int> numbers = {-8, -3, -12};

    try {
        std::cout << "Largest value: "
                  << findLargest(numbers)
                  << '\n';
    } catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << '\n';
        return 1;
    }

    return 0;
}
