/*
stack.h, Jackson McAfee, 3 Oct 2022 
simple array-based stack that includes basic pop, push, and peek functions
automatically resizes up or down by arbitrary scale_factor

could be made much cleaner with a resize function
*/

#include <iostream>

template <typename T>
class Stack {
	private:
		T* _stack;
		unsigned int size;
		unsigned int max_size;
		double scale_factor;

		// throw in case of error
		T dummy;

	public:
		// default constructor
		Stack() {
			// set default values
			size = 0;
			max_size = 2;
			scale_factor = 2.0;

			// assign memory to _stack
			_stack = new T[max_size];
		}

		// ms constructor
		Stack(unsigned int ms) {
			// set default values
			size = 0;
			max_size = ms;
			scale_factor = 2.0;

			// assign memory to _stack
			_stack = new T[max_size];
		}

		// sf constructor
		Stack(double sf) {
			// set default values
			size = 0;
			max_size = 2;
			scale_factor = sf;

			// assign memory to _stack
			_stack = new T[max_size];
		}

		// ms & sf constructor
		Stack(unsigned int ms, double sf) {
			// set default values
			size = 0;
			max_size = ms;
			scale_factor = sf;

			// assign memory to _stack
			_stack = new T[max_size];
		}

		// copy constructor 
		Stack(const Stack& d) {
			// set default values
			size = d.size;
			max_size = d.max_size;
			scale_factor = d.scale_factor;

			// assign memory to _stack
			_stack = new T[max_size];

			// copy values from d._stack to _stack
			for (unsigned int i = 0; i < max_size; i++) {
				_stack[i] = d._stack[i];
			}
		}

		// copy assignment operator
		Stack& operator=(Stack& d) {
			if (this != &d) {
				// set default values
				size = d.size;
				max_size = d.max_size;
				scale_factor = d.scale_factor;

				// delete old stack
				delete[] _stack;

				// assign memory to _stack
				_stack = new T[max_size];

				// copy values from d._stack to _stack
				for (unsigned int i = 0; i < max_size; i++) {
					_stack[i] = d._stack[i];
				}
			}
			return *this;
		}

		// destructor
		~Stack() {
			delete[] _stack;
			size = 0;
			max_size = 0;
		}

		// push function
		void Push(T obj) {
			// if size is less than the max size, push to stack 
			if (size < max_size) {
				_stack[size] = obj;
				size++;
			}
			// if size is equal to max_size, double stack size 
			else {
				// store pointer to _stack
				T* old_stack = _stack;
				// resize max_size based on scale factor
				max_size *= scale_factor;

				// assign new memory to _stack
				_stack = new T[max_size]; 

				// copy values from old array
				for (unsigned int i = 0; i < size; i++) {
					_stack[i] = old_stack[i];
				}

				_stack[size] = obj;
				size++;

				delete[] old_stack;
			}
		}

		// removes the top object and returns it
		T Pop() {
			if (size != 0) {
				T val = _stack[size - 1];
				size--;

				if (size < max_size / scale_factor) {
					// store pointer to _stack
					T* old_stack = _stack;

					// resize max_size based on scale factor
					max_size /= scale_factor;

					// assign new memory to _stack
					_stack = new T[max_size];

					// copy values from old array
					for (unsigned int i = 0; i < size; i++) {
						_stack[i] = old_stack[i];
					}
					
					delete[] old_stack;	
				}

				return val;
			}
			else { return dummy; }
		}

		// returns top object without popping it
		T Peek() {
			if (size != 0) { return _stack[size - 1]; }
			else { return dummy; }
		}

		// prints the entire stack without popping
		void printStack() {
			std::cout << "Size = " << size << std::endl;
			std::cout << "Max Size = " << max_size << std::endl;
			for (unsigned int i = 0; i < size; i++) {
				std::cout << i << " ";
			}
			std::cout << std::endl;
		}

		// setter functions
		void setSize(unsigned int temp) { size = temp; }
		void setMaxSize(unsigned int temp) { max_size = temp; }
		void setScaleFactor(double temp) { scale_factor = temp; }

		// getter functions
		unsigned int getSize() { return size; }
		unsigned int getMaxSize() { return max_size; }
		double getScaleFactor() { return scale_factor; }
};
