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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=l1;
        ListNode* temp1=l2;
        ListNode* dummyhead= new ListNode(-1);
        ListNode* curr=dummyhead;
        int carry=0;
        while(temp!=NULL || temp1!=NULL){
            int sum = carry;
            if(temp!= NULL) sum+=temp->val;
            if(temp1!=NULL) sum+=temp1->val;

            ListNode* newnode = new ListNode(sum%10);
            carry = sum/10;
            curr->next = newnode;
            curr = curr->next;
            if(temp) temp = temp->next;
            if(temp1) temp1=temp1->next;
        }
        if(carry != 0){
            ListNode* newnode = new ListNode(carry);
            curr->next = newnode;
        }
        return dummyhead->next;
    }
};