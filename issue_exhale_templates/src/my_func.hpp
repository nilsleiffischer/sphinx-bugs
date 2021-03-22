

// This fails because everything before the first opening parenthesis is
// stripped from the output
template <size_t N>
std::array<double, (N + 1)> broken_func();

// Removing the parentheses works
template <size_t N>
std::array<double, N> working_func();
