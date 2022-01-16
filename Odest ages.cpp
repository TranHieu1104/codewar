#include <bits/stdc++.h>
#include <array>
#include <vector>

using namespace std;

std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
    std::array<int, 2> results;
    sort(ages.begin(), ages.end());
    results[0] = ages[ages.size() - 2];
    results[1] = ages[ages.size() - 1];

    return results;
}
	
int main() {
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(13);
    numbers.push_back(19);
    numbers.push_back(5);
    std::array<int, 2> results = two_oldest_ages(numbers);
    for (int i = 0; i < results.size(); i++) {
        std::cout << results[i] << endl;
    }

    return 0;
}
