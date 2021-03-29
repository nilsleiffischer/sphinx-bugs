Bugs with Sphinx C++ domain template parameters
===============================================

.. cpp:function::
    template <typename T> MyTemplate<decltype(std::declval<T>())> broken_func();

    Sphinx manages to parse this function. It breaks when parsing it with
    Breathe:

.. autodoxygenindex::

Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
