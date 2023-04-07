#include <stdio.h>
#include <stdlib.h>


struct dugum {
    int a;
    struct dugum* sol;
    struct dugum* sag;
};


struct dugum* yeni_dugum(int a) {
    struct dugum* dugum = (struct dugum*)malloc(sizeof(struct dugum));// structtaki verilerin alanı kadar alan açılır.
    dugum->a = a;
    dugum->sol = NULL;
    dugum->sag = NULL;
    return dugum;
}


int iyi_dugum_say(struct dugum* dugum) {
    if (dugum == NULL) {
        return 0;
    }

    // İyi düğüm ise 1 , değilse 0 dönecektir.
    int iyi_dugum = (dugum->sol == NULL && dugum->sag == NULL) ? 1 : 0;

    // Sol ve sağ alt ağaçlardaki iyi düğümleri sayar
    return iyi_dugum + iyi_dugum_say(dugum->sol) + iyi_dugum_say(dugum->sag);
}

int main() {
   //6 elemanlı bir ikili ağaç oluşturulur.
    struct dugum* root = yeni_dugum(6); //kök değeri 6
    root->sol = yeni_dugum(7);
    root->sag = yeni_dugum(8);
    root->sol->sol = yeni_dugum(9);
    root->sol->sag = yeni_dugum(10);
    root->sag->sag = yeni_dugum(11);

    
    int iyi_dugum = iyi_dugum_say(root);
    printf("% d tane iyi dugum vardır.", iyi_dugum);

    return 0;
}

