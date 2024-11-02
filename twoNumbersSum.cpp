#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  vector<int> nums = {};
  for(int i = 0; i < array.size()-1; i++)
    {
      for (int j = i + 1; j < array.size(); j++)
        {
          if(array[i] + array[j] == targetSum)
          {
            nums.push_back(array[i]);
            nums.push_back(array[j]);
            return nums;
          }
        }
    }
  return nums;
}
