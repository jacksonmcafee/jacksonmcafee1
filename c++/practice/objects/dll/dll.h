template <typename T>
class DLL<T> {
    struct Node {
        T val;
        Node* next, prev;

        Node(T temp) {
            val = temp;
            next = prev = nullptr;
        }
    };

    private:
        Node<T>* head, tail;
        unsigned int size;

    public:
        DLL() {
            
        }

        // insert at front of list
        bool insertFront(T val) {
            // create new head node
            Node node = new Node(val);

            // direct nodes
            
        }
}