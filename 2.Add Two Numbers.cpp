/**
 * You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes      contain a single digit. Add the two numbers and return it as a linked list.

 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 */



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
        int carry=0;
        ListNode*result=nullptr;
        ListNode* pre=nullptr;
        ListNode* cur=nullptr;
        int sum=0;
        while(l1 != nullptr || l2 != nullptr){
        	sum= 0;
        	if(l1){
        		sum+=l1->val;
        		l1=l1->next;
        	}
        	if(l2){
        		sum+=l2->val;
        		l2=l2->next;
			}
            cur=new ListNode((carry+sum)%10);
            if( ! result)
            	result=cur;
            if(pre)
            	pre->next=cur;
            pre=cur;
            carry=(carry+sum)/10;
        }
        if(carry)
            pre->next=new ListNode(carry);
        return result;
    }
};
