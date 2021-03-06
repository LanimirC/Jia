#ifndef __STRV_H__
#define __STRV_H__

#include "str.h"

char **construct_strv();
void destroy_strv(char **strv);
void clear_strv(char **strv);
void strv_insert(char **strv, char *str, int i);
void strv_delete(char **strv, int i);
int is_strv_complete(char **strv, int p);

#endif