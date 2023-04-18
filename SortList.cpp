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
    ListNode* sortList(ListNode* head) {
        if (!head) return head;
        vector<int> v;
        while (head) {
            v.push_back(head->val);
            head = head->next;
        }
        sort(v.begin(), v.end());

        ListNode* neoHead = new ListNode();
        neoHead->val = v[0];
        ListNode* prev = new ListNode();
        prev = neoHead;
        for (int i=1; i<v.size(); i++) {
            ListNode* temp = new ListNode();
            temp->val = v[i];
            prev->next = temp;
            prev = temp;
        }
        return neoHead;
    }
};