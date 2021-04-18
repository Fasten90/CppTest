#include <iostream>

class TestClass
{
private:
    int private_val;
public:
    int public_val;

    // Constructor with default values
    // It can used for 0,1,2 given values!
    TestClass(int priv_val=0, int pub_val=0)
    {
        private_val = priv_val;
        public_val = pub_val;
        std::cout << "Constructor executed" << std::endl;
    }

    ~TestClass()
    {
        std::cout << "Destructor executed" << std::endl;
    }

    void Print()
    {
        std::cout << "Priv: " << private_val << std::endl << "Pub: " << public_val << std::endl;
    }

};


int main()
{
    TestClass created1;
    
    TestClass created2 = TestClass(1,2);
    
    created2.Print();
    
    return 0;
}

