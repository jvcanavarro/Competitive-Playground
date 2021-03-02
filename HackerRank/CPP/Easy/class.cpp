#include <bits/stdc++.h>

using namespace std;

class Student {
    int age, standard;
    string fn, ln;
    public:
    void set_age(int age) { this -> age = age; } ;
    int get_age() { return age; } ;
    void set_standard(int standard) {this->standard = standard; } ;
    int get_standard() {return standard; } ;
    void set_first_name(string fn) {this -> fn = fn; } ;
    string get_first_name() {return fn; } ;
    void set_last_name(string ln) {this -> ln = ln; } ;
    string get_last_name() {return ln; } ;
    string to_string() {
        stringstream ss;
        ss << age << "," << fn << "," << ln << "," << standard;
        return ss.str();
    } ;
} ;

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
