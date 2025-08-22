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

/*
1, 2, 3, 4, 5 , n = 2
1, 2, 3, 5

1, 2, 3, 4, 5
       |    |  
       first = 3
       second = 5


traverse to the nth node from the end
remove
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        for(int i = 0; i < n+1; i++)
        {
            fast = fast->next;
        }

        while(fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;

        delete nodeToDelete;



        return dummy->next;

    }
};