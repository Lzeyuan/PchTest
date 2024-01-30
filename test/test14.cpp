#include "test14.h"

namespace N
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructN> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructN aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("N\n");
    }
}
