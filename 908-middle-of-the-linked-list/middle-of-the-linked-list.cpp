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
    ListNode* middleNode(ListNode* head) {
        ListNode*  temp = head;
        ListNode*  temp1 = head;
        int count=0;
        while(temp!=NULL && temp->next!=nullptr){
            temp1=temp1->next;
            temp=temp->next->next;
        }
        // temp=head;
        // for (int i = 0; i < count / 2; i++) {
        //     temp = temp->next;
        // }
        return temp1 ;
    }
};