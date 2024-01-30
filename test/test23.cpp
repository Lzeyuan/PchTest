#include "test23.h"

namespace W
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructW> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructW aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("W\n");
    }
}
