#ifndef buzzer_h // tanımlayıcı kutuphane ismimiz motor
#define buzzer_h
 
class istiklal{  //motorclass isminde class oluşturuyoruz
  public: // heryerden erişilebilir olması için public
    motorclass(); //motorclass isminde fonksiyon oluşturuyoruz
    void SETUP();  //setup isminde fonksiyon oluşturuyoruz
    void HIZ(int motor_hizi); // hız fonksiyonu
};
 
extern motorclass motor; // aynı değişkeni farklı dosyalarda kullanmak için
 
#endif
