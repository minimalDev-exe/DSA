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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head;
        if(!head->next) return head;
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* ptr = head;
        ListNode* prev = dummy;
        while(ptr && ptr->next){
            prev->next = ptr->next;
            ptr->next = prev->next->next;
            prev->next->next = ptr;

            prev = ptr;
            ptr = ptr->next;
        }
        return dummy->next;
    }
};