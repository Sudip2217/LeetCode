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

    ListNode* replaceBySumNode(ListNode* zeroNode) {
        int sum = 0;
        ListNode* curr = zeroNode->next;
        if(curr == nullptr) {
            return nullptr;
        }
        while(curr != nullptr && curr->val != 0) {
            sum += curr->val;
            curr = curr->next;
        }
        ListNode *newNode = new ListNode(sum, curr);
        zeroNode->next = newNode;
        return curr;
    }
    
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = head;
        while(curr != nullptr) {
            if(curr->val == 0) {
                curr = replaceBySumNode(curr);
            }
        }
        
        ListNode* itr = head->next;
        while(itr != nullptr) {
            if(itr->next != nullptr && itr->next->val == 0) {
                itr->next = itr->next->next;
            }
            itr = itr->next;
        }
        return head->next;
    }
};