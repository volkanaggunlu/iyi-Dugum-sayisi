#include <stdio.h>
#include <stdlib.h>


struct dugum {
    int a;
    struct dugum* sol; // sol ağaç değeri için açılan dugum
    struct dugum* sag; //sağ ağaç değeri için açılan dugum
};


struct dugum* yeni_dugum(int a) {
    struct dugum* dugum = (struct dugum*)malloc(sizeof(struct dugum));// structtaki verilerin alaný kadar alan açýlýr.
    dugum->a = a;
    dugum->sol = NULL; // sol değer Null atandı.
    dugum->sag = NULL; // sağ deper Null atandı.
    return dugum;
}


int iyi_dugum_say(struct dugum* dugum) {// main içerisinde çağıralacak olan int tipinde fonksiyon.
    if (dugum == NULL) { // düğüm altında değer yoksa null gelir.
        return 0;
    }

    // Düğüm iyi ise 1 , değilse 0 döner.
    int iyi_dugum = (dugum->sol == NULL && dugum->sag == NULL) ? 1 : 0;

    // Sol ve sağ alt ağaçlardaki iyi düðümleri sayar
    return iyi_dugum + iyi_dugum_say(dugum->sol) + iyi_dugum_say(dugum->sag);
}

int main() {
   //6 elemanlı ikili ağaç.
    struct dugum* root = yeni_dugum(6); //kök değeri 6
    root->sol = yeni_dugum(7); // kökün sol tarafındaki değer 7
    root->sag = yeni_dugum(8); // kökün sağ tarafındaki değer 8
    root->sol->sol = yeni_dugum(9); // kökün sol tarafının sol tarafındaki değer 9
    root->sol->sag = yeni_dugum(10); // kökün sol tarafının sağ tarafındaki değer 10
    root->sag->sag = yeni_dugum(11); // kökün sağ tarafının sağ tarafındaki değer 11
  
    /*
            6
          /   \                     İKİLİ AĞACIN GÖRÜNTÜSÜ BU ŞEKİLDEDİR.
        7       8
       / \        \  
      9   10        11
    
    
    */
    int iyi_dugum = iyi_dugum_say(root);// int iyi_dugum verisi burada iyi_dugum_say fonksiyonu ile çalıştırılıp eşitlenecektir.
    printf("% d tane iyi dugum vardır.", iyi_dugum); // iyi düğüm sayısı da burada ekrana yazdırılır.
    
    return 0;
}

