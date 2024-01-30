#include "test10.h"

namespace J
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructJ> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructJ aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("J\n");
    }
}
