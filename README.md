# 🚀 Data Structures in C++ Track

[![Language](https://img.shields.io/badge/Language-C++14-blue.svg?logo=cplusplus)](https://isocpp.org/)
[![Course](https://img.shields.io/badge/Instructor-Eng.%20Adel%20Nasim-red.svg?logo=youtube)](https://www.youtube.com/playlist?list=PLCInYL3l2AajqOUW_2SwjWeMwf4vL4RSp)
[![Progress](https://img.shields.io/badge/Track%20Progress-Day%2001%20Completed-brightgreen.svg)]()
[![License](https://img.shields.io/badge/License-MIT-purple.svg)]()

مستودع توثيق رحلتي في دراسة وتطبيق **هياكل البيانات (Data Structures)** باستخدام لغة **C++**، مبني بالتطبيق العملي من الصفر وراء محاضرات البشمهندس **عادل نسيم**، على غرار تراكات ومشاريع مبادرات التدريب التقني (مثل NTI / ITI).

يتم تحديث المستودع بشكل يومي تراكمي مع إنجاز كل موضوع.

---

## 📅 سجل التقدم اليومي (Daily Track Log)

| اليوم | الموضوع | المخرجات والتاسكات | ملخص المذاكرة | الحالة |
| :---: | :--- | :--- | :---: | :---: |
| **Day 01** | **Complexity (Big-O) & Array-Based Stack** | [`Task01_Stack_Array.cpp`](./Day01_Stack_and_Complexity/tasks/Task01_Stack_Array.cpp) | [قراءة الملخص الشامل](./Day01_Stack_and_Complexity/notes/my_notes.md) | ✅ **مكتمل** |

> ⏳ *سيتم إضافة أيام التراك التالية تباعاً فور الانتهاء منها يوم بيوم.*

---

## 🌟 ملخص ما تم إنجازه في اليوم الأول (Day 01 Breakdown)

### 1️⃣ المفاهيم النظرية وتحليل الأداء (Complexity & Big-O):
* **تعريف هيكل البيانات:** أساليب تنظيم وتخزين البيانات في الذاكرة لتسهيل عمليات (`Access, Search, Insert, Delete`).
* **سرعة وصول المصفوفة $O(1)$:** معادلة حساب عنوان الذاكرة المباشر $\text{Base} + (\text{Index} \times \text{Size})$.
* **تحليل التعقيد البرمجي:**
  * الفرق بين التعقيد الزمني (`Time Complexity`) والتعقيد المكاني (`Space Complexity`).
  * حالات قياس الأداء: أفضل حالة ($\Omega$)، أسوأ حالة ($O$)، ومتوسط الحالات ($\Theta$).
* **كيفية حساب الـ Big-O:**
  * العمليات البسيطة والشروط = $O(1)$.
  * الحلقات الفردية = $O(n)$.
  * الحلقات المتداخلة = $O(n^2)$.
  * تضاعف العداد بالضرب والقسمة = $O(\log n)$.
  * المقارنة العملية بين اللوب $O(n)$ وقانون جاوس الرياضي لمجموع الأعداد $O(1)$.

### 2️⃣ هيكل بيانات المكدس (Array-Based Stack ADT):
* فهم وتطبيق مبدأ **`LIFO`** (`Last In, First Out`).
* بناء `Stack Class` من الصفر باستخدام الـ `Templates` ليدعم مختلف أنواع البيانات (`Generic Stack`).
* برمجة دوال الـ Stack الأساسية:
  * `push(val)` مع معالجة حالة فيضان الذاكرة (**Stack Overflow**).
  * `pop()` و `pop(element)` مع معالجة حالة فراغ الستاك (**Stack Underflow**).
  * `peek() / getTop(element)` لقراءة العنصر في القمة.
  * `isEmpty()` و `isFull()` و `print()`.

---

## 📁 هيكل ملفات اليوم الأول (Day 01 Structure)

```text
├── README.md                                 # الدليل التعريفي وسجل الإنجاز اليومي
├── CMakeLists.txt                            # إعدادات البناء لبرنامج CLion
├── .gitignore                                # فلترة ملفات البناء المؤقتة ومخلفات الـ IDE
├── main.cpp                                  # مساحة التجربة والتطبيق العملي
│
└── Day01_Stack_and_Complexity/
    ├── README.md                             # تفاصيل فيديوهات اليوم الأول (#00 إلى #03)
    ├── tasks/
    │   └── Task01_Stack_Array.cpp            # كود التاسك العملي المبني بالـ Templates
    └── notes/
        └── my_notes.md                       # الملخص الأكاديمي والرسومات التوضيحية
```

---

## 🛠️ كيفية التشغيل في بيئة CLion

1. افتح المشروع في برنامج **CLion**.
2. اضغط على **"Reload CMake Project"** للتأكد من قراءة الأهداف.
3. من القائمة المنسدلة العلوية (بجانب زر التشغيل الأخضر ▶️):
   * اختر `main` لتشغيل ملف التجربة المباشرة.
   * أو اختر `Day01_Task01_Stack_Array` لتشغيل واختبار تاسك اليوم الأول.
4. اضغط **Run** أو اختصار `Shift + F10`.
