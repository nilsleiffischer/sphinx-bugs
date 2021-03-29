

/// My funcs.
namespace MyFunc {

/// One of the opening parens in the return type is dropped by Doxygen.
template <typename T>
MyTemplate<decltype(std::declval<T>())> broken_func();

/// This works.
template <typename T>
MyTemplate<T> working_func();

}
