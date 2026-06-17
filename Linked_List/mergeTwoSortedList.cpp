#include <iostream>
#include <node.h>
using namespace std;

node *mergeTwoSortedLL(node *a, node *b)
{
    node temp(0);
    node *ans = &temp;

    while (a != NULL && b != NULL)
    {
        if (a->val <= b->val)
        {
            ans->next = a;
            a = a->next;
        }
        else
        {
            ans->next = b;
            b = b->next;
        }

        ans = ans->next;
    }

    if (a != NULL)
    {
        ans->next = a;
    }
    else
    {
        ans->next = b;
    }

    return temp.next;
}

int main()
{
}