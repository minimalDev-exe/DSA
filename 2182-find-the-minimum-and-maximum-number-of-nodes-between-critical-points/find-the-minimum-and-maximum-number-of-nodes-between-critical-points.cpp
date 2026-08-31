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
    vector<int> nodesBetweenCriticalPoints(ListNode* head){
        if(head==NULL || head->next==NULL || head->next->next==NULL) return {-1,-1};
        vector<int>pts;
        ListNode* prev = head;
        ListNode* temp = head->next;
        int node = 1;
        while(temp->next!=NULL){
            if((temp->val > prev->val && temp->val > temp->next->val) || (temp->val < prev->val && temp->val < temp->next->val)){
                pts.push_back(node);
            }
            node++;
            temp = temp->next;
            prev = prev->next;
        }
        if(pts.size()<2){
            return {-1,-1};
        }
        else{
            int max_dist = pts[pts.size()-1] - pts[0];
            int min_dist = INT_MAX;
            for(int i=0; i<pts.size()-1; i++){
                min_dist = min(min_dist , abs(pts[i]-pts[i+1]));
            }
            return {min_dist , max_dist};
        }
        
    }
};