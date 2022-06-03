/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> node_map;
        if (head == NULL)
        {
            return NULL;
        }
        
        Node* curr = head->next;
        Node* new_head = new Node(head->val);
        
        node_map.insert({head, new_head});
        Node* prev = new_head;
        
        while (curr != NULL)
        {
            Node* node = new Node(curr->val);
            node_map.insert({curr, node});
            
            prev->next = node;
            prev = node;
            
            curr = curr->next;
        }
        curr = head;
        Node* node = new_head;
        
        while (node != NULL)
        {
            node->random = node_map[curr->random];
            curr = curr->next;
            node = node->next;
        }
        return new_head;
    }
};
