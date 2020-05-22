/*=============================================================================
   Copyright (c) 2016-2020 Joel de Guzman

   Distributed under the MIT License [ https://opensource.org/licenses/MIT ]
=============================================================================*/
#if !defined(INFRA_STRING_VIEW_MAY_22_2020)
#define INFRA_STRING_VIEW_MAY_22_2020

#if (__cplusplus >= 201703L) || defined(__cpp_lib_string_view)

#include <string_view>

namespace cycfi {
    template <class C> using basic_string_view = std::basic_string_view<C>;
}

#else

#include <boost/utility/string_view.hpp>

namespace cycfi {
    template <class C> using basic_string_view = boost::basic_string_view<C>;
}

#endif

namespace cycfi {
    typedef basic_string_view<char> string_view;
    typedef basic_string_view<wchar_t> wstring_view;
    typedef basic_string_view<char16_t> u16string_view;
    typedef basic_string_view<char32_t> u32string_view;
}

#endif
