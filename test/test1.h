#include <stdafx.h>

namespace A
{
    struct StructA
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructA> c);
}
