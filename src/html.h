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

typedef struct HtmlNode {
  HtmlTags tag;
  char** classes;
  size_t classes_count;
  Attribute* attributes;
  size_t attributes_count;
  struct HtmlNode* children;
  // for text nodes NULL for everything else
  char* text;
} HtmlNode;
#endif