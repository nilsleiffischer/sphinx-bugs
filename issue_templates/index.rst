Bugs with Sphinx C++ domain template parameters
===============================================

These are all resolved on sphinx 3.0.x branch.

.. cpp:class:: template <Requires<A or B>> foo

    Broken because of `or`

.. cpp:class:: template <Requires<A || B>> foo

    Works using `||`


.. cpp:class:: template <Requires<A and B>> foo

    Broken because of `or`

.. cpp:class:: template <Requires<A && B>> foo

    Works using `||`


.. cpp:class:: template <Requires<not B>> foo

    Broken because of `not`


.. cpp:class:: template <Requires<! B>> foo

    Works using `!`


.. cpp:class:: template <Requires<B> = nullptr> foo

    Broken because of `=`


.. cpp:class:: template <Requires<(A<=B)>> foo

    Broken because of `<=`

.. cpp:class:: template <Requires<(A>=B)>> foo

    But works with `>=`

.. cpp:class:: template <Requires<(A<B)>> foo

    But works with `<`

.. cpp:class:: template <Requires<(A>B)>> foo

    But works with `>`

.. cpp:class:: template <Requires<(A==B)>> foo

    But works with `==`

Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
