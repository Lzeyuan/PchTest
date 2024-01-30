#include "test21.h"

namespace U
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructU> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructU aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("U\n");
    }
}
