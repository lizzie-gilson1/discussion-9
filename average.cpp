#include <iostream>
#include <vector>

double average(const std::vector<int>& nums) {
    // function to find the average a vector of ints
    double* sum = new double(0.0);
    for (size_t i = 0; i <= nums.size(); i++) {
        *sum += nums[i];  
    }

    result = *sum / nums.size();
    return result; 
}

int main() {
    std::vector<int>* data = new std::vector<int>{1, 2, 3, 4, 5};
    delete data;
    data = nullptr;
    double avg = average(*data);
    std::cout << "Average: " << avg << std::endl;
    return 0;
}
