#include <stdafx.h>

namespace L
{
    struct StructL
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructL> c);
}
