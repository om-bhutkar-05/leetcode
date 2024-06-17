#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i;
        }
         vector<int> result;
         for(int i=0;i<nums.size();i++){
            auto end=m.find(target-nums[i]);
            if(end!=m.end() && end->second!=i){
               result.push_back(i);
               result.push_back(end->second);
               break;
            }
        }
        return result;
    }
};