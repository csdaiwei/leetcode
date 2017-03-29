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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		
		ListNode *p1, *p2, *ph;
		ListNode *head = new ListNode(0);

		p1 = l1;
		p2 = l2;
		ph = head;

		while(p1 && p2){

			if (p1 -> val < p2 -> val){
				ph -> next = p1;
				p1 = p1 -> next;
			}
			else {
				ph -> next = p2;
				p2 = p2 -> next;

			}

			ph = ph -> next;

		}

		ph -> next = p1 ? p1 : p2;

		return head->next;

	}

};