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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans = {-1,-1};
        ListNode* p = head;
        ListNode* c = head->next;
        ListNode* n = head->next->next;
        int idx = 1,fidx = -1,sidx = -1,mini = INT_MAX,maxi = INT_MIN;
        while(n){
            if((c->val > p->val && c->val > n->val) || (c->val < p->val && c->val < n->val)){
                if(sidx == -1) sidx = idx;
                if(fidx == -1) fidx = idx;
                else{
                    mini = min(mini,idx-sidx);
                    maxi = max(maxi,idx-fidx);
                }
                sidx = idx;
            }
            idx++;
            n = n->next;
            c = c->next;
            p = p->next;
        }
        if(mini != INT_MAX) ans[0] = mini;
        if(maxi != INT_MIN) ans[1] = maxi;
        return ans;
    }
};