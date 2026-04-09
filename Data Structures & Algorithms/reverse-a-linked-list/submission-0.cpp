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
    ListNode* reverseList(ListNode* head) {
        ListNode*h1=head;
        ListNode*prev=NULL;
        ListNode*next_item=head;
        while(h1!=NULL){
            next_item=h1->next;
            h1->next=prev;
            prev=h1;
            h1=next_item;
        }
        return prev;
    }
};
