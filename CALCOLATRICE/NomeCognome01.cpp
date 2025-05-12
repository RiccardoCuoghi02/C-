#include <iostream> 
#include <iomanip>
using namespace std;

 string nome;
 int eta;

void stamp(){
    cout<< setfill('-')<<setw(33)<<""<< endl;
    cout<<setfill(' ')<<left<<setw(33)<< "| DETTAGLI"<< "PERSONALI" <<right << "|" << endl;
    cout<< left << setw(33)<<"| NOME: "<< right << nome <<"|"<<endl;
    cout<< left << setw(33)<<"| ETA': "<< right << eta <<"|"<<endl;



}

int main()
{

    cout<< "Inserisci il nome: ";
    cin >> nome;

    cout<< "Inserisci l'eta': ";
    cin >> eta;

    cout << "Ciao " << nome << "," << "l'eta' inserita e': "<< eta << " anni"<<endl;

    stamp();


}