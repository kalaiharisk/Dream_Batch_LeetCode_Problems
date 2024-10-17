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
        if(!headA || !headB)
        {
            return nullptr;
        }
        int lena=getLength(headA);
        int lenb=getLength(headB);
        while(lena>lenb)
        {
            headA=headA->next;
            lena--;
        }
        while(lenb>lena)
        {
            headB=headB->next;
            lenb--;
        }
        while(headA && headB)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;


        
    }
    private:
    int getLength(ListNode *head)
    {
        int len=0;
        while(head)
        {
            len++;
            head=head->next;
        }
        return len;
    }

};