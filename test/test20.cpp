#include "test20.h"

namespace T
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructT> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructT aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("T\n");
    }
}
