#include "test11.h"

namespace K
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructK> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructK aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("K\n");
    }
}
