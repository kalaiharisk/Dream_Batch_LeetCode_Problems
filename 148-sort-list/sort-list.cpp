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
    ListNode* sortList(ListNode* head) {
        list<int> result;
    while (head) {
        result.push_back(head->val); // Add the value to std::list
        head = head->next;           // Move to the next node
    }
    result.sort();
            ListNode* sortedHead = nullptr;
        ListNode* tail = nullptr;

        for (const int& val : result) {
            ListNode* newNode = new ListNode(val);
            if (!sortedHead) {
                sortedHead = newNode; // Set head if it's the first node
                tail = sortedHead;
            } else {
                tail->next = newNode; // Link the new node
                tail = tail->next;    // Move the tail pointer
            }
        }

        return sortedHead;
    
        
    }
};