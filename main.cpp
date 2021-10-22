#include <time.h>
#include <cctype>

#ifdef _WIN32
  #include <bits/stdc++.h>
  const char limpiar[] = "cls";
  const char color[] = "color a";
#else
  #include <stdlib.h>
  #include <iostream>
  const char limpiar[] = "clear";
  const char color[] = "echo -ne \"\e[1;31m\"";
#endif


using namespace std;
string email[] = {"iquigley@welch.com","philip.muller@yahoo.com","wkoss@yahoo.com","obergnaum@bauch.info","luna04@hotmail.com","loniejacobson@gmail.com"
,"paul76@gleason.biz","margotlabadie@altenwerth.net","vcremin@hotmail.com","lesterlittle@kuphal.com","rippin.justice@gmail.com","pedrocronin@stroman.com"
,"cullen97@yahoo.com","flatleycurtis@yahoo.com","hjacobson@bergnaum.com","sydnieabbott@yahoo.com","nettie95@stanton.com","armstrongbrady@gmail.com"
,"mckenzieabe@huel.info","santina70@gmail.com","tannerjerde@mosciski.net","schulistnorbert@grant.net","domingokertzmann@dickinson.com","colliersally@spinka.com","smithamjosianne@cremin.info"};

string nombres[] = {"Pepe Abril Hernandez","Andres Daniel Nivicela ","Hector Cruz Ramirez",
"Jose Manuel Venturella","Juan Pablo de la Cruz","Juan Andre Mora","Carlos Gabriel Herrera","Mathias Rolando Cruz",
"Fernando Andres Vasquez","Cristhian Rodrigo Silvestre","Aitana Villalpando Guerra","Ana Paula Irene Arredondo","Valeria Carolina Davila Peres"
,"Josefina Alba Trujillo","Emma Sofia Echevarria Venegas","Alma Marcela Gozo","Jenny Tibanta Vaca","Brithany Mishel Paz","Miranda Kerly Armijos","Karolina Stefanny Luz"};

string numeros[] = {"+1(801) 325-0085","+1(801) 325-0085","+1(941) 129-5087","+1(410) 254-5328","+1(867) 631-2212",
"+1(598) 287-7412","+1(181) 060-6580","+1(693) 931-7157","+1(837) 844-3761","+1(276) 569-9639"};

string calles[] = {"916 Oak Ridge Drive","363 Calico Drive","2352 Goodwin Avenue","2578 Dane Street","2748 Dane Street"
,"3016 Owagner Lane","2602 Raccoon Run","1209 Calico Drive","152 Hill Haven Drive","3712 Pratt Avenue","3038 Stockert Hollow Road"};

string rNum3[] = {"1971","2006","1890","1992","2000","1982","2008","1999","2010","1960","1984","1996","1975","2002","1968","1998",
"2010","1958","1973","1970","1987","1988","2005","2003"};

string cards[] = {"2310 0536 4904 0102","2572 3414 6188 0215","2379 4099 7700 3229","2577 1833 4229 9180","2317 7088 5961 3350",
"3480 5126 1280 9562","3415 8043 0536 8951","3418 1218 9147 6938","3436 0549 3159 7784","3771 4376 0138 4077",
"4386 0710 8749 3760","4789 4445 6054 5203","4817 9024 8692 2042","4255 7695 6416 5110","4173 6534 2781 6821"};

void numberRandom();
void dateRandom();
void nameRandom();
void FakeIde();
void street();
void exit();

int main()
{
    system(color);
    system(limpiar);
    int op;
    cout<<" ------------------- "<<endl;
    cout<<"|  Identity Random  |"<<endl;
    cout<<" ------------------- "<<endl;
    cout<<"      Options ";
    cout<<"\n";
    cout<<"\n1) Nombres Randoms";
    cout<<"\n2) Fechas de Nacimiento";
    cout<<"\n3) Numeros telefonicos";
    cout<<"\n4) Domilcilios";
    cout<<"\n5) Identity Random";
    cout<<"\n6) Exit     >: "; cin>>op;
    if(op==1){
       nameRandom();
       return main();
    }
    else if(op==2){
       dateRandom();
       return main();
    }
    else if(op==3){
       numberRandom();
       return main();
    }
    else if(op==4){
        street();
        return main();
    }
    else if(op==5){
        FakeIde();
        return main();
    }
    else if(op==6){
        exit();
        cin.get();
        return 0;
    }

    return 0;
}

void numberRandom()
{
    srand(time(NULL));
       int z = rand() % 10;
       cin.ignore();
       system(limpiar);
       cout<<"\nNumero telefonico es --> "<<numeros[z];
       cout<<"\n\n";
       cin.get();
       system(limpiar);
}

