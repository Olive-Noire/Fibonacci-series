#include <vector>
#include <array>

template <std::size_t Size> std::array<std::intmax_t, Size> Fibonnaci() {

    std::array<Size> a;

    if (Size <= 2) {

        for (std::intmax_t& n : a) n = 1;
        return a;

    } else {

        for (std::size_t i{0}; i < Size; i++) {

            if (i <= 2) {
                
                a[i] = 1;

            } else {

                a[i] = a[i-1]+a[i-2];

            }

        }

        return a;

    }

}

std::vector<std::intmax_t> Fibonnaci(std::size_t size) {

    std::vector<std::intmax_t> v;

    if (size <= 2) {

        for (std::size_t i{0}; i < size; i++) v.push_back(1);
        return v;

    } else {

        const std::vector<std::intmax_t> buffer{Fibonnaci(size-1)};

        v.push_back(buffer.back()+buffer[buffer.size()-2]);
        return v;

    }

}