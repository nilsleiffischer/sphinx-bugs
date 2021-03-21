
// One of the opening parens is dropped by Breathe. 
template <typename T>
MyTemplate<decltype(std::declval<T>())> broken_func();

// This works.
template <typename T>
MyTemplate<T> working_func();
