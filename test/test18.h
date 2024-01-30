#include <stdafx.h>

namespace R
{
    struct StructR
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructR> c);
}
