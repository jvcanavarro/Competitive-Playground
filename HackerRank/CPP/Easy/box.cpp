#include<bits/stdc++.h>

using namespace std;

class Box{
    int l, b, h;

public:
    Box() {
        l = b = h = 0;
    }
    Box(int l, int b, int h) {
        this -> l = l;
        this -> b = b;
        this -> h = h;
    }

    Box(const Box &box){
        l = box.l;
        b = box.b;
        h = box.h;
    }

    friend ostream& operator<< (ostream& os, const Box& B);
    friend bool operator< (const Box &b1, const Box &b2);
    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }
    long long CalculateVolume() {
        return  (long long) l * (long long) b * (long long) h;
    }
};

bool operator< (const Box &a1, const Box &b1) {
    return (a1.l < b1.l || (a1.b < b1.b && a1.l == b1.l) || (a1.h < b1.h && a1.b == b1.b && a1.l == b1.l));
}
ostream& operator<<(ostream& os, const Box& B) {
    os << B.l << ' ' << B.b << ' ' << B.h;
    return os;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
