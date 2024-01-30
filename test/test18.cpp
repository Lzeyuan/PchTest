#include "test18.h"

namespace R
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructR> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructR aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("R\n");
    }
}
