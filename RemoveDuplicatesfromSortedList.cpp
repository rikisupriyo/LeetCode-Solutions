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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode *p, *q, *x;
        p = head;
        if (p->next == NULL) {return head;}
        q = p->next;
        while(q != nullptr){
            if(q->val == p->val){
                p->next = q->next;
                x = q;
                q = p->next;
            }
            else{
                p = p->next;
                q = q->next;
            }
        }
        return head;
    }
};
