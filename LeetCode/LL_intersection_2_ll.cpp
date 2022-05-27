/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> nodes_set;
        
        ListNode* node = headA;
        
        while (node != NULL)
        {
            nodes_set.insert(node);
            node = node->next;
        }
        
        node = headB;
        
        while (node != NULL)
        {
            if (nodes_set.find(node) != nodes_set.end())
            {
                return node;
            }
            node = node->next;
        }
        return NULL;
    }
};

//Optimised solution via - 
// https://leetcode.com/problems/intersection-of-two-linked-lists/discuss/49789/My-accepted-simple-and-shortest-C%2B%2B-code-with-comments-explaining-the-algorithm.-Any-comments-or-improvements

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    ListNode *p1 = headA;
    ListNode *p2 = headB;
        
    if (p1 == NULL || p2 == NULL) return NULL;

    while (p1 != NULL && p2 != NULL && p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;

        //
        // Any time they collide or reach end together without colliding 
        // then return any one of the pointers.
        //
        if (p1 == p2) return p1;

        //
        // If one of them reaches the end earlier then reuse it 
        // by moving it to the beginning of other list.
        // Once both of them go through reassigning, 
        // they will be equidistant from the collision point.
        //
        if (p1 == NULL) p1 = headB;
        if (p2 == NULL) p2 = headA;
    }
        
    return p1;
}
