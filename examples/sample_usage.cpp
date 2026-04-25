#include <beman/copyable_function/copyable_function.hpp>

namespace exe = beman::copyable_function;

// a Callable object
struct Callable {
    int operator()() { return 42; }
    int operator()() const noexcept { return 43; }
};

int main()
{
    beman::copyable_function<int()> f(Callable{});
    int x = f();
    return 0;
}
