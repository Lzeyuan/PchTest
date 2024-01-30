#include "test12.h"

namespace L
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructL> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructL aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("L\n");
    }
}
