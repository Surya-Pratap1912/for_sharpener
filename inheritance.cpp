#include<iostream>
using namespace std;

//creating base class
class rect
{
    private:
    int len,bre;
    public:
    rect(int l=1,int b=1);
    rect(rect &r);
    
    int getlen(){return len;}
    int getbre(){return bre;}

    void setlen(int l);
    void setbre(int b);
    int area();
    int perim();
    bool is_square();    
};

class cuboid: public rect{
    private:
    int hi;
    public:
    cuboid (int h=1)
    {
        hi=h;
    }
    int gethi(){return hi;}
    void sethi(int x){hi=x;}
    int volume() {return hi* area();}
};

// scope resoluted function of rect class

rect :: rect(int l,int b)
{
    len=l;
    bre=b;
}

rect :: rect( rect &r)
{
    len= r.len;
    bre= r.bre;
}

void rect:: setlen( int x)
{
    len= x;
}

void rect :: setbre(int x)
{
    bre= x;
}

int rect :: area()
{
    return len* bre;
}

int rect :: perim ()
{
    return ( len + bre )*2;
}

bool rect :: is_square()
{
    return len==bre;
}


// constructors in inheritance

class base
{
    public:
    base()
    {
        cout<< "default of base class "<<endl;
    }
    base (int x)
    {
        cout<<"param of base with "<<x<<endl;
    }
};

class derive : public base
{
    public:

    derive()
    {
        cout<<"default of derive"<<endl;
    }

    derive(int x)
    {
        cout<<"param of derive with "<<x<<endl;
    }

    derive (int x,int l) : base (x)
    {
        cout<<"param of derive along with param of base \n \n derive with "<<l<< " base with "<<x<<endl;
    }
};

int main()
{
    // cuboid c(5);
    // cout<<c.volume()<<endl;

    // c.setlen(4);
    // c.setbre(6);
    // cout<<c.perim()<<endl;
    // cout<<c.volume();


    // constructors in inheritance

    cout<<"on d;"<<endl<<endl;
    derive d;

    cout<< endl<<endl;

    cout<<"on c(5);"<<endl<<endl;

    derive c(5);

    cout<< endl<<endl;

    cout<<"on b(2,5);"<<endl<<endl;

    derive b(2,5);

    cout<< endl<<endl;



return 0;
}


