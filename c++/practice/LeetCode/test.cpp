#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     vector<int> newVec;
       for(int i = 0; i < nums1.size(); ++i) {
           newVec.push_back(nums1[i]);
       }
        for(int i = 0; i < nums2.size(); ++i) {
         newVec.push_back(nums2[i]);
     }

    double returnVal;
    std::sort (newVec.begin(), newVec.end());
    if(newVec.size() % 2 == 1) {
        // odd num, can return true center
        returnVal = newVec[ceil(newVec.size() / 2)];
    }
    else {
        float one = ceil(newVec.size()/2);
        float two = floor(newVec.size()/2);
        returnVal = ((newVec[one] + newVec[two]) / 2);
    }
    return returnVal;
    }
  };

  int main() {
    vector<int> vec1;
    vector<int> vec2;
    vec1.push_back(1);
    vec1.push_back(2);
    vec2.push_back(3);
    vec2.push_back(4);

    Solution::findMedianSortedArrays(vec1, vec2);


  }
