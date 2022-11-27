#include <iostream>

template <typename T>
class Vector {
	private:
		unsigned int size;
		T dummy;
		T* _vector;

	public:
		Vector() {
			size = 0;
			// no need to assign memory because vector holds no vals
		}

		Vector(T val, unsigned int s) {
			size = s;

			_vector = new T[size];

			for (int i = 0; i < size; i++) {
				_vector[i] = val;
			}
		}

		void Push_Back(T val) {
			Increment();
			_vector[size] = val;
		}

		void Push_Front(T val) {
			Increment();
			Shift_Back();
			_vector[0] = val;
		}

		T Pop_Back() {
			T val = _vector[size];
			Decrement();
			return val;
		}

		T Pop_Front() {
			T val = _vector[0];
			Decrement();
			Shift_Front();
			return val;
		}

		// shifts every element to the front by one
		void Shift_Front() {
			T* headptr = _vector;

			_vector = new T[size];
			for (int i = 0; i < size - 1; i++) {
				_vector[i] = headptr[i+1];
			}
			delete[] headptr;
		}

		// shifts every element to the back by one
		void Shift_Back() {
			T* headptr = _vector;

			_vector = new T[size];
			for (int i = 0; i < size; i++) {
				_vector[i+1] = headptr[i];
			}
			delete[] headptr;
		}

		// helper function for push_back/push_front
		void Increment() {
			T* headptr = _vector;
			size++;

			_vector = new T[size];
			for (int i = 0; i < size; i++) {
				_vector[i] = headptr[i];
			}
			delete[] headptr;
		}

		// helper function for pop_back/pop_front
		void Decrement() {
			T* headptr = _vector;
			size--;

			_vector = new T[size];
			for (int i = 0; i < size; i++) {
				_vector[i] = headptr[i];
			}
			delete[] headptr;
		}

		void Print() {
			std::cout << "The vector has " << size << " members." << std::endl;
			for (int i = 0; i < size; i++) {
				std::cout << _vector[i] << " ";
			}
			std::cout << std::endl;
		}

};