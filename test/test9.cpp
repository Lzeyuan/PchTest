#include "test9.h"

namespace I
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructI> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructI aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("I\n");
    }
}
