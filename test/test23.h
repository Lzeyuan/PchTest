#include <stdafx.h>

namespace W
{
    struct StructW
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructW> c);
}
