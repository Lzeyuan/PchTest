#include "test1.h"

namespace A
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructA> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructA aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("A\n");
    }
}
