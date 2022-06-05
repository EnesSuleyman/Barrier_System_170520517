### ***LABVİEW VE ARDUİNO İLE BARİYER SİSTEMİ TASARIMI***

-   **AD:** *ENES SÜLEYMAN*

-   **SOYAD:** *ÖZKAN*

-   **NO:** *170520517*

-   **AMAÇ:** Şirket içinde bulunan araçların otoparka girişini kontrol etmek amacıyla oluşturulmuştur.

| \- KULLANILAN ARAÇLAR    | \- MİKTAR |
|--------------------------|-----------|
| *Breadboard*             | 1         |
| *Arduino UNO*            | 1         |
| *HC-SR04 MESAFE SENSÖRÜ* | 1         |
| *SERVO MOTOR*            | 1         |

-   **UYGULANIŞ :** Şirket otoparkı içinde bulunan araçların otoparka girişlerini gözlemlemek için tasarlanmıştır. Tasarlanan bu uygulamada aracın sensöre olan uzaklığı ile bariyer sistemi açılıp kapanmaktadır. Sensöre olan uzaklık 20cm altına düştüğü zaman bariyerimiz otomatik olarak açılmakta ve güvenlik merkezine uyarı gönderilmektedir.

-   **KURULAN DEVRE**

   ![4](https://user-images.githubusercontent.com/67148688/172067904-a8dac125-038f-46ab-9534-68246c10138e.jpeg)


-   **OLUŞABİLECEK DURUMLAR**

    **DURUM 1:** Aracımızın konumunun sensöre olan uzaklığının 20cm'den büyük olup bariyer sisteminin açılmaması.

![bariyer_kapalı](images/kapal%C4%B11.jpg)

Bu durumda Labview arayüzünde gözükecek olan durum aşağıdaki gibidir

![kapalı](images/1-02.jpg)

**DURUM 2 :** Aracımızın konumunun sensöre olan uzaklığının 20cm'den küçük olup bariyer sisteminin açılması.

![açik1](images/a%C3%A7%C4%B1k.jpg)

Sensöre olan uzaklığımız 17cm olmasından ötürü bariyerimiz açılacaktır. Labview'de gözükecek olan arayüzümüz aşağıdaki gibi olacaktır.

![lab2](images/2.jpg)
