#ifndef DSList_H
#define DSList_H

/**
 * @brief Singly-linked list that uses positions and has a stack interface
 *
 * Implement all described functions and provide a test program using CATCH2
 *
 * @tparam Object
 */
template <typename Object>
class DSList
{
private:
    /**
     * @brief The nested Node data structure
     *
     * struct is in C++ a class with all public members
     */
    struct Node
    {
        Object data;
        Node *next;

        Node(const Object &d = Object{}, Node *n = nullptr)
            : data{d}, next{n} {};
    };

    Node *head;

public:
    // You need to implement at least:
    // Default constructor
    DSList<Object>()
    {
        head = nullptr;
    };

    // Rule-of-3
    // destructor
    ~DSList<Object>()
    {
        Node *iterator = head;
        while (iterator != nullptr)
        {
            Node *prevNode = iterator;
            iterator = iterator->next; // sets iterator to point to the next node
            delete prevNode;
        }
    };

    // copy constructor
    DSList<Object>(const DSList &original)
    {
        head = nullptr;
        Node *iterator = original.head;
        Node *prevNode = nullptr;
        while (iterator != nullptr)
        {
            Node *currNode = new Node();
            currNode->data = iterator->data;

            if (prevNode != nullptr)
            {                              // if prevNode exists
                prevNode->next = currNode; // links the list together
            }
            else
            {
                head = currNode; // when we copy the first node, we set the head equal to currNode
            }

            iterator = iterator->next;
            prevNode = currNode;
        }
    };

    // assignment operator
    DSList<Object> &operator=(const DSList &original)
    {

        Node *iterator = head;
        while (iterator != nullptr)
        {
            Node *prevNode = iterator;
            iterator = iterator->next; // sets iterator to point to the next node
            delete prevNode;
        }

        head = nullptr;
        iterator = original.head;
        Node *prevNode = nullptr;
        while (iterator != nullptr)
        {
            Node *newNode = new Node();
            newNode->data = iterator->data;

            if (prevNode != nullptr)
            {
                prevNode->next = newNode; // links the list together
            }
            else
            {
                head = newNode;
            }

            iterator = iterator->next;
            prevNode = newNode;
        }

        return *this;
    };

    bool operator==(const DSList<Object> &rhs) const { //== comparison operator
        Node *iterator1 = head;
        Node *iterator2 = rhs.head;
        
        while (iterator1 != nullptr && iterator2 != nullptr)
        {
            if(iterator1->data != iterator2->data)
                return false;
            iterator1 = iterator1->next;
            iterator2 = iterator2->next;
        }

        if(iterator1 == nullptr && iterator2 == nullptr)
            return true;
        else if(iterator1 != nullptr && iterator2 == nullptr)
            return false;
        else if(iterator1 == nullptr && iterator2 != nullptr)
            return false;

        return true;
    }

    // size
    size_t size() const
    {
        Node *iterator = head;
        size_t size = 0;
        while (iterator != nullptr)
        {
            size++;
            iterator = iterator->next;
        }

        return size;
    }

    // is the list empty?
    bool empty()
    {
        if (head == nullptr)
            return true;
        return false;
    }
    // clear the whole list
    void clear()
    {
        // destory everything
        Node *iterator = head;
        while (iterator != nullptr)
        {
            Node *prevNode = iterator;
            iterator = iterator->next; // sets iterator to point to the next node
            delete prevNode;
        }

        // reset it bk to default
        head = nullptr;
    }

    // find an element with a specific value (and return the position. First element in list is pos 0). Not found returns -1.
    size_t findElement(Object &element)
    {
        Node *iterator = head;
        size_t position = 0;
        while (iterator != nullptr)
        {
            if (iterator->data == element)
            {
                return position;
            }
            iterator = iterator->next;
            position++;
        }

        return std::string::npos;
    }

    // insert at the beginning of the list (push_front).
    void push_front(Object newValue)
    {
        if (head == nullptr)
        {
            Node *newNode = new Node();
            newNode->data = newValue;
            head = newNode;
        }
        else
        {
            Node *newNode = new Node();
            newNode->data = newValue;
            newNode->next = head;
            head = newNode;
        }
    }

    // insert at the end of the list (push_back).
    void push_back(Object newValue)
    {
        if (head == nullptr)
        {
            Node *newNode = new Node();
            newNode->data = newValue;
            head = newNode;
        }
        else
        {
            Node *iterator = head;
            Node *newNode = new Node();
            newNode->data = newValue;
            while (iterator->next != nullptr)
            {
                iterator = iterator->next;
            }
            iterator->next = newNode; // accesses the last node
        }
    }

    // remove the first element(pop_front)
    void pop_front()
    {

        if (head == nullptr)
        {
            std::cerr << "No elements to remove" << std::endl;
        }
        else
        {
            Node *prevNode = head;
            head = head->next; // sets iterator to point to the next node
            delete prevNode;
        }
    }

    // remove the last element (pop_back)
    void pop_back()
    {
        if (head == nullptr)
            std::cerr << "No elements to remove" << std::endl;
        if (head->next == nullptr)
        { // if there's only one node in the list
            delete head;
            head = nullptr;
        }
        else
        {
            Node *iterator = head;
            Node *prevNode = nullptr;

            while (iterator->next != nullptr)
            {
                prevNode = iterator;
                iterator = iterator->next;
            }
            delete iterator;
            prevNode->next = nullptr;
        }
    }

    Object &front() //returns head node data
    {
        if (head == nullptr)
            std::cerr << "List is empty" << std::endl;
        else
            return head->data;
    }

    Object &back() //returns last node data
    {
        if (head == nullptr)
            std::cerr << "List is empty" << std::endl;
        else
        {
            Node *iterator = head;

            while (iterator->next != nullptr)
            {
                iterator = iterator->next;
            }

            return iterator->data;
        }
    }
};

#endif
