#include "test26.h"

namespace Z
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructZ> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructZ aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("Z\n");
    }
}
