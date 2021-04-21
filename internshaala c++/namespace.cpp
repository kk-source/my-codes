#include <iostream>
using namespace std;

    namespace jp {

        namespace kk{ // nested namespace.
            int value=2;
        }
        namespace kk1{
            int value=3;
        }
        
        class Animal { // class in namespace.
            public:
            int age=1;
            string color="black";
            void sleep(){
                cout << "Animal class 1: sleeping" << endl;
            }
        };
	float dollarValue = 108;	// 1 USD = 108 Japanese Yen // variable in namespace.

	double toDollars(float currencyUnits) { // functions in namespace.
		return currencyUnits / dollarValue;
	}
} // no need of semicolon.

namespace cn {

    class Animal {
        public:
            int age=2;
            string color="white";
            void sleep(){
                cout << "Animal class 2: sleeping" << endl;
            }
        };

	float dollarValue = 7;		// 1 USD = 7 Chinese Yuan

	double toDollars(float currencyUnits) {
		return currencyUnits / dollarValue;
	}
}

int main() {

	cout << "1 USD = " << jp::dollarValue << " Yen" << endl;
	cout << "1 USD = " << cn::dollarValue << " Yuan" << endl;

	cout << "8960 Yen = " << jp::toDollars(8960) << " USD" << endl;
	cout << "610 Yuan = " << cn::toDollars(610) << " USD" << endl;
    
    cout << jp::kk::value << endl << jp::kk1::value <<endl;
    jp::Animal kk;
    cout << kk.age << endl;

	return 0;
} 