#include <stdafx.h>

namespace U
{
    struct StructU
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructU> c);
}
