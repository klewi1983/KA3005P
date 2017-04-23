/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   csv.h
 * Author: user
 *
 * Created on 22 kwietnia 2017, 19:27
 */

#ifndef CSV_H
#define CSV_H

#include <fstream>

using namespace std;



class csv {
public:
    string fileName;
    fstream file;
    string record;
    csv();
    /**\<html><h3>tworzy plik o nazwie fName</h2><p></p></html>
     * \param fName
     * \return void
     */
    csv(string);
    /**\<html><h2>funkcja dopisuj�ca do rekordu kolejne pomiary</h2><p>tworzy lini� w pliku csv kolejne warto�ci rozdzielone znakiem ';'</p></html>
     * \param fPomiar float
     * \return void
     */
    void addToRecord(float);
    /**\<html><h2>zapisuje do pliku kolejny rekord (lini�)</h2><p></p></html>
     * \return void
     */
    void storeRecord();
    virtual ~csv();
private:

};

#endif /* CSV_H */

