#ifndef INCLUDED_EXAMPLE_CODE_H
#define INCLUDED_EXAMPLE_CODE_H

#define EXAMPLE_FFT_SIZE 1024
#include <gnuradio/fft/fft.h>

namespace gr {
namespace test {

class ExampleKernel {
    fft::fft_complex_fwd _fft;
    fft::fft_complex_rev _ifft;

    ExampleKernel():
        _fft(EXAMPLE_FFT_SIZE, 1),
        _ifft(EXAMPLE_FFT_SIZE, 1) {}
};


}} // namespaces

#endif