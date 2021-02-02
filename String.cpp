#include<iostream>
#include<string>
using namespace std;

int main(){

    string name;
    name = "Nishant";
    string hat("NishantKum");
    cout<<name<<endl;
    cout<<hat<<endl;

    string mat;
    mat = name;         /// we can assign in this way.
    string cat;
    cat.assign(hat);    /// we can also assign in this way,
    cout<<mat<<endl;
    cout<<cat<<endl;
    cout<<"-----------------------------"<<endl;

    /// strings are actually the array of the Characters..
    string geeta = "Mathematics";
        ///         012345678910
    cout<<geeta.at(0)<<endl;
    cout<<geeta.at(1)<<endl;
    cout<<geeta.at(4)<<endl;

    for(int x = 0; x < geeta.length() ; x++){
        cout<<geeta.at(x);
    }
    cout<<endl;
    cout<<"-----------------------------"<<endl;
    ///              0123456789...........
    string sentence("Hi, This is Nishant .");
    cout<<sentence.substr(12, 8)<<endl;
    cout<<"-----------------------------"<<endl;

    ///  String Swapping ---------------->
    string one("SKY");
    string two("NET");
    cout<<one<<two<<endl;
    one.swap(two);
    cout<<one<<two<<endl;
    cout<<"-----------------------------"<<endl;
    /// to find in string
    string s1("ham is spam , oh yes i am!");
    ///        0123456789................
    cout<<s1.find("am")<<endl;                     /// this will return index , from where it starts , i.e 1.
    cout<<s1.rfind("am")<<endl;                   ///  it will find from right side..
    cout<<"-----------------------------"<<endl;
    /// Erase something
    ///            0123456789..............................
    string nature("Rose are Red, Sky is Blue , I love you :)");
    cout<<nature<<endl;

    nature.erase(0, 27);
    cout<<nature<<endl;
    cout<<"-----------------------------"<<endl;
   /// Replace Something...........
    cout<<nature<<endl;
    nature.replace(0, 1, "Nishant");
    cout<<nature<<endl;
    cout<<"-----------------------------"<<endl;
    /// insert something
    cout<<nature<<endl;
    nature.insert(20, " so much....");
    cout<<nature<<endl;

    return 0;
}
