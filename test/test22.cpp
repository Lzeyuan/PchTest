#include "test22.h"

namespace V
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructV> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructV aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("V\n");
    }
}
