#include<iostream>
#include"LinkedList"
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v = {1, 2, 3, 4};
    // ListNode *n1 = (new ListNode)->arrayToLinkedList(arr, 5);
    // ListNode *n2 = (new ListNode)->vectorToLinkedList(v);
    ListNode<int> *n1 = ListNode<int>::arrayToLinkedList(arr, 5); // static function calling, function should be declared as static
    ListNode<int> *n2 = ListNode<int>::vectorToLinkedList(v); // static function calling, function should be declared as static
    n1->printList();
    cout << endl;
    n1->deleteAtEnd();
    n1->printList();
    cout << endl;
    n1->insertAtEnd(6);
    n1->printList();
    cout << endl;
    n1 = n1->insertAtBeginning(6);
    n1->printList();
    cout << endl;
    n1->insertAtEnd(10);
    cout << n1->val;
    cout << endl;
    n1->printList();
    cout << endl;
    n1->insertAfterNode(n1->next->next->next, 11);
    n1->printList();
    cout << endl;
    n1->reverse();
    n1->printList();

}