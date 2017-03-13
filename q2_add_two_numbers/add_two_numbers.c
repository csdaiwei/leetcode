/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* create_node(int v){

	struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
	p -> val = v;
	p -> next = NULL;
	return p;
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

	int carry = 0;
	int v1, v2, sum;

	struct ListNode *head = create_node(0);
	struct ListNode *p1, *p2, *p3;

	p1 = l1;
	p2 = l2;
	p3 = head;

	while(p1 || p2 || carry){

		v1 = p1 ? p1->val : 0;
		v2 = p2 ? p2->val : 0;
		sum = v1 + v2 + carry;

		//assert sum != 0

		p3 -> next = create_node(sum % 10);
		p3 = p3 -> next;

		carry = sum / 10;
		p1 = p1 ? p1->next : p1;
		p2 = p2 ? p2->next : p2;



	}

	return head->next;
    
}