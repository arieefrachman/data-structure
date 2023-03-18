#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
    char x;
};

void reference(){
    int a = 10;
    int &ref = a;

    int b = 30;

    ref = b;
    cout<<ref<<endl<<a<<endl;
}

void ptrToStruct(){

}

void pointer(){
    int a = 10;
    int *p;

    printf("using pointer: %d\n", *p);
    a++;
    printf("using pointer: %d\n", *p);

    int Arr[2] = {1,2};
    int *ptr;

    ptr = Arr;

    // create memory allocation on heap with C style
    int *c;
    c = (int *)malloc(3 * sizeof(int));

    // create memory allocation on heap with C++ style
    int *d;
    d = new int[3];

    c[0] = 1; c[1] = 2; c[2] = 10;
    d[0] = 1; d[1] = 2; d[2] = 10;

    // free memory C style
    free(c);

    // free memory using C++ style
    delete [ ] d;

    int *p1;
    char *p2;
    float  *p3;
    double *p4;
    struct Rectangle *p5;

    /*cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;*/

}

int main() {
    ptrToStruct();
    return 0;
}

void arr(){
    int n;
    cout<<"Input a size:";
    cin>>n;

    int A[n];

}

void structure(){
    struct Rectangle r1 = {10, 5};
    printf("%lu", sizeof(r1));
}
