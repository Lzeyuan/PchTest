#include "stdafx.h"
namespace D
{
    struct A
    {
        std::map<float, char> temp_;
    };

    void foo(std::vector<int> a, std::vector<double> b, std::vector<A> c)
    {
        a.push_back(1);
        b.emplace_back(1.f);
        A aa;
        aa.temp_.emplace(2.2f, 'a');
        c.emplace_back(aa);
    }

}