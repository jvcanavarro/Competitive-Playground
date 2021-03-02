#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student {
    vector<int> scores;

    public:
    void input() {
        for (int i = 0; i < 5; i++) {
            int a;
            cin >> a;
            scores.push_back(a);
        }
    };
    int calculateTotalScore() {
        int sum = 0;
        for (auto score: scores) {
            sum += score;
        }
        return sum;
    }
};

int main() {
    int n;
    cin >> n;
    Student *s = new Student[n];

    for(int i = 0; i < n; i++){
        s[i].input();
    }


    int kristen_score = s[0].calculateTotalScore();


    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }


    cout << count;

    return 0;
}
