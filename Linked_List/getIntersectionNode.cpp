#include <node.h>
#include <iostream>
#include <unordered_set>>
using namespace std;

node *getIntersectionNode(node *headA, node *headB)
{

    unordered_set<node *> seen;

    while (headA != NULL)
    {

        seen.insert(headA);

        headA = headA->next;
    }

    while (headB != NULL)
    {
        if (seen.find(headB) != seen.end())
        {
            return headB;
        }

        headB = headB->next;
    }

    return headB;
}

int main()
{
}