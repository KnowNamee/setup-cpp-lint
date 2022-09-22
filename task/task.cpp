#include "dummy.h"

// readability-identifier-naming
// function in camelBack
int foo_with_long_name();

// readability-identifier-naming
// class in CamelCase
class classInCamelCase
{
};

template<typename Obj>
int defaultComparator(const Obj &rhs, const Obj &lhs);

int main()
{
    // readability-isolate-declaration check
    int firstParam, secondParam, *somePointer;

    // readability-identifier-naming
    // variable in camelBack
    int camel_back;

    // one character variables only for loops
    int a;
    for (int i = 0; i < 5; ++i)
        ;

    // avoid C-Style casts
    int someVariable = 5;
    double someCastedVariable = (double)someVariable;

    int *someVariablePtr = &someVariable;
    double *someCasterVariablePtr = (double *)someVariablePtr;

    // one line - one statement
    int qq = 10;
    int pp = 0;
    while (--qq) {
        ++pp;
    }

    backpack::Backpack bp(123);
    bp.getOne();
    bp.put();
    bp.put(15);

    for (int i = 10; i > 0; --i) {
        --i;
    }

    return 0;
}