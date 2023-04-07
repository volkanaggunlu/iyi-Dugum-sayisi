yeni_dugum fonksiyonu, bir düğüm oluşturmak için kullanılır.
 Yeni bir düğüm oluşturulur, data değeri atanır ve sol ve sağ düğümler NULL olarak ayarlanır.

iyi_dugum_say fonksiyonu, verilen düğümdeki iyi düğümleri saymak için özyinelemeli bir şekilde kullanılır.
 İlk olarak, düğümün sol ve sağ alt düğümleri kontrol edilir.
 Eğer her iki alt düğüm NULL ise, o zaman bu bir iyi düğümdür ve iyi_dugum değişkeni 1 olur.
. Aksi takdirde, bu bir iyi düğüm değildir ve iyi_dugum 0 olur.

 Sol ve sağ alt ağaçları için iyi_dugum_say fonksiyonu özyinelemeli olarak çağrılır
 ve bu fonksiyonların döndürdüğü iyi düğüm sayısı ile goodNode değişkeni toplanarak, toplam iyi düğüm sayısı elde edilir.

main fonksiyonu, örnek bir ağaç oluşturur ve countGoodNodes fonksiyonunu çağırarak, iyi düğümleri sayar. Sonuç ekrana yazdırılır.
Algoritma ağacın tüm alt düğümlerinindeki değerleri kontrol eder ve iyi düğümleri sayar. Sonuçta da iyi düğümlerin sayısı kontrol edilir.
Kod Dev C++ uygulamasında yazılmıştır ve hazır durumdadır test için yanlızca derlenip çalıştırılması yeterlidir. Sonuç ekranda çıkacaktır.
