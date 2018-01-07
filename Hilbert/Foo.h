// A simple class with a constuctor and some methods...
class Foo {
public:
	Foo(int);
	void bar();
	int foobar(int);
private:
	int val;
};


// Define C functions for the C++ class - as ctypes can only talk to C...
extern "C"
{
	Foo* Foo_new(int n) { return new Foo(n); }
	void Foo_bar(Foo* foo) { foo->bar(); }
	int Foo_foobar(Foo* foo, int n) { return foo->foobar(n); }
}