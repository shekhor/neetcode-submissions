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
    void reorderList(ListNode* head) {
        ListNode *fast = head, *slow = head, *cur, *prev, *temp, *fastTemp;

        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }


        cur = slow->next;
        slow->next = nullptr;

        prev = nullptr;

        while(cur != nullptr){
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }

        cur = head;
        fast = prev;


        while(cur != nullptr && fast != nullptr){
            temp = cur->next;

            cur->next = fast;

            fastTemp = fast->next;
            fast->next = temp;

            cur = temp;
            fast = fastTemp;

        }




    }
};
