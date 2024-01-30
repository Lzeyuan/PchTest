#include "test7.h"

namespace G
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructG> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructG aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("G\n");
    }
}
