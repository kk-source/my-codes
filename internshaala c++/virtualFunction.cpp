#include <iostream>
#include <new>
using namespace std;

class Animal {

	public:
		virtual void sound() {
			cout << "Animal class: making sound" << endl;
		}

		virtual void sleep() {
			cout << "Animal class: sleeping" << endl;
		}
};

class Dog : public Animal {

	public:
		virtual void sound() { // or don't write virtual because it will be implicitly virtual. 
			cout << "Dog class: bow-bow" << endl;
		}

		virtual void sleep() { // or don't write virtual because it will be implicitly virtual.
			cout << "Dog class: sleeping" << endl;
		}
}; 


int main() {

    Animal animal;

	Dog dog;		// dog --> Dog object
	dog.sound();
	dog.sleep();

    Animal *anim = &dog;		// anima --> Dog object
	anim->sound();
	anim->sleep();

    Animal *anima = &animal;		// anima --> Dog object
	anima->sound();
	anima->sleep();

	return 0;
}