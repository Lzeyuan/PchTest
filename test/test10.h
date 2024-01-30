#include <stdafx.h>

namespace J
{
    struct StructJ
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructJ> c);
}
