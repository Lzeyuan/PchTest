#include "test4.h"

namespace D
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructD> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructD aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("D\n");
    }
}
