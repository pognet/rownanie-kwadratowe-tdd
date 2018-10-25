#include <stdio.h>

#define TEST





#ifdef TEST

void nd(int licznik) { printf("Test nr %i nie działa\n", licznik); }

// tutaj należy umieszczać kolejne testy


void run_test_pool() {
    int licznik = 0;
// tutaj wywołujemy testy


}

#endif


int main() {

#ifndef TEST
    // uruchom program


#else
    // uruchom testy
    run_test_pool();

#endif

    return 0;
}