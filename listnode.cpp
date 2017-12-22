#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};

ListNode * removeElements(ListNode* head,int val){
	ListNode * p = head;
	ListNode tmp = NULL;
	ListNode* pre = NULL;

	while(p){
		if(val == p->val){
			tmp = *p;
			if(p->next == NULL)
			  return NULL ;
			*p = *(p->next);
			tmp = NULL;
			//p->next = (p->next)->next;
			//p = p->next;
		}
		else if(val == p->next->val)
		{   
			if(p->next == NULL)
			  return NULL;
			pre = p;
			p->next = p->next->next;
			
			p = p->next;
							   
		}else
			pre = p;
			p = p->next;
	}
	return head;
}

int main(){
	ListNode* a = new ListNode(5);
//	ListNode* b = new ListNode(1);
	/*
	ListNode* c = new ListNode(2);
	ListNode* d = new ListNode(3);
	ListNode* e = new ListNode(3);
	ListNode* f = new ListNode(4);
	ListNode* g = new ListNode(3);
*/
//	a->next = b;
//	b->next = NULL;
/*
	b->next = c;
	c->next = d;
	d->next = e;
	d->next = f;
	f->next = g;
	g->next = NULL;
*/
	ListNode * aaa = removeElements(a,1);
	while(aaa->next != NULL)
	{
		cout << aaa->val << endl;
		aaa = aaa->next;
	}
	return 0;
}
