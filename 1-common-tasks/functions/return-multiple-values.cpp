// Return multiple values
// C++11

#include <tuple>

std::tuple<int, bool, float> foo()
{
	return std::make_tuple(128, true, 1.5f);
}

int main()
{
	int obj1;
	bool obj2;
	float obj3;

	std::tie(obj1, obj2, obj3) = foo();
}

// Return multiple values of different types from a function.
// 
// The `foo` function on [6-9] returns a
// [`std::tuple`](cpp/utility/tuple) representing multiple values
// of different types. We make use of the
// [`std::make_tuple`](cpp/utility/tuple/make_tuple) utility function
// to create the `std::tuple` object.
// 
// On [17], we call this function and use [`std::tie`](cpp/utility/tuple/tie)
// to assign the return values to each of the given objects.
// If we cannot create the objects prior to this call, we can
// alternatively store the resulting `std::tuple` object and use
// [`std::get`](cpp/utility/tuple/get) to get the values from it.
// 
// If the values are closely and logically related, consider composing
// them into a `struct` or `class`.
