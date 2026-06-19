#include <node.h>
#include <iostream>
using namespace std;


//https://leetcode.com/problems/remove-linked-list-elements/?utm_source=chatgpt.com

class Solution
{
public:
    node *removeElements(node *head, int val)
    {

        node temp(0);
        temp.next = head;

        node *dummy = &temp;

        while (dummy != NULL && dummy->next != NULL)
        {

            if (dummy->next->val == val)
            {
                dummy->next = dummy->next->next;
            }

            else
            {
                dummy = dummy->next;
            }
        }

        return temp.next;
    }
};
