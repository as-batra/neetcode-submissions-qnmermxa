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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;ListNode*head2=list2;
        ListNode*head3=new ListNode(-1);
        ListNode*ans=head3;
        while(head1!=NULL && head2!=NULL){
            if(head1->val>head2->val){
                head3->next=new ListNode(head2->val);
                head2=head2->next;
            }
            else{
                head3->next=new ListNode(head1->val);
                head1=head1->next;
            }
            head3=head3->next;
        }
        if(head1!=NULL){
            head3->next=head1;
        }
        else{head3->next=head2;}
        return ans->next; 
    }

};
