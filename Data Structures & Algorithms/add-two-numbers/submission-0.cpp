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

        int val1 = 0, val2 = 0, temp, total;

        while(l1 != nullptr){
            val1 = val1 + (l1-> val * num);

            l1 = l1->next;
            num = num * 10;
        }

        num = 1;
        while(l2 != nullptr){
            val2 = val2 + (l2-> val * num);

            l2 = l2->next;
            num = num * 10;
        }

        total = val1 + val2;
        ListNode *cur, *prev = nullptr, *root;

        while(total != 0){
            temp = total % 10;
            total = total / 10;

            cur = new ListNode();

            cur->val = temp;
            if(prev == nullptr){
                root = cur;
            }else{
                prev->next = cur;
            }
            prev = cur;
            
        }

        return root;
    }
};
