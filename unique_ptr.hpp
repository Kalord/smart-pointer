/**
 * Smart pointer
 * The allocated memory can belong to only one object.
 */
template<typename T>
class unique_ptr
{
private:
	T* pointer;
public:
	unique_ptr(T* pointer) :
	pointer(pointer)
	{}

	~unique_ptr()
	{
		delete this->pointer;
	}

	T* operator->()
	{
		return this->pointer;
	}
};