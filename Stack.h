#pragma once
template <class T>
class Stack
{
	T *arr;
	int size;
	int num;
public:
	Stack(int _size = 10){
		if (_size == 0) throw _size;
		size = _size;
		arr = new T[size];
		num = -1;
	}
	Stack(const Stack &st){
		size = st.size;
		arr = new T[size];
		num = st.num;
		fot(int i = 0; i <= num; i++)
		{
			arr[i] = st.arr[i];
		}
	}
	void push(T el)
	{
		if (num == size - 1)
			throw num;
		arr[num + 1] = el;
		num++;
	}
	~Stack();
	T pop(){
		if (num == -1)
			throw num;
		else { num--;
		return arr[num + 1];
		}
	}
	T top(){
		if (num == -1)
			throw num;
		else
		{
			return arr[num];
		}
	}
	bool IsEmpty() const{
		if (num == -1)
			return true;
		else 
			return false;
	}
	bool IsFull() const{
		if (num == size - 1)
			return true;
		else 
			return false;
	}
};

