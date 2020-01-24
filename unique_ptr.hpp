/**
 * Smart pointer
 * The allocated memory can belong to only one object.
 */
template<typename T>
class unique_ptr
{
private:
	T* pointer;
	//Non copy
	unique_ptr<T>(unique_ptr<T> const&) = delete;
	unique_ptr<T>& operator=(unique_ptr<T> const&) = delete;
public:
	unique_ptr(T* pointer) :
	pointer(pointer)
	{}

	~unique_ptr()
	{
		if(this->pointer != nullptr) delete this->pointer;
	}

	T* operator->()
	{
		return this->pointer;
	}
};