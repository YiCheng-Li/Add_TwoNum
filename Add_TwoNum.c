/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    // 先建立第一個節點
    struct ListNode* ret_head =
    
    struct ListNode* ptr1 = l1;
    struct ListNode* ptr2 = l2;
    int carry = 0;

    while (ptr1 != NULL || ptr2 != NULL || carry != 0) {
        int sum = carry;

        if (ptr1 != NULL) {
            sum += ptr1->val;
            ptr1 = ptr1->next;
        }

        if (ptr2 != NULL) {
            sum += ptr2->val;
            ptr2 = ptr2->next;
        }

        ret_ptr->val = sum % 10;
        carry = sum / 10;

        // 判斷是否還需要下一個節點
        if (ptr1 != NULL || ptr2 != NULL || carry != 0) {
            ret_ptr->next =
                (struct ListNode*)malloc(sizeof(struct ListNode));
            ret_ptr = ret_ptr->next;
        } else {
            ret_ptr->next = NULL;
        }
    }

    return ret_head;
}