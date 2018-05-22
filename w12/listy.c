#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *next;
    int          data;
};

struct node *list_append(struct node *list1, struct node *list2);
struct node *strings_to_list(int len, char *strings[]);
struct node *merge_sorted(struct node *list1, struct node *list2);

int main(int argc, char *argv[]) {

    return 0;
}

struct node *list_append(struct node *list1, struct node *list2) {

    struct node *curr = list1;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = list2;
    return list1;
}

struct node *strings_to_list(int len, char *strings[]) {

     struct node *head;
     struct node *curr;
     struct node *next;

     int i = 1;

    curr = malloc(sizeof(struct node));
    curr->data = atoi(strings[0]);
    curr->next = NULL;
    head = curr;

    while (i < len) {
        next = malloc(sizeof(struct node));
        next->data = atoi(strings[i]);
        next->next = NULL;

        curr->next = next;
        curr = next;
        i++;
    }

    return head;
}

struct node *merge_sorted(struct node *list1, struct node *list2) {

    struct node *head;

    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    if (list1->data < list2->data) {
        head = list1;
        list1 = list1->next;
    } else {
        head = list2;
        list2 = list2->next;
    }

    struct node *curr = head;

    if (list1 != NULL && list2 != NULL) {

        if (list1->data < list2->data) {
            curr->next = list1;
            curr = list1;
            list1 = list1->next;
        } else {
            curr->next = list2;
            curr = list2;
            list2 = list2->next;
        }
    }

    if (list1 == NULL) {
        curr->next = list2;
    }
    if (list2 == NULL) {
        curr->next = list1;
    }
}