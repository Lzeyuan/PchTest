#include "test17.h"

namespace Q
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructQ> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructQ aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("Q\n");
    }
}
