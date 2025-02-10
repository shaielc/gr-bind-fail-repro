/* -*- c++ -*- */
/*
 * Copyright 2025 gr-test author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_TEST_TEST_BLOCK_H
#define INCLUDED_TEST_TEST_BLOCK_H

#include <gnuradio/sync_block.h>
#include <gnuradio/test/api.h>

namespace gr {
namespace test {

/*!
 * \brief <+description of block+>
 * \ingroup test
 *
 */
class TEST_API test_block : virtual public gr::sync_block
{
public:
    typedef std::shared_ptr<test_block> sptr;

    /*!
     * \brief Return a shared_ptr to a new instance of test::test_block.
     *
     * To avoid accidental use of raw pointers, test::test_block's
     * constructor is in a private implementation
     * class. test::test_block::make is the public interface for
     * creating new instances.
     */
    static sptr make();
};

} // namespace test
} // namespace gr

#endif /* INCLUDED_TEST_TEST_BLOCK_H */
