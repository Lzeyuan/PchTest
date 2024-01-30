#include <stdafx.h>

namespace M
{
    struct StructM
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructM> c);
}
