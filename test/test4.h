#include <stdafx.h>

namespace D
{
    struct StructD
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructD> c);
}
