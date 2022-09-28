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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode *p = new ListNode();
	ListNode *q = new ListNode();

	p->next = q->next = head;

	while (n--)
		q = q->next;

	if (q->next == NULL) {
		head = head->next;
		p->next = NULL;

		return head;
	}

	while (q->next != NULL) {
		p = p->next;
		q = q->next;
	}

	ListNode* toBeRemoved = p->next;
	p->next = toBeRemoved->next;

	toBeRemoved->next = NULL;

	return head;
}
};