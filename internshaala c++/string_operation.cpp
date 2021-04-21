#include <iostream>
#include <string>
using namespace std;
string getFullName(string firstName,string lastName){
    string fullName = firstName + " " + lastName; // helps in joining two strings.
    return fullName;
    // return firstName + " " + lastName;
}

int main(){

    string firstName = "Kartik";
    string lastName = "Singh";

    string fullName = getFullName(firstName,lastName);
    cout << fullName << endl;

    char letter = firstName[1];
    cout << letter << endl;

    int length =firstName.length();
    cout << length << endl; // works as strlen

    int result =firstName.compare(lastName);
    cout << result << endl; // works as strcmp

    firstName.append(" " + lastName + " " + "kk");
    cout <<firstName << endl; // works as strcat

    firstName= lastName +"Rahul" + "kk" +  "kushwah";
    cout << firstName << endl; // works as strcpy

    string names[]={"kartik", "singh", "kushwah"};
    cout << names[1] << endl;

    return 0;
}
