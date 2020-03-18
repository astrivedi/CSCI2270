class AddressBook {
    private:
        Address* book;
        int size;
        int capacity;
    public:
        AddressBook() { book = new Address[100]; size = 0; capacity = 100;}
        ~AddressBook() {delete[] book;}
        void insert(int _name, int _id) {
            if (size < capacity) {
                Address* a = new Address();
                a.name = _name;
                a.id = _id;
                book[size] = a;
            }
        }

};
