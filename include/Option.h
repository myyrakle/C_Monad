#ifndef CMONAD_OPTION
#define CMONAD_OPTION

#include <stdbool.h>

#define decl_Option(T, declname) \
\
struct declname \
{ \
  bool success; \
  T value; \
}; \
\
declname new_##Option(T value) \
{ \
  declname temp = {
    .success = fal
  }
} \

#endif
