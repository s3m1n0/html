#ifndef HTML_H
#define HTML_H
#include <stddef.h>
// there might be a better way but ... who knows
typedef enum HtmlTags {
  HTML_TEXT,
  HTML_H1,
  HTML_H2,
  HTML_H3,
  HTML_H4,
  HTML_H5,
  HTML_H6,
  HTML_P,
  HTML_DIV
} HtmlTags;

typedef struct Attribute {
  char* type;
  char* value;
} Attribute;

typedef struct HtmlComponentNode {
  HtmlTags tag;
  char** classes;
  size_t classes_count;
  Attribute* attributes;
  size_t attributes_count;
  struct HtmlComponentNode** children;
  size_t children_count;
} HtmlComponentNode;

typedef struct HtmlTextNode {
  char* text;
} HtmlTextNode;

typedef enum HtmlNodeTypes { HTML_COMPONENT, HTML_TEXT };

typedef struct HtmlNode {
  HtmlNodeTypes type;
  union {
    HtmlComponentNode component;
    HtmlTextNode text;
  } data;
} HtmlNode;

#endif