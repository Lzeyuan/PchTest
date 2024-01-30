#include <stdafx.h>

namespace Z
{
    struct StructZ
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructZ> c);
}
