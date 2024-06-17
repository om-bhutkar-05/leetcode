#include<stdlib.h>
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
 ListNode* addTwoNumbersHelper(ListNode* l1, ListNode* l2,int carry) {
      int sum=carry;
      if(!l1 && !l2 && carry==0){
            return NULL;
      }
      if(l1){
        sum+=l1->val;
        l1=l1->next;
      }
      if(l2){
        sum+=l2->val;
          l2=l2->next;
      }
      carry=sum/10;
      sum=sum%10;
     ListNode * res=new ListNode(sum);
     res->next=addTwoNumbersHelper(l1,l2,carry);
     return res;

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     return addTwoNumbersHelper(l1,l2,0);
    }
};