#include <stdafx.h>

namespace H
{
    struct StructH
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructH> c);
}
