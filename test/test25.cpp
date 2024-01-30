#include "test25.h"

namespace Y
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructY> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructY aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("Y\n");
    }
}
