#include <iostream>
#include <vector>
using namespace std;

void printVector (vector<int> nums) {
    int size = nums.size();

    for(int i = 0; i < size; i++) {
        cout << nums[i] << endl;
    }
}

int main()
{
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    printVector(nums);

    // clearing the vector

    // nums.clear() 
    return 0;
}