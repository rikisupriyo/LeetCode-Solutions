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
        if (!head || !head->next) return head;

        ListNode* Dn = new ListNode();
        ListNode* prev = Dn;
        ListNode* nxt = head;
        
        while (nxt && nxt->next) {
            prev->next = nxt->next;
            nxt->next = prev->next->next;
            prev->next->next = nxt;

            prev = nxt;
            nxt = prev->next;
        }
        head = Dn->next;
        delete Dn;
        return head;
    }
};
