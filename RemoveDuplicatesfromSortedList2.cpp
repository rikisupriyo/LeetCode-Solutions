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
        if (!head) return head;
        map<int, int> m;
        while(head) {
            m[head->val]++;
            head = head->next;
        }
        
        ListNode* neoHead = new ListNode();
        ListNode* prev = neoHead;

        for(auto i:m) {
            if (i.second == 1) {
                ListNode* temp = new ListNode(i.first);
                prev->next = temp;
                prev = temp;
            } 
        }
        return neoHead->next;
    }
};
