#include <bits/stdc++.h>
#include <array>
#include <vector>

using namespace std;

std::array<int, 2> twoMaxNumber(std::vector<int> numbers)
{
	  std::array<int, 2> results;
    sort(numbers.begin(), numbers.end());
    results[0] = numbers[numbers.size() - 2];
    results[1] = numbers[numbers.size() - 1];

    return results;
}

int main() {
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(13);
    numbers.push_back(19);
    numbers.push_back(5);
    std::array<int, 2> results = twoMaxNumber(numbers);
    for (int i = 0; i < results.size(); i++) {
        std::cout << results[i] << endl;
    }

    return 0;
}
