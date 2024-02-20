class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        
        // Move fast pointer n nodes ahead of slow pointer
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }
        
        // Move both pointers simultaneously until fast reaches the end
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        
        // Remove the nth node from the end
        slow->next = slow->next->next;
        
        return dummy->next;
    }
};
