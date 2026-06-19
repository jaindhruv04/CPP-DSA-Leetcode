#include <iostream>
#include <node.h>
using namespace std;

node *deleteDuplicates(node *head)
{
    node *dummy = head;

    while (dummy != NULL && dummy->next != NULL)
    {

        if (dummy->val == dummy->next->val)
        {
            dummy->next = dummy->next->next;
        }
        else
        {
            dummy = dummy->next;
        }
    }

    return head;
}

int main()
{

    return 0;
}