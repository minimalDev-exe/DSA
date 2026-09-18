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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>temp;
        ListNode* ptr = head;
        while(ptr){
            temp.push_back(ptr->val);
            ptr = ptr->next;
        }
        swap(temp[k-1] , temp[temp.size()-k]);
        ptr = head;
        int i =0;
        while(ptr && i<temp.size()){
            ptr->val = temp[i];
            ptr = ptr->next;
            i++;
        }
        return head;
    }
};