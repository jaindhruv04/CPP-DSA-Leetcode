#include <iostream>
#include <node.h>
using namespace std;

node *oddEvenLL(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *odd = head;
    node *even = head->next;
    node *evenHead = even;

    while (even != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

    return head;
}


int main()
{

    return 0;
}