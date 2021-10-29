#include <iostream>
#include <exception>

// Я - Александр Банковский Сергеевич.
// Одно из доказательств - то, что эти файлы лежат в репозитории
// OOP_ADT_Notebook_BAS в github.com пользователя
// NemoNology - меня!


// todo: add file


using namespace std;

// Создание множество для класса notebook



// todo: 
class Notebook {

public: 
    
    enum Markup_T {         // Тип разметки

    Checkered,          // В клетку
    In_Line,            // В линию  
    Without_Markup,     // Без разметки
    Another             // Другой

    };

    enum Paper_M {          // Материал бумаги\листов

        EAC,            // ГОСТ
        Another         // Не ГОСТ

    };


private:

    Markup_T Markup_Type;                   // Тип разметки
    unsigned short Number_of_Sheets;        // Кол-во листов
    string Manufacturer;                    // Производитель
    Paper_M Paper_Material;                 // Материал бумаги\листов
    unsigned short Size_of_Page;                    // Размер страницы (А5, например)   

    Notebook() {                            // Конструктор

        Markup_Type = Markup_T::Without_Markup;
        Number_of_Sheets = 0;
        Manufacturer = "Unknown";
        Paper_Material = Paper_M::EAC;
        Size_of_Page = 5;

    };

public:

    
    // Set Тип разметки
    void Set_Markup_Type(Markup_T t) {
    
        this->Markup_Type = t;

    };

    // Set Кол-во листов
    void Set_Number_of_Sheets(unsigned short n) { 
        // todo: if
          // todo: throw
        
        this->Number_of_Sheets = n; }

    // Set Производитель
    void Set_Manufacturer(string m) {     // todo: const &
        
        // При вводе ничего, не меняем 
        if (m == "") { 
            
            throw invalid_argument("Пусто...");
        
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
    void Set_Size_of_Page(unsigned short s) {

        if (s == 0) {

            throw invalid_argument("Нулевой размер?..");

        }
        else {

            this->Size_of_Page = s;

        }
    }

};



int main()
{
    


    

    return 0;
}