#include <stdafx.h>
namespace A
{
    struct A
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<A> c);
}