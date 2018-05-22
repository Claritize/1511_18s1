struct node *merge_sorted(struct node *list1, struct node *list2) {
    if (list1 == NULL) {
        return list2;
    } else if (list2 == NULL) {
        return list1;
    } else if (list1->data < list2->data) {
        list1->next = merge_sorted(list1->next, list2);
        return list1;
    } else {
        list2->next = merge_sorted(list1, list2->next);
        return list2;
    }
}