/*
*
* dictionary.h
* 2016-08-21
*
* Author: Matthew
* <mno32@uclive.ac.nz>
*
* --FILE DESCRIPTION GOES HERE--
*
*/

#include <stdint.h>

#define MAX_KEY_SIZE 100

typedef struct keyvalue_s {
    char key[MAX_KEY_SIZE];
    uint64_t value;
} KeyValuePair;

typedef struct dict_s {
    KeyValuePair* dict;
    uint32_t size;
    uint32_t used;
} Dictionary;

uint64_t djb2(const char*);
KeyValuePair dictAdd(KeyValuePair*, uint32_t, char*, uint64_t);
