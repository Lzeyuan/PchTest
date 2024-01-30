#include "test24.h"

namespace X
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructX> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructX aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("X\n");
    }
}
