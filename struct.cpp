#include <stdio.h>
struct st {
    int a;
    int b;
};

int main() {
    struct st hello = {2, 15};
    printf("%d", hello.b);
    return 0;
}
