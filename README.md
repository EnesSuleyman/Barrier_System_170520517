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

![kapalı1](https://user-images.githubusercontent.com/67148688/172067933-2bbf043a-5a0a-4875-b097-8265986cd075.jpg)


Bu durumda Labview arayüzünde gözükecek olan durum aşağıdaki gibidir

![1](https://user-images.githubusercontent.com/67148688/172067954-cf29cd87-633c-447e-925a-82c1a430901f.jpg)


   **DURUM 2 :** Aracımızın konumunun sensöre olan uzaklığının 20cm'den küçük olup bariyer sisteminin açılması.

![açık](https://user-images.githubusercontent.com/67148688/172067966-17c52e75-5ca4-4a0d-a7e6-dcbd23d4ed8f.jpg)


Sensöre olan uzaklığımız 17cm olmasından ötürü bariyerimiz açılacaktır. Labview'de gözükecek olan arayüzümüz aşağıdaki gibi olacaktır.

![2](https://user-images.githubusercontent.com/67148688/172067977-0b26f16e-c480-4d09-8c0b-e13fc85da5ba.jpg)

