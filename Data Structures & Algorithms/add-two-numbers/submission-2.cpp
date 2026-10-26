/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num = 1;

        int val = 0, val2 = 0, temp = 0, total;

        ListNode *cur, *prev, *root;

        while(l1 != nullptr || l2 != nullptr){
            
            if(l1 != nullptr && l2 != nullptr){
                val = l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            }else if(l1 != nullptr){
                val = l1->val;
                l1 = l1->next;
            }else{
                val = l2->val;
                l2 = l2->next;
            }

            val = val + temp;
            
            temp = val / 10;
            val = val % 10;
            cur = new ListNode(val);
            
            if(prev == nullptr){
                root = cur;
            } else{
                prev->next = cur;
            }

            prev = cur;
        }

        if(temp != 0){
            cur = new ListNode(temp);
            prev->next = cur;
        }
        return root;
    }
};
