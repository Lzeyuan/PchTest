#include <stdafx.h>

namespace T
{
    struct StructT
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructT> c);
}
