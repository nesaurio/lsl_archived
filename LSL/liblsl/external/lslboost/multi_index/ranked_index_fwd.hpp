/* Copyright 2003-2015 Joaquin M Lopez Munoz.
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.lslboost.org/LICENSE_1_0.txt)
 *
 * See http://www.lslboost.org/libs/multi_index for library home page.
 */

#ifndef BOOST_MULTI_INDEX_RANKED_INDEX_FWD_HPP
#define BOOST_MULTI_INDEX_RANKED_INDEX_FWD_HPP

#if defined(_MSC_VER)
#pragma once
#endif

#include <lslboost/multi_index/detail/ord_index_args.hpp>
#include <lslboost/multi_index/detail/ord_index_impl_fwd.hpp>

namespace lslboost{

namespace multi_index{

/* ranked_index specifiers */

template<typename Arg1,typename Arg2=mpl::na,typename Arg3=mpl::na>
struct ranked_unique;

template<typename Arg1,typename Arg2=mpl::na,typename Arg3=mpl::na>
struct ranked_non_unique;

} /* namespace multi_index */

} /* namespace lslboost */

#endif