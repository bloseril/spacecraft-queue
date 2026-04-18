# spacecraft-queue
# 🚀 Spacecraft Queue Management System

## 📌 Proje Açıklaması
Bu proje, uzay istasyonlarına gelen ve ayrılan uzay araçlarını yönetmek için **FIFO (First-In-First-Out)** mantığıyla çalışan bir kuyruk (Queue) veri yapısının C++ ile implementasyonudur.

Sistem, uzay araçlarının istasyona geliş ve ayrılış sırasını yönetir ve farklı istasyonların kullanım yoğunluğunu karşılaştırır.

---

## ⚙️ Özellikler
- FIFO (Queue) veri yapısı implementasyonu
- Dinamik bellek kullanımı (dynamic array)
- `enqueue` (ekleme) ve `dequeue` (çıkarma) işlemleri
- Kuyruğun dolu/boş kontrolü (`isFull`, `isEmpty`)
- Aktif uzay araçlarının listelenmesi (`display`)
- Birden fazla uzay istasyonu oluşturabilme
- İstasyon kullanım yoğunluğu karşılaştırması

---

## 🧠 Kullanılan Konseptler
- Veri Yapıları (Queue - FIFO)
- Nesne Yönelimli Programlama (OOP)
- Dinamik bellek yönetimi
- Sınıf tasarımı (Class Design)

---

## 🏗️ Sınıf Yapısı

```cpp
class Queue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int servedCount;
    string name;

public:
    Queue(int capacity, string name);
    bool isFull();
    bool isEmpty();
    void enqueue(int spacecraft);
    void dequeue();
    void display();
    int getServedCount();
    string getName();
};
