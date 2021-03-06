#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "strv.h"
#include "macro.h"
#include "debug.h"

char **construct_strv()
{
	char **strv = malloc(STRV_SIZE * sizeof(char *));
	for (int i = 0; i < STRV_SIZE; ++i)
	{
		strv[i] = malloc(STR_SIZE * sizeof(char));
	}
	return strv;
}

void destroy_strv(char **strv)
{
	for (int i = 0; i < STRV_SIZE; ++i)
	{
		free(strv[i]);
	}
	free(strv);
}

void clear_strv(char **strv)
{
	for (int i = 0; i < STRV_SIZE; ++i)
	{
		free(strv[i]);
	}
}

void strv_insert(char **strv, char *str, int i)
{
	for (int j = STRV_SIZE - 1; j > i; --j)
	{
		strcpy(strv[j], strv[j - 1]);
	}
	strcpy(strv[i], str);
}

void strv_delete(char **strv, int i)
{
	for (int j = i; j < STRV_SIZE - 1; ++j)
	{
		strcpy(strv[j], strv[j + 1]);
	}
}

int is_strv_complete(char **strv, int p)
{
	int start_word_count = 0, end_word_count = 0;
	for (int i = 0; i < p; ++i)
	{
		if (isupper(strv[i][0]))
		{
			++start_word_count;
		}
		if (strcmp(strv[i], ".") == 0)
		{
			++end_word_count;
		}
		if (start_word_count == end_word_count)
		{
			return 1;
		}
	}
    return 0;
}