#include <iostream>
#include <vector>

double average(const std::vector<int>& nums) {
    double sum;
    for (size_t i = 0; i <= nums.size(); ++i) {
        sum += nums[i];
    }
    return sum / nums.size();
}

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    double avg = average(data);
    std::cout << "Average: " << avg << std::endl;
    return 0;
}
