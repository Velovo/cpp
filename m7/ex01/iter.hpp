#ifndef ITER_HPP
# define ITER_HPP

template<class T, class I>
void iter(T *arr, I i, void func(T&))
{
	for (I z = 0; z < i; ++z)
	{
		func(arr[z]);
	}
}

template<class T, class I>
void iter(T *arr, I i, void func(const T&))
{
	for (I z = 0; z < i; ++z)
	{
		func(arr[z]);
	}
}

#endif
