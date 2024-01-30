#include <stdafx.h>

namespace P
{
    struct StructP
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructP> c);
}
