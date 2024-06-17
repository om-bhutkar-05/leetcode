#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int start =0;
        int end= nums.size()-1;
        while(start<=end){
            int mid = ( start + end )/2;
            if(nums[mid]==target){
                  int i=mid;
                  int j=mid;
                    while (i - 1 >= 0 && nums[i - 1] == target) {
                    i--;
                }
                
                while (j + 1 < nums.size() && nums[j + 1] == target) {
                    j++;
                }
                
                  result.push_back(i);
                  result.push_back(j);
                  return result;
            }
            if(target>=nums[mid]){
            start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    return {-1,-1};
    }
};