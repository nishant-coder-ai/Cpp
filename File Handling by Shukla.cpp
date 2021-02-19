#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream obj;
    obj.open("Lexcrop.txt");
    obj<<"A Guy Opens his Door and get Shot ! ,\ndo you think out of me ?,\nNO !\nI am the One Who Knocks !!!!! \n\n Do you know what the Realm is ?\nits the Blood of Egens of thousand Enemies ,\nA Story we agreed to tell each other, over over and over untill we forget that it's lie.\nBut what do we have left once we aband in the lie? \nCHAOS !!\na gapping pit, wearing to sollow us all.\nCHAOS isn't Pit, CHAOS is a ladder.\nMany of you climb it Fail, Never Try to Climb again.\nFall Breaks Them! And Somehow given a chance to climb, But they Refuse , they clined to realm. ";
    obj.close();



    return 0;
}
