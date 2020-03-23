Bugs with Sphinx C++ domain template parameters
===============================================

.. cpp:class:: template <std::integer_sequence<bool, (static_cast<void>(Bs), false)>> foo

    Broken because of parentheses around `static_cast<void>(Bs), false`

.. cpp:class:: template <std::integer_sequence<bool, (void(Bs), false)>> foo

    Broken because of parentheses around `void(Bs), false`


Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
