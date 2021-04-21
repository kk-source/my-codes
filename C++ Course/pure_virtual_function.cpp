#include <iostream>
using namespace std;

class CWH{//abstract base class.
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0; // pure virtual function.
};
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    
class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
      void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};
int main(){
    CWHText s("kk", 3.4, 23);
    s.display();
    CWHText *bp=new CWHText("mmm", 2, 34);
    bp->display();
    // cannot make objects of abstract base class.
    // abstract class must have atleast one pure virtual function.
    // pure virtual function has to be overridden in the child class else derived class also becomes abstract class.
    // abstract class can have constructors which can be called by its derived class using concept of constructors in derived class.
    // We can have pointers and references of abstract class type.
    return 0;
}

