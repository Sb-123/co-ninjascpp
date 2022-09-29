Node *reverseLL(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *newhead = reverseLL(head->next);
    Node *headNxt = head->next;
    headNxt->next = head;
    head->next = NULL;

    return newhead;
}