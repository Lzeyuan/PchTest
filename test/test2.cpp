#include "test2.h"

namespace B
{

    void foo(std::vector<int> a, std::vector<double> b, std::vector<A> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        A aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
        printf("B\n");
    }

}