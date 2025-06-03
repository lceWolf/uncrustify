int&foo()
{}
int&&foo()
{}
std::vector<int>&foo()
{}
std::vector<int>&&foo()
{}
std::vector<int&>&&foo()
{}
std::vector<int&&>&&foo()
{}
struct Foo{};
Foo&&foo()
{}
