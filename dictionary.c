/*
*
* dictionary.c
* 2016-08-21
*
* Author: Matthew
* <mno32@uclive.ac.nz>
*
* --FILE DESCRIPTION GOES HERE--
*
*/

#include <stdint.h>
#include "dictionary.h"

#define MAX_DICT_SIZE 16777216

uint64_t djb2(const char* str)
{
    uint64_t hash = 5381;
    uint32_t c;
    
    while (c = *str++) {
        hash = ((hash << 5) + hash) + c;
    }
    
    return hash;
}

void dictAdd(KeyValuePair dict[], uint32_t size, char* key, uint64_t value)
{
    uint32_t pos = djb2(key) % size;
}

Dictionary* dictMake(uint32_t size)
{
    size = (size > MAX_DICT_SIZE) ? MAX_DICT_SIZE : size;
    
    
    return dict;
}

void initDict(Dictionary* d, uint32_t size)
{
    d->dict = (KeyValuePair*)malloc(size * sizeof(KeyValuePair));
    d->size = size;
    d->used = 0;
}


int main()
{

	return 0;

}
