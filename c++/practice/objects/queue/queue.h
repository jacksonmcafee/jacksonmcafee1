/*
queue.h, Jackson McAfee, 3 Oct 2022 

simple array-based queue that includes basic enqueue, dequeue functions
automatically resizes up or down based on arbitrary scale_factor
*/

template <typename T>
class Queue {
	private:
		T* _queue;
		unsigned int front;
		unsigned int back;
		unsigned int max_size;
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

		// sf constructor
		Queue(double sf) {
			front = back = 0;
			max_size = 2;
			scale_factor = sf;

			_queue = new T[max_size];
		}

		// ms & sf constructor
		Queue(unsigned int ms, double sf) {
			front = back = 0;
			max_size = ms;
			scale_factor = sf;

			_queue = new T[max_size];
		}

		// enqueue adds value to front of queue & shifts queue
		void Enqueue(T val) {
			
		}


};