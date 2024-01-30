#include <stdafx.h>

namespace Q
{
    struct StructQ
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructQ> c);
}
