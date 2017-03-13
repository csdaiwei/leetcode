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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    	int carry = 0;
    	int v1, v2, sum;
    	ListNode *p1, *p2, *p3;
    	ListNode *head = new ListNode(0);
    	
    	p1 = l1;
    	p2 = l2;
    	p3 = head;

    	while(p1 || p2 || carry){

    		v1 = v2 = 0;
    		if (p1){
    			v1 = p1 -> val;
    			p1 = p1 -> next;
    		}

    		if (p2){
    			v2 = p2 -> val;
    			p2 = p2 -> next;
    		}

    		sum = v1 + v2 + carry;
    		carry = sum / 10;

    		p3 -> next = new ListNode(sum % 10);
    		p3 = p3 -> next;


    	}

    	return head -> next;

    }
};