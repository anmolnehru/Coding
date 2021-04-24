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
typedef ListNode node;
class Solution {
public:
    node* gmid;
    bool even = false;
    
    bool recurCheck(node* head) {
        
        if (even && head->next == gmid) {
            cout << "here even" <<endl;
            if (head->val != gmid->val)
                return false;
            gmid = gmid->next;
            return true;
        } else if (!even && head == gmid) {
            cout << "here odd" <<endl; 
            gmid = gmid->next;
            return true;
        }
        
        if (!recurCheck(head->next))
            return false;
        if (head->val != gmid->val)
            return false;
        
        gmid=gmid->next;
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        node* slow = head;
        node* fast = head;
        int count = 0;
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            count+=2;
        }
        
        if(fast)
            count++;

        if (count%2==0)
            even = true;
        gmid = slow;
        
        if (recurCheck(head))
            return true;
        else
            return false;
    }
};