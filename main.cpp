#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using namespace std;
void twist();

int main(){
    char reply{'Y'},x{};
    string gamer{};
    int sayi{}, cntr{0};
    vector <string> gamers{};
    cout << "Kaç kisi ile oynayacaksınız? ";
    cin >> sayi;
    for (int i =1; i<=sayi; i++)
    {
        cout << "Oyuncu " << i << " : ";
        cin >> gamer;
        gamers.push_back(gamer);
    }

    //string n = string(10,'*');



    do {
        cout << "Carki simdi cevirmek ister misin? <E/H> : ";
        cin >> reply;
        x = toupper(reply);
        system("clear");
        if (x == 'H'){
            system("clear");
            cout << "Oynadıgınız için tesekkur ederiz..." << endl <<
                    "Tekrar görüsmek uzere... :)" << endl << endl;
            break;
        }

        cout << "Sıradaki Oyuncu : " << gamers.at(cntr) << endl<< endl;
        cntr++;
        if (cntr == gamers.size())
            cntr = 0;
        twist();
    }while(true);
    return 0;
}

void twist(){

    string elAyak{}, renk{};


    int random{},random1{}, ceza{};
    int min{1};
    int max{6};
    // Initially for hands/feet...
    random=rand()%max+min;
    if (random == 1)
        elAyak = "Sag El";
    else if (random == 2)
        elAyak = "Sol El";
    else if (random == 3)
        elAyak = "Sag Ayak";
    else if (random == 4)
        elAyak="Sol Ayak";

    if ((random < 5 )){
        max = 4;
        random1=rand()%max+min;
        if (random1 == 1) //sarı kırmızı mavi yeşil
            renk = "Sarı";
        else if (random1 ==2)
            renk = "Kırmızı";
        else if (random1 == 3)
            renk = "Mavi";
        else {
            renk = "Yesil";
        }

        cout << string(elAyak.length()+renk.length()+8, '*') <<endl;
        cout << "*" << string(elAyak.length()+renk.length()+6, ' ')<< "*" <<endl;
        cout << " " << elAyak << " -->> " << renk << endl;
        cout << "*" << string(elAyak.length()+renk.length()+6, ' ')<< "*" <<endl;
        cout << string(elAyak.length()+renk.length()+8, '*') <<endl<< endl;
    }
    else if (random == 5){
        cout << "********************************************************************" <<endl << endl;
        cout << "            Hoppalaaaa... Bulut geldi... Sansa bak... >:)" << endl << endl;
        cout << "Hakem Oyuncunun bir elini ya da ayagını havaya kaldırmasını ister..." << endl << endl;
        cout << "********************************************************************" <<endl << endl;
    }
    else if (random ==6){
        cout << "***************************************************" <<endl << endl;
        cout << "    T geldi... Uzgunum ama cezanı çekeceksin..." << endl;
        cout << "    Oyuncuya, vermenizi diledigimiz ceza : >:-)" << endl << endl;
        cout << "***************************************************" <<endl << endl;
        max=18;
        ceza=rand()%max+min;
        switch (ceza){
        case 1 :
            cout << "*****************************" << endl << endl;
            cout << "10 sn. boyunca sarkı söyle..." << endl << endl;
            cout << "*****************************" << endl << endl;
            break;
        case 2 :
            cout << "***********************" << endl << endl;
            cout << "Kurbağa gibi vırakla..." << endl << endl;
            cout << "***********************" << endl << endl;
            break;
        case 3 :
            cout << "*******************" << endl << endl;
            cout << "Köpek gibi havla..." << endl << endl;
            cout << "*******************" << endl << endl;
            break;
        case 4 :
            cout << "*****************" << endl << endl;
            cout << "Esek gibi anır..." << endl << endl;
            cout << "*****************" << endl << endl;
            break;
        case 5 :
            cout << "******************" << endl << endl;
            cout << "Fil sesi çıkart..." << endl << endl;
            cout << "******************" << endl << endl;
            break;
        case 6 :
            cout << "************" << endl << endl;
            cout << "Islık cal..." << endl << endl;
            cout << "************" << endl << endl;
            break;
        case 7 :
            cout << "**********************" << endl << endl;
            cout << "Islıkla sarkı söyle..." << endl << endl;
            cout << "**********************" << endl << endl;
            break;
        case 8 :
            cout << "************************" << endl << endl;
            cout << "Ordek gibi vak vak la..." << endl << endl;
            cout << "************************" << endl << endl;
            break;
        case 9 :
            cout << "****************************" << endl << endl;
            cout << "5 farklı komik mimik yap..." << endl << endl;
            cout << "****************************" << endl << endl;
            break;
        case 10 :
            cout << "********************" << endl << endl;
            cout << "Kedi gibi miyavla..." << endl << endl;
            cout << "********************" << endl << endl;
            break;
        case 11 :
            cout << "*********************" << endl << endl;
            cout << "Tavuk gibi gıdakla..." << endl << endl;
            cout << "*********************" << endl << endl;
            break;
        case 12 :
            cout << "**********************" << endl << endl;
            cout << "Kedi gibi miyavla..." << endl << endl;
            cout << "**********************" << endl << endl;
            break;
        case 13 :
            cout << "*********************" << endl << endl;
            cout << "Maymun taklidi yap..." << endl << endl;
            cout << "*********************" << endl << endl;
            break;
        case 14 :
            cout << "*************************************" << endl << endl;
            cout << "Oyunculardan birinin taklidini yap..." << endl << endl;
            cout << "*************************************" << endl << endl;
            break;
        case 15 :
            cout << "*******************" << endl << endl;
            cout << "At gibi çifte at..." << endl << endl;
            cout << "*******************" << endl << endl;
            break;
        case 16 :
            cout << "************************" << endl << endl;
            cout << "Dilini burnuna degdir..." << endl << endl;
            cout << "************************" << endl << endl;
            break;
        case 17 :
            cout << "**************************" << endl << endl;
            cout << "Dilini dirseginde degdir.." << endl << endl;
            cout << "**************************" << endl << endl;
            break;
        case 18 :
            cout << "***********************" << endl << endl;
            cout << "Alfabeyi tersten oku..." << endl << endl;
            cout << "***********************" << endl << endl;
            break;
        }
}
}
