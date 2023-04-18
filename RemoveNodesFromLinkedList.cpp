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
    ListNode* removeNodes(ListNode* head) {
        if (!head || !head->next) return head;
        stack<ListNode*> s;
        ListNode* t  = head;
        while(t) {
            s.push(t);
            t = t->next;
        }


        while (!s.empty()) {
            if (!t || s.top()->val >= t->val) {
                s.top()->next = t;
                t = s.top();
            }
            s.pop();
        }
        return t;
    }
};
