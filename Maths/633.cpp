#include<cmath>
class Solution {
public:
    bool judgeSquareSum(int c) {
        int start=0;
        int end = static_cast<int>(sqrt(c));
        while(start<=end){
            
            if(pow(start,2)+pow(end,2)==c){
                return true;
            }
            if(pow(start,2)+pow(end,2)<c){
              start++;
            }
            else{
                end--;
            }
        }
        return false;
    }
};