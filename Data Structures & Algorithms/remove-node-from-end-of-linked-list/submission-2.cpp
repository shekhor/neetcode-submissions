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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *cur, *prev, *temp, *tempHead;
        
        prev = nullptr;

        cur = head;

        while(cur != nullptr){
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }

        cur = prev;
        prev = nullptr;

        while(cur != nullptr){

            if(n == 1){
                cur = cur->next;
                n--;
                continue;
            }
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
            n--;
        }

        return prev;
    }
};
