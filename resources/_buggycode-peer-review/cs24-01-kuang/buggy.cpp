// Insert a value into an ordered linked list
void insert(lnode*& curr, int val) {
  if (curr == NULL)
    curr = new lnode(val, NULL);
  else if (lnode->val > val)
    curr = new lnode(val, curr->next);
  else {
    curr = curr->next;
    insert(curr, val);
  }
}