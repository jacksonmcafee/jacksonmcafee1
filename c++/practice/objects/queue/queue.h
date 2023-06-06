/*
queue.h, Jackson McAfee, 3 Oct 2022 

simple array-based queue that includes basic enqueue, dequeue functions
automatically resizes up based on arbitrary scale_factor
*/

#include <algorithm>

template <typename T>
class Queue {
	private:
		T* _queue;
		unsigned int front, back, max_size;
		double scale_factor;

	public:
		// default constructor
		Queue() {
			front = back = 0;
			max_size = 2;
			scale_factor = 2.0;

			_queue = new T[max_size];
		}

		// ms constructor
		Queue(unsigned int ms) {
			front = back = 0;
			max_size = ms;
			scale_factor = 2.0;

			_queue = new T[max_size];
		}

		// ms & sf constructor
		Queue(unsigned int ms, double sf) {
			front = back = 0;
			max_size = ms;
			scale_factor = sf;

			_queue = new T[max_size];
		}

		// destructor
		~Queue() { delete[] _queue;	}

		// enqueue adds value to front of queue & shifts queue
		void Enqueue(T val) {
			if (back == max_size) {
				// scale queue by sf 
				T* temp_queue = new T[max_size * 2];
				for (unsigned int i = 0; i < back; i++) {
					temp_queue[i] = _queue[i];
				}
				std::swap(_queue, temp_queue);
			}
			// enqueue and increment back
			_queue[back] = val;
			back++;
		}

		// dequeue removes a value from the back of the queue
		T Dequeue() {
			if (front == back) {
				// empty queue
				std::printf("Empty queue.\n");
				return 0;
			}

			// if queue is not empty, remove front object
			T val = _queue[front];

			for (unsigned int i = 0; i < back; i++) {
				_queue[i] = _queue[i+1];
			}

			return val;
		}
};