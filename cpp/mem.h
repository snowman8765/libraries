#include <string.h>

#define FILL_VALUE(var, val)    memset(&(var), val, sizeof(var))
#define FILL_ZERO(var)    FILL_VALUE(var, 0)