void dateRandom()
{
    srand(time(NULL));
       int rNum = 2 + rand() % 29;
       rNum = 0 + rNum;

       srand(time(NULL));
       int rNum2 = 2 + rand() % 10;
       rNum2 = 0 + rNum2;

       srand(time(NULL));
       int w = rand() % 24;
       cin.ignore();

       system(limpiar);
       cout<<"                                D M A\n";
       cout<<"Su fecha de nacimientos es --> "<<rNum<<"/"<<rNum2<<"/"<<rNum3[w];
       cout<<"\n\n";
       cin.get();
       system(limpiar);
}

void nameRandom()
{
       srand(time(NULL));
       int x = rand() % 20;
       cin.ignore();
       system(limpiar);
       cout<<"\nSu nuevo nombre es --> "<<nombres[x]<<endl;
       cout<<"\n";
       cin.ignore();
       system(limpiar);
}

void street()
{
       srand(time(NULL));
       int y = rand() % 11;
       cin.ignore();
       system(limpiar);
       cout<<"\nSu adomicilio es --> "<<calles[y]<<endl;
       cout<<"\n";
       cin.ignore();
       system(limpiar);
}

void FakeIde()
{
      system(limpiar);
      srand(time(NULL));
       int rNum = 2 + rand() % 29;
       rNum = 0 + rNum;

      srand(time(NULL));
       int rNum2 = 2 + rand() % 10;
       rNum2 = 0 + rNum2;

      srand(time(NULL));
       int w = rand() % 24;
       cin.ignore();
       cout<<"Su fecha de nacimientos es ---> "<<rNum<<"/"<<rNum2<<"/"<<rNum3[w];
       cout<<"\nPrecione una tecla....";

      srand(time(NULL));
       int z = rand() % 10;
       cin.ignore();
       cout<<"\n\nNumero telefonico es ---> "<<numeros[z];
       cout<<"\nPresione una tecla....";

      srand(time(NULL));
       int x = rand() % 20;
       cin.ignore();
       cout<<"\n\nSu nuevo nombre es ---> "<<nombres[x]<<endl;
       cout<<"Presione una tecla....";

      srand(time(NULL));
       int y = rand() % 11;
       cin.ignore();
       cout<<"\nSu adomicilio es  ---> "<<calles[y]<<endl;
       cout<<"Presione una tecla....";

      srand(time(NULL));
       int a = rand() % 25;
       cin.ignore();
       cout<<"\nSu correo es ---> "<<email[a]<<endl;
       cout<<"Presione una tecla....";

      srand(time(NULL));
       int f = rand() % 15;
       cin.ignore();
      srand(time(NULL));
       int exp = 7 + rand() % 18;
       exp = 0 + exp;
      srand(time(NULL));
       int cvv = 173 + rand() % 379;
       cvv = 3 + cvv;
       cout<<"\nSu tarjeta de credito es --> "<<cards[f];
       cout<<"\nPresione una tecla....         EXP "<<exp<<"/"<<rNum<<" CVV "<<cvv;
       cout<<"\n\n";
       cin.get();
       system(limpiar);
}

void exit()
{
system(limpiar);
cout<<"_+88_____________________+880___"<<endl;
cout<<"_+880____________________+880___"<<endl;
cout<<"_++88____________________++88___"<<endl;
cout<<"_++88____________________++88___"<<endl;
cout<<"_+8880__________________+++88___"<<endl;
cout<<"_+8888__________________++888___"<<endl;
cout<<"_++8880_________________++888___"<<endl;
cout<<"_++8888_____+++88_______+++88___"<<endl;
cout<<"__++8888__+++8880++88___++888___"<<endl;
cout<<"__+++8888+++8880++8888__++888___"<<endl;
cout<<"___++888++8888+++888888++8888___"<<endl;
cout<<"___++88++8888++8888888++88888___"<<endl;
cout<<"___++++++88888888888888888888___"<<endl;
cout<<"____++++++8888888888888888888___"<<endl;
cout<<"____++++++++00088888888888888___"<<endl;
cout<<"_____+++++++00008888888888888___"<<endl;
cout<<"______+++++++0008888888888888___"<<endl;
cout<<"_______+++++++08888888888888____"<<endl;
cout<<"_______+++++++08888888888888____"<<endl;
cout<<"________+++++++888888888888_____"<<endl;
cout<<"________++++++008888888888______"<<endl;
cout<<"________+++++000888888888_______"<<endl;
cout<<"________+++++++++++++++++_______"<<endl;
cout<<"________+++++++++++++++++_______"<<endl;
cout<<"        Contact Developer?"<<endl;
cout<<"      https://t.me/userM01000"<<endl;
cout<<"________________________________"<<endl;
cin.get();
}
