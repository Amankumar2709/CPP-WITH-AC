#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1); // Initialize the result array with 1s.

    // Compute prefix product for each element.
    int prefix = 1;
    for (int i = 0; i < n; ++i) {
        result[i] = prefix; // Set the prefix product.
        prefix *= nums[i];  // Update prefix.
    }

    // Compute suffix product and multiply with prefix product in result.
    int suffix = 1;  
    for (int i = n - 1; i >= 0; --i) {
        result[i] *= suffix; // Multiply with the suffix product.
        suffix *= nums[i];   // Update suffix.
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Product of array except self: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
