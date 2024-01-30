#include <stdafx.h>

namespace X
{
    struct StructX
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructX> c);
}
