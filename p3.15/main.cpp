/*
 ••• P3.15
 French country names are feminine when they end with the letter e, masculine otherwise, except for the following which are masculine even though they end with e:
 
 •le Belize
 •le Cambodge
 •le Mexique
 •le Mozambique
 •le Zaïre
 •le Zimbabwe
 Write a program that reads the French name of a country and adds the article: le for masculine or la for feminine, such as le Canada or la Belgique.
 
 However, if the country name starts with a vowel, use l’; for example, l’Afghanistan.
 
 For the following plural country names, use les:
 
 •les Etats-Unis
 •les Pays-Bas
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "enter French name of a country: ";
    string country, article;
    cin >> country;
    string last_letter = country.substr(country.length() - 1);
    string first_letter = country.substr(0, 1);
    
    if (last_letter == "e")
    {
        if (country == "Belize" || country == "Cambodge" || country == "Mexique" || country == "Mozambique" || country == "Zaïre" || country == "Zimbabwe")
        {
            article = "le ";
        }
        else
        {
            article = "la ";
        }
    }
    else if (first_letter == "A" || first_letter == "E" || first_letter == "I" || first_letter == "O" || first_letter == "U")
    {
        article = "l'";
    }
    else if (country == "Etats-Unis" || country == "Pays-Bas")
    {
        article = "Les ";
    }
    else
    {
        article = "Le ";
    }
    cout << article << country << endl;
}
