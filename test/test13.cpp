#include "test13.h"

namespace M
{
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructM> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        StructM aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("M\n");
    }
}
