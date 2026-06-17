#include <iostream>
#include <node.h>
using namespace std;

 node* removeNthFromEnd(node* head, int n) {

        node temp(0);
        temp.next = head;

        node* slow = &temp;
        node* fast = &temp;

        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        while (fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return temp.next;
    }



int main() {
    
    return 0;
}