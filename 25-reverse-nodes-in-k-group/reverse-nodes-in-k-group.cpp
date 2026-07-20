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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cor=head;

        for(int i=0;i<k;i++){
            if(cor==nullptr) return head;
            cor=cor->next;
        }

        ListNode* cur=head;
        ListNode* prv=nullptr;
        ListNode* nxt=nullptr;

        for(int i=0;i<k;i++){
            nxt=cur->next;
            cur->next=prv;
            prv=cur;
            cur=nxt;
        }
        head->next=reverseKGroup(cur,k);
        return prv;
    }
};