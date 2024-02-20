class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* first = head;
        int length = 0;
        while (first != nullptr) {
            length++;
            first = first->next;
        }
        length -= n;
        first = dummy;
        while (length > 0) {
            length--;
            first = first->next;
        }
        first->next = first->next->next;
        return dummy->next;
    }
};
