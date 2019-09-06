# Where to get started learning C++ and what resources are there.

Some variation of the "where to get started with learning C++" or "What are the resources for getting started in C++" has come up often enough on Twitter that I figured it was about time to turn it into a more permenant resource.

First, use [cppreference](https://en.cppreference.com/w/) as your goto C++ reference. It is not a tutorial but it is 
relatively complete and is kept up to date. It will note the difference between various versions of C++. It has a [compiler support section](https://en.cppreference.com/w/cpp/compiler_support), so you can figure out which 
versions support which features.

[Compiler Explorer](https://godbolt.org/) aka Godbolt allows you to experiment with C++ (and other languages) live. 
You type in code and it will compile it on the fly. This allows instant feedback on what you are trying and avoids having 
to install anything in order to try something out. It easy to share links which can make it easier for others to help you when you don't understand something.

A second tool [C++ Insights](https://cppinsights.io/) allows you to see some of the magic that the compiler does for you when you use features like lambdas, range-based for-loops and structured bindings.

There are [a lot of C++ conference/meetup/weekly videos available on Youtube](https://github.com/shafik/cpp_youtube_channels), 
there is way more than any one person could consume but you are sure to find some great material if you spend the time looking. [C++ Weekly](https://www.youtube.com/user/lefticus1) and [CppCast](https://www.youtube.com/channel/UCuCjADS4u3uJDTqUaG0H9dA) stand out as two that may be more useful to be those just starting out.

There are [many good C++ blogs](https://github.com/shafik/cpp_blogs). They vary in level but whatever level you are at you
should be able to find several that give you helpful advice and approaches.

Twitter has a great community of C++ folks who friendly and are happy to help, I have 
[a hand curated list](https://twitter.com/shafikyaghmour/lists/c/members) that can be used as a Tweetdeck column or just
as a guide for who you might want to follow.

[#include C++](https://twitter.com/include_cpp) is an awesome organization that works for inclusion and diversity in the 
community and they have a [discord server](https://t.co/XafTulMibe?amp=1) where you can find channels for learners.

Learn about your compilers [warning flags](https://clang.llvm.org/docs/DiagnosticsReference.html#introduction) if you are using clang or gcc then `-Wall -Wextra -pedantic` should be a good start but there is a lot of debate on this topic. I personally recomend using `-Werror` for builds (but not for release) since we should be treating all warnings as errors and fixing them on the spot. One word of caution, [clang as the -Weverything flag](https://clang.llvm.org/docs/UsersManual.html#diagnostics-enable-everything) but [it is not meant for production](https://twitter.com/shafikyaghmour/status/1024716190692782080).

Know what [undefined behavior is](https://en.cppreference.com/w/cpp/language/ub). Know the [tools you can use to prevent or catch it](https://twitter.com/shafikyaghmour/status/936953294991212544) (to a degree). It won't [totally make sense in the beginning](https://twitter.com/shafikyaghmour/status/1146028351666229250) but in the long-term knowing about it is critical.

There are many books to choose from. For a quick tour of modern C++ 
[“A Tour of C++”](https://www.amazon.com/Tour-2nd-Depth-Bjarne-Stroustrup/dp/0134997832/) is a quick and light introduction. For more in depth coverage of 
C++ ["The C++ Programming Language, 4th Edition"](https://www.amazon.com/C-Programming-Language-4th/dp/0321563840) is a good choice. For up to date C++17 coverage either of these two books would be a good bet ["C++17 in Detail"](https://leanpub.com/cpp17indetail) and
["C++17 - The Complete Guide"](http://www.cppstd17.com/). 


["Effective Modern C++"](https://www.amazon.com/Effective-Modern-Specific-Ways-Improve/dp/1491903996) and the previous version ["Effective C++"](https://www.amazon.com/Effective-Specific-Improve-Programs-Designs/dp/0321334876) are important 
books to read to understand best practices although they are becoming a little dated.

There are some more specialized books that are worth checking out further along your journey such as 
["C++ Templates - The Complete Guide, 2nd Ed."](http://www.tmplbook.com/) and ["C++ Concurrency in Action"](https://www.manning.com/books/c-plus-plus-concurrency-in-action). If you want to think in a more functional way then ["Functional Programming in C++"](https://www.manning.com/books/functional-programming-in-c-plus-plus) is worth a look.

Much later on in your journey reading
[The Design and Evolution of C++](https://www.amazon.com/Design-Evolution-C-Bjarne-Stroustrup/dp/0201543303/) is essential
to understanding where C++ came from and why it is the way it is today. A lot of tough trade-off were made along the way and understanding the choices and why there were made can help you to appreciate the langauge despite its warts. 
