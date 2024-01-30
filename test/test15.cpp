#include "test15.h"

namespace O
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructO> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructO aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("O\n");
    }
}
