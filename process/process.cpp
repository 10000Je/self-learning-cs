#include <cstdio>
#include <unistd.h>
using namespace std;

void foo() {
    printf("execute foo\n");
}

void bar() {
    printf("execute bar\n");
}

void baz() {
    printf("execute baz\n");
}

int main()
{
    if(fork()==0) {
        if(fork()==0) {
            foo();
        }
        else {
            bar();
        }
    } else {
        baz();
    }
    return 0;
}