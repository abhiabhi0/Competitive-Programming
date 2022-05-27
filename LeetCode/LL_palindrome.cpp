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
private:
    ListNode* reverse(ListNode* head)
    {
        ListNode* node = head;
        ListNode* prev = NULL;
        ListNode* nex = NULL;
        
        while (node != NULL)
        {
            nex = node->next;
            node->next = prev;
            prev = node;
            node = nex;
        }
        return prev;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverse(slow->next);
        slow = slow->next;
        ListNode* node = head;
        
        while (slow != NULL)
        {
            if (node->val != slow->val)
                return false;
            
            node = node->next;
            slow = slow->next;
        }
        return true;
    }
};
