#include<iostream>

using namespace std;

class Nana{
    private:
        int price;
    public:

        Nana(){
            price =0;
        }
    friend void nanafriend(Nana);
};
void nanafriend(Nana nanaobj){
    nanaobj.price = 99;
    cout<<nanaobj.price<<endl;
}

int main(){
    Nana n1;
    nanafriend(n1);
    return 0;
}
