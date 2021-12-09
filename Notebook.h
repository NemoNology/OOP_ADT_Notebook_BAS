#include <iostream>
#include <exception>
#include <string>


using namespace std;



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

    Notebook();

    //Setters:

        // Set Тип разметки
    void Set_Markup_Type(Markup_T t);

    // Set Кол-во листов
    void Set_Number_of_Sheets(const unsigned short& n);

    // Set Производитель
    void Set_Manufacturer(const string& m);

    // Set Материал бумаги\листов
    void Set_Paper_material(Paper_M m);

    // Set Размер страницы
    void Set_Size_of_Page(const unsigned short& s);


    //Getters: 

        // Get Тип разметки
    Markup_T Get_Markup_Type();

    // Get Кол-во листов
    unsigned short Get_Number_of_Sheets();

    // Get Производитель
    string Get_Manufacturer();

    // Get Материал бумаги\листов
    Paper_M Get_Paper_Material();

    // Get Размер страницы
    unsigned short Get_Size_of_Page();


    // Getters (string):

        // Get string Тип разметки
    string Get_string_Markup_Type();

    // Get string Кол-во листов
    string Get_string_Number_of_Sheets();

    // Get string Материал бумаги\листов
    string Get_string_Paper_Material();

    // Get Размер страницы
    string Get_string_Size_of_Page();

    // Get string инфу обо всей тетради 
    string Get_Notebook_Information();

    // Новый закомментированный метод...
    // Get_new_commit();

    // New commented method 2
    // Get_new_commit_in_new_branch();

};