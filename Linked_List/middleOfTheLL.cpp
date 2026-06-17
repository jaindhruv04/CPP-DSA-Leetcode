#include <iostream>
#include <node.h>
using namespace std;

    node* middleNode(node* head) {

        node* slow = head;
        node* fast = head;

        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }






int main() {
    
    return 0;
}