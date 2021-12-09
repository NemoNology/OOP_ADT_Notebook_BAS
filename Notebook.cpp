#include <iostream>
#include <exception>
#include <string>

// Я - Александр Банковский Сергеевич.
// Одно из доказательств - то, что эти файлы лежат в репозитории
// OOP_ADT_Notebook_BAS в github.com пользователя
// NemoNology - меня!
// И я не думаю, что кто-то, кроме меня, выбрал АТД Тетрадь...




using namespace std;





// todo: Закончи класс
class Notebook {

public:                 // Создание множеств для класса Notebook


    
    enum class Markup_T {         // Тип разметки

        Checkered,          // В клетку
        In_Line,            // В линию  
        Without_Markup,     // Без разметки
        Another             // Другой

    };

    enum class Paper_M {          // Материал бумаги\листов

        EAC,                // ГОСТ
        Another             // Не ГОСТ

    };


private:                // Поля класса

    Markup_T Markup_Type;                   // Тип разметки
    unsigned short Number_of_Sheets;        // Кол-во листов
    string Manufacturer;                    // Производитель
    Paper_M Paper_Material;                 // Материал бумаги\листов
    unsigned short Size_of_Page;            // Размер страницы (А5, например)   

public:                 // Методы класса

    Notebook() {                            // Конструктор

        Markup_Type = Markup_T::Without_Markup;
        Number_of_Sheets = 0;
        Manufacturer = "Unknown";
        Paper_Material = Paper_M::EAC;
        Size_of_Page = 5;

    };

//Setters:

    // Set Тип разметки
    void Set_Markup_Type(Markup_T t) {

        this->Markup_Type = t;

    };

    // Set Кол-во листов
    void Set_Number_of_Sheets(const unsigned short &n) {

        if (n == 0) {

            throw invalid_argument("Нулевое значение...");  // Ошибочка вышла

        }
        else
        {

            this->Number_of_Sheets = n;

        }
        
    }

    // Set Производитель
    void Set_Manufacturer(const string &m) {

        // При вводе ничего, не меняем 
        if (m == "") {

            throw invalid_argument("Пусто...");             // Ошибочка вышла

        }
        else {

            this->Manufacturer = m;

        }
    }

    // Set Материал бумаги\листов
    void Set_Paper_material(Paper_M m) {

        this->Paper_Material = m;

    }

    // Set Размер страницы
    void Set_Size_of_Page(const unsigned short &s) {

        if (s == 0) {

            throw invalid_argument("Нулевой размер?..");    // Ошибочка вышла

        }
        else {

            this->Size_of_Page = s;

        }
    }


//Getters: 
     
    // Get Тип разметки
    Markup_T Get_Markup_Type() {

        return this->Markup_Type;

    };

    // Get Кол-во листов
    unsigned short Get_Number_of_Sheets() {

        return this->Number_of_Sheets;

    };

    // Get Производитель
    string Get_Manufacturer() {

        return this->Manufacturer;

    };

    // Get Материал бумаги\листов
    Paper_M Get_Paper_Material() {

        return this->Paper_Material;

    };

    // Get Размер страницы
    unsigned short Get_Size_of_Page() {

        return this->Size_of_Page;

    };


// Getters (string):

    // Get string Тип разметки
    string Get_string_Markup_Type() {


        switch (this->Markup_Type)
        {
        case Notebook::Markup_T::Checkered:
            return "В клетку";
            break;
        case Notebook::Markup_T::In_Line:
            return "В линию";
            break;
        case Notebook::Markup_T::Without_Markup:
            return "Без разметки";
            break;
        case Notebook::Markup_T::Another:
            return "Другая";            // todo: 0.1) Может не "Другая", а необычная?..
            break;
        default:
            break;
        }


    }

    // Get string Кол-во листов
    string Get_string_Number_of_Sheets() { 

        return to_string(this->Number_of_Sheets) + " листов";

    };

    // Get string Материал бумаги\листов
    string Get_string_Paper_Material() {

        switch (this->Paper_Material)
        {
        case Notebook::Paper_M::EAC:
            return "ГОСТ";
            break;
        case Notebook::Paper_M::Another:
            return "Другая";            // todo: 0.1)
            break;
        }
                    

    };

    // Get Размер страницы
    string Get_string_Size_of_Page() {

        return "A" + to_string(this->Size_of_Page);

    };

    // Get string инфу обо всей тетради 
    string Get_Notebook_Information() {

        return "\n" + this->Get_string_Markup_Type() + "\t" + this->Get_string_Number_of_Sheets() +
            "\t" + this->Get_Manufacturer() + "\t" + this->Get_string_Paper_Material() + "\t" +
            this->Get_string_Size_of_Page();

    }


};