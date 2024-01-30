#include "test6.h"

namespace F
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructF> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructF aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("F\n");
    }
}
