#include <iostream>

using namespace std;

class Dog {
private:
    int age;
    string name;
    bool hasOwner;
    string breed;   
public:
    int getAge() {
        return age;
    }
    void setAge(int _age) {
        age = _age;
    }
    string getName() {
        string name;
    }
    void setName(string _name) {
        name = _name;
    }
    bool gethasOver() {
        return hasOwner;
    }
    void sethasOver(bool _hasOwner) {
        hasOwner = _hasOwner;
    }
    string getBreed() {
        return breed;
    }
    void setBreed(string _breed) {
        breed = _breed;
    }
    
    Dog(int _age, const string& _name, bool _hasOwner, const string& _breed) :
        age(_age), name(_name), hasOwner(_hasOwner), breed(_breed) {}
};

class Node {
public:
    Dog* data;
    Node* next;

    Node(Dog* _data) : data(_data), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(Dog* dog) {
        
    }

    void display() {
        // Lógica de visualización aquí
    }
};

int main() {
    LinkedList dogList;
    dogList.insert(new Dog(3, "Buddy", true, "Golden Retriever"));
    dogList.insert(new Dog(2, "Max", false, "Labrador"));
    dogList.insert(new Dog(5, "Lucy", true, "Poodle"));

    cout << "List of Dogs:" << endl;
    dogList.display();

    return 0;
}