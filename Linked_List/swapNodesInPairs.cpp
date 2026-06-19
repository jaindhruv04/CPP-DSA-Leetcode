#include <iostream>
#include <node.h>
using namespace std;

// https://leetcode.com/problems/swap-nodes-in-pairs/

node *swapInPairs(node *head)
{
    node temp(0);
    temp.next = head;

    node *dummy = &temp;

    while (dummy->next != NULL && dummy->next->next != NULL)
    {

        // Create Temperory Variables
        node *head2 = dummy->next;
        node *temp2 = dummy->next->next;


        // Swap 
        head2->next = temp2->next;
        temp2->next = head2;
        dummy->next = temp2;

        //Change Dummy to next iteration
        dummy = head2;
    }

    return temp.next;
}

int main()
{

    return 0;
}