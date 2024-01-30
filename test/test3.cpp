#include "test3.h"

namespace C
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructC> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructC aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("C\n");
    }
}
