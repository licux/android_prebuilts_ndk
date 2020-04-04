//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// XFAIL: apple-darwin

// test quick_exit and at_quick_exit

#include <cstdlib>
#include <type_traits>

void f() {}

int main()
{
#ifdef _LIBCPP_HAS_QUICK_EXIT
    std::at_quick_exit(f);
    quick_exit(0);
#endif
}
