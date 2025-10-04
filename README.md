# KONSOL TABANLI BASİT HESAP MAKİNESİ

## Proje Açıklaması
Bu proje, kullanıcıların konsol üzerinden çeşitli matematiksel işlemler yapabilmesini sağlayan basit bir hesap makinesidir. Kullanıcı; toplama, çıkarma, çarpma, bölme, ortalama hesaplama, karekök ve kuvvet alma işlemlerini seçebilir. Her işlemden sonra kullanıcıya başka bir işlem yapmak isteyip istemediği sorulur ve eğer "E/e" cevabı verilirse işlem menüsüne geri dönülür. Program, "H/h" ile çıkmak istediğinde kullanıcıya teşekkür mesajı gösterip kısa bir süre bekledikten sonra kapanır.

## Özellikler
- İstenildiği kadar sayı ile toplama ve çarpma işlemi yapılabilir.
- Bölme işlemi float olarak yapılır.
- Ortalama hesaplama, girilen sayı adedine göre dinamik olarak yapılır.
- Sayıların karekökü hesaplanabilir, kuvvet alma işlemleri yapılabilir.
- Çıkışlarda kullanıcıya teşekkür mesajı sunulur.
- İşlem sonrası menüye geri dönebilmek için program döngü içinde yürütülür.

## GELİŞTİRME VE SÜRÜM NOTLARI

### Başlangıç - Toplama ve Çıkarma İşlemleri
**Tarih:** 03.10.2025  
İlk olarak basit toplama ve çıkarma işlemleri eklendi.  
Kullanıcıdan alınacak girdi sayısı 2 olarak belirlendi.

### Çarpma ve Bölme İşlemleri
**Tarih:** 03.10.2025  
Çarpma ve bölme işlemleri eklendi.  
Bölme sonucunda tam kısım ve kalan kısım ayrı ayrı gösterildi.  
Bölme sonuçlarının kullanıcıdan alınan sayılara göre bölenin 0 olması durumunda tanımsız, bölen ve bölünenin birlikte 0 olması durumunda belirsiz olması ayarlandı.

### Ortalama Hesaplama
**Tarih:** 03.10.2025  
Ortalama hesaplama eklendi.

### Karekök Hesaplama, Bir Sayının Kuvvetini Alma ve Diğer Geliştirmeler
**Tarih:** 04.10.2025  
Karekök hesaplama ve kuvvet alma işlemleri eklendi.  
Kullanıcının istediği kadar sayı girebilmesi için toplama/çarpma/ortalama işlemlerinde `do-while` döngüsü kullanıldı.  
Çıkarma ve bölme işlemleri 2 sayı ile sınırlandırıldı.  
Karekök hesaplama işlemi tek sayı ile sınırlandırıldı.  
Kuvvet alma işlemleri, kullanıcıdan taban ve üs alınarak gerçekleştirilecek şekilde ayarlandı.  
Karekök hesaplama işlemlerinde negatif sayılar için uyarı mesajı eklendi.

### İşlem Menüsü ve Döngü Ayarlarında Düzenlemeler
**Tarih:** 04.10.2025  
Menü while döngüsüne alındı, kullanıcının "E/e" ile tekrar menüye dönebilmesi ayarlandı.  
"H/h" ile çıkış yapıldığında teşekkür mesajı sunulup 3 saniye bekleme ayarlandı.

### Birtakım İyileştirmeler ve Hataların Giderilmesi
**Tarih:** 04.10.2025  
Çarpma işlemlerinde sonuçlar hatalı ve çok büyük değerler alıyordu, `multipleNumbers` doğru şekilde başlatılarak giderildi. (1 olarak)  
Ortalamanın hesaplanması için sayıların toplamı ve sayı miktarı dinamik şekilde işlendi. (`sumNumbers` ve `count` kullanıldı)  
Bölme sonuçları sadece float ile görüntülenecek şekilde ayarlandı.  
`system("cls")` ile her işlemden sonra ekran temizlendi.
Çarpma işlemlerinde kullanıcıdan alınan sayılardan en az 2 tanesinin sıfır olması durumunda sonucun belirsiz olması ayarlandı.

### Kullanım Notları ve Tavsiyeleri
- Program `.exe` olarak çalıştırıldığında, doğrudan çift tıklamak yerine CMD üzerinden çalıştırılması önerilir.  
- Aksi takdirde bazı bilgisayarlarda işlemden sonra konsol hemen kapanabilir.  
- Konsolun kapanmasını engellemek veya geç kapanması için `getch()` ve `Sleep()` fonksiyonları kullanılmıştır.

## Proje Bilgileri
**Geliştirici:** berkevnl
