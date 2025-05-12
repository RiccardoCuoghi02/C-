#include <iostream> 
#include <iomanip>
using namespace std;

 string nome;
 int eta;

void stamp(){
    cout<<"-----------------------------------------"<<endl;
    cout<<"| DETTAGLI   PERSONALI                  |"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"| "<< left << setw(10) << "Nome: "
        << right << setw(27) << nome <<" |"<< endl;
    
    cout<<"| "<< left << setw(10) << "Età: "
        << right << setw(28) << eta <<" |"<< endl;

    cout<<"-----------------------------------------"<<endl;
    string frase = "Ciao " + nome + ", hai " + to_string(eta) + " anni.";
    cout<<"| "<< left << setw(37) 
        << frase << right << " |"<<endl;

    cout<<"-----------------------------------------"<<endl<<endl<<endl;

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