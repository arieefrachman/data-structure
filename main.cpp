#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
    char x;
};

int main() {
    int a = 10;
    int *p;

    p = &a;

    cout<<p;

    return 0;
}

void arr(){
    int n;
    cout<<"Input a size:";
    cin>>n;

    int A[n];

}

static void structure(){
    struct Rectangle r1 = {10, 5};
    printf("%lu", sizeof(r1));
}
