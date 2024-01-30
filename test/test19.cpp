#include "test19.h"

namespace S
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructS> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructS aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("S\n");
    }
}
