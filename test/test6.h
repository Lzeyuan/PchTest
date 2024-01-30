#include <stdafx.h>

namespace F
{
    struct StructF
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructF> c);
}
