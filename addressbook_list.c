#include "addressbook_list.h"

TelephoneBookList * createTelephoneBookList()
{
    TelephoneBookList * list = malloc(sizeof(TelephoneBookList));
    return list;
}

void freeTelephoneBookList(TelephoneBookList* list)
{

}

TelephoneBookNode * createTelephoneBookNode()
{

    TelephoneBookNode * node = malloc(sizeof(TelephoneBookNode));
    return node;
}

void freeTelephoneBookNode(TelephoneBookNode * node)
{
    free(node);
}

Boolean insert(TelephoneBookList * list, TelephoneBookNode * node)
{
    TelephoneBookNode * tempNode;

    if(list->head == NULL){
        list->head = node;
        list->current = node;
        list->tail = node;
        node->nextNode = NULL;
        node->previousNode = NULL;
    }

    else {
        tempNode = list->tail;
        list->tail = node;
        list->tail->nextNode = NULL;
        list->tail->previousNode = tempNode;
        tempNode->nextNode = node;
    }

    list->size ++;

    return TRUE;
}

Boolean forward(TelephoneBookList * list, int forward)
{
    return FALSE;
}

Boolean backward(TelephoneBookList * list, int backward)
{
    return FALSE;
}

Boolean delete(TelephoneBookList * list)
{
    return FALSE;
}

TelephoneBookNode * findByID(TelephoneBookList * list, int id)
{
    return NULL;
}

TelephoneBookNode * findByName(TelephoneBookList * list, char * name)
{
    return NULL;
}
