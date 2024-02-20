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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l2==NULL){
            return l1;
        }
        if(l1==NULL){
            return l2;
        }
        ListNode* newList=NULL;
        if(l1->val<l2->val){
            newList = l1;
            newList->next = mergeTwoLists(l1->next,l2) ;
        }
        else
          {
              newList = l2;
              newList->next = mergeTwoLists(l1,l2->next);
          }
        
        
        return newList;
    }
};