#include "dummy.h"

using cls = some_class;

int main() {
    const int bad_local_const = 12;
    cls c; 
    c.bad_class_method(12);
    return bad_local_const;
}