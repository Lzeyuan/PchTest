#include <stdafx.h>

namespace S
{
    struct StructS
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructS> c);
}
