#include <stdafx.h>

namespace I
{
    struct StructI
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructI> c);
}
