#ifndef __CSS_H__
#define __CSS_H__

#include "code.h"
#include "defval.h"

typedef struct setter_s
{
    int property;
    char value[MAX_PROPERTY_VALUE_SIZE];
}setter;

typedef struct style_s
{
    char clazz[MAX_CLASS_NAME_SIZE];
    char id[MAX_ID_SIZE];
    setter **setters;
    int num_setter;
}style;

typedef struct css_s
{
    void *placeholder;
}css;

css *css_create(char *path);
void css_release(css *css);
int css_next_style(css *css);

#endif