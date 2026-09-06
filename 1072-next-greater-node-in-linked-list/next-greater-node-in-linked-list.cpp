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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>vec;
        ListNode* temp = head;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        vector<int>ans(vec.size(),0);
        stack<int>st;
        for(int i=vec.size()-1; i>=0; i--){
            while(st.size()>0 && st.top()<=vec[i]){
                st.pop();
            }
            if(st.size()==0){
                ans[i] = 0;
            }
            else{
                ans[i] = st.top();
            }
            st.push(vec[i]);
        }
        return ans;
    }
};