#include <iterator>
#include <stdio.h>
#include <stdlib.h>

#include "hashtable.h"

static ht_item* ht_new_item(char* k, char* v){
    ht_item* i = malloc(sizeof(ht_item));
    i->key = k;
    i->value = v;
    return i;
}