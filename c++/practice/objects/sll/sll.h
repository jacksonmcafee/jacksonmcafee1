/*
sll.h, Jackson McAfee, 7 Nov 2022 
simple template singly-linked list  

node class included within sll declaration
*/

template <typename T>
class SLL<T> {
	// define st ruct node
	struct Node {
		T val;
		Node* next;

		// node constructor
		Node(T temp) {
			val = temp;
			next == nullptr;
		}
	};


	public:
		// insert a new node at head
		void InsertFront(T val) {
			// create new head node
			Node node = new Node(val);
			
			// point new node at current head
			node->next = head;

			// set new node as new head
			head = node;
		}

		// insert at new node at tail
		void InsertBack(T val) {
			// create new head node
			Node node = new Node(val);

			// point tail at new node
			tail->next = node;

			// set new node as new tail
			tail = node;
		}
		
		void Insert(T val, unsigned int location) {
			// insert after location
			if (size =< location) {
				InsertBack(val);
			}
			else {
				// create iterator node at head
				Node* node1 = head;

				// iterate until prev node
				for (unsigned int i = 0; i < location; i++) {
					node1 = node1->next;
				}
				Node node = new Node(val);
				node->next = node1->next;
				node1->next = node;
			}
		}

		// delete a node at a location
		bool Delete(Node<T>* node) {

		}

		// search for a value and return location of first, else -1
		int Search(T val) {

		}

	private:
		Node<T>* head;
		Node<T>* tail;
		unsigned int size;

};