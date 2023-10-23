#include "list.h"
List *List_create() {
    return calloc(1, sizeof(List));
}
//destroy a list, after that, the list will not exist.
void List_destroy(List *list) {
    LIST_FOREACH(list, first, next, cur) {
        if (cur->prev) {
            free(cur->prev);
        }
    }
    free(list->last);
    free(list);
}
//clear a list, erase all value of the list.
void List_clear(List *list) {
    LIST_FOREACH(list, first, next, cur) {
        free(cur->value);
    }
}
//clear and then destroy the list.
void List_clear_destroy(List *list) {
    List_clear(list);
    List_destroy(list);
}
//insert a new node at the end of list
void List_push(List *list, void *value) {
    ListNode *node = calloc(1, sizeof(ListNode));
    if (!node) {
        printf("error");
        exit(1);
    }
    node->value = value;
    if (list->last == NULL) {
        list->first = node;
        list->last = node;
    } else {
        list->last->next = node;
        node->prev = list->last;
        list->last = node;
    }
    list->count ++;
}
//remove the last node in the list, and get it's value.
void *List_pop(List *list) {
    ListNode *node = list->last;
    return node != NULL ? List_remove(list, node) : NULL;
}
//insert a new node at the start of the list.
void List_unshift(List *list, void *value) {
    ListNode *node = calloc(1, sizeof(ListNode));
    if (!node) {
        printf("error");
        exit(1);
    }
    node->value = value;
    if (list->first == NULL) {
        list->first = node;
        list->last = node;
    } else {
        node->next = list->first;
        list->first->prev = node;
        list->first = node;
    }
    list->count++;
}
//remove the first node, and get it's value.
void *List_shift(List *list) {
    ListNode *node = list->first;
    return node != NULL ? List_remove(list, node) : NULL;
}
//remove a node from the list.
void *List_remove(List *list, ListNode *node) {
    void *result = NULL;
    if (!node) {
        printf("error: node can not be null");
        exit(1);
    }
    if ((!list->first) && (!list->last)) {
        printf("error: list is empty");
    }
    if (node == list->first && node == list->last) {
        list->first = NULL;
        list->last = NULL;
    } else if (node == list->first) {
        list->first = node->next;
        list->first->prev = NULL;
    } else if (node == list->last) {
        list->last = node->prev;
        list->last->next = NULL;
    } else {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    list->count --;
    result = node->value;
    free(node);
    return result;
}

