#include "test8.h"

namespace H
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructH> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructH aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("H\n");
    }
}
