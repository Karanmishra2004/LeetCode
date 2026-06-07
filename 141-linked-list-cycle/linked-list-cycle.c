/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* slow = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* fast = (struct ListNode*)malloc(sizeof(struct ListNode));

    temp =head;
    slow = temp;
    fast = temp;

    while(slow&& fast && fast->next != NULL)
    {
        slow = slow->next;
        fast =  fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;

}