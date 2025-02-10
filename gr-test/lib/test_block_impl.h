/* -*- c++ -*- */
/*
 * Copyright 2025 gr-test author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_TEST_TEST_BLOCK_IMPL_H
#define INCLUDED_TEST_TEST_BLOCK_IMPL_H

#include <gnuradio/test/test_block.h>

namespace gr {
namespace test {

class test_block_impl : public test_block
{
private:
    // Nothing to declare in this block.

public:
    test_block_impl();
    ~test_block_impl();

    // Where all the action really happens
    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);
};

} // namespace test
} // namespace gr

#endif /* INCLUDED_TEST_TEST_BLOCK_IMPL_H */
