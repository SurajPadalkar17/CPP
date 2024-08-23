#include <iostream>
#include <cstring>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()=0;
    
};
class video : public cwh
{
    int videolength;

public:
    video(string s, float r, int vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amaing video" << title << endl;
        cout << "Ratings :" << rating << "Out of 5 stars" << endl;
        cout << "lenght pf video is :" << videolength << "min" << endl;
    }
};
class text : public cwh
{
    int words;

public:
    text(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    // void display()
    // {
    //     cout << "This is an amaing txt" << title << endl;
    //     cout << "Ratings for text:" << rating << "Out of 5 stars" << endl;
    //     cout << "lenght pf video is :" << words << "min" << endl;
    // }    
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for video
    title = "kjbsdbfjsfbsdhfsdf";
    vlen = 4.5;
    rating = 4.89;
    video dj(title, rating, vlen);
    dj.display();

      // for text
    title = "kjbsdbfjsfbsdhfsdf";
    vlen = 4.5;
    rating = 4.89;
    video text(title, rating, vlen);
    text.display();

    cwh * tuts[2];
    tuts[0]= &dj;
    tuts[1] = &text;

    tuts[0] ->display();
    tuts[1] ->display();



    return 0;
}