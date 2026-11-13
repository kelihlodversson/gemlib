/* C++ callers must link to the C rectangle-helper implementations. */
#include "gem.h"
int main()
{
    GRECT a = { 30000,0,4000,10 }, b = a;
    return !inside(32000,5,&a) || !rc_intersect(&a,&b) || !rc_equal(&a,&b);
}
