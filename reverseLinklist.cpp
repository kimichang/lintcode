#include <iostream>
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}
};




ListNode* reverse(ListNode* head){

	ListNode * pNext = NULL;
	ListNode *pPre = NULL;
	pNext = head->next;
	pPre = head;
	while(pNext != NULL)
	{	// create the chain
		pNext = pNext->next;
	//
	//
				
	    

		if(pPre == head)
		  pPre->next = NULL;
		else
		{
			pPre->next = *pPre;
			pPre->next = pPre;
		
		}


		pNext = tmp->next;		

		pNext->next = pPre;

		pNext = pNext->next;

	}




}

