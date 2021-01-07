#ifndef ITER_HPP
# define ITER_HPP

template<class T, class I>
void iter(T *arr, I i, void func(int&))
{
	for (I z = 0; z < i; ++z)
	{
		func(arr[z]);
	}
}

#endif
