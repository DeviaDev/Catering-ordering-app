#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

//Function animasi - delay
void delay(void){
  int delay;
  delay=1;
  while(delay<20000000){
  delay++;
  }  
}
//gotoxy
void gotoxy(int x, int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
  
int main(){
  int i,j;
  char ulang;
  
    gotoxy(66,7);
    printf(" W E L C O M E \n");
    gotoxy(50,8);
  	printf("\t\t\t To \n");
  	gotoxy(50,9);
  	printf("\t\t MOONSTAR CATERING \n");
  
  for(i=60;i<=85;i++){
    gotoxy(i,12);
    printf("*");
    gotoxy(i,14);
    printf("*");
    system("color B1");
    delay();
    
  }
  
  for(i=1; i<= 100; i++){
    gotoxy(63,13);
    cout<<"\t  W A I T  "  << i <<"%";
    delay();
    
  }
    system("cls");

{
	string nama,alamat,menu;
	char nohp[20],yesno,back,ulang,lanjut,pay;
	int jumlah,hasil,porsi,lauk,paket,kirim,ongkir=10000,kurang,kurang1,bayar,bayarlagi,total,kembalian1,kembalian,totalpembayaran,
	    harga[14]={12000,13000,15000,10000,12000,12000,10000,10000,12000,13000,15000,15000,15000,15000},i=0;


        finish:
		system("cls");
		cout<<"                ==============================                 "<<endl;
		cout<<"                  #     ******      *     #                    "<<endl;
		cout<<"                 #   *******       ***     #                   "<<endl;
		cout<<"                #  *****          *****     #                  "<<endl;
		cout<<"               #   *****       ***********   #                 "<<endl;
		cout<<"                #  *****         *******    #                  "<<endl;
		cout<<"                 #   *******     *** ***   #                   "<<endl;
		cout<<"                   #    ******    *   *   #                    "<<endl;
		cout<<"                =============================== "<<endl;
		cout<<"                ====== MOONSTAR CATERING ====== "<<endl;
		cout<<"                =============================== "<<endl;
		cout<<endl;
		cout<<"         085317744041--https://www.moonstar_catering.com "<<endl;
		cout<<"====== Jl. Raya Bogor no 523 Malang (depan polres cirebon) ====== "<<endl;
		cout<<endl;
		
		cout<<"Masukkan Nama Anda		: ";getline(cin,nama);
		cout<<"Alamat Lengkap			: ";getline(cin,alamat);
		cout<<"No. HP				: ";cin>>nohp;
	
	    ulang:
        system("cls");
        cout<<"\t\t\t SILAKAN PILIH PAKET NASI \t\t"<<endl;
	    cout<<"================================================================="<<endl;
		cout<<"----------------Pilihan Paket Nasi Yang Tersedia-----------------"<<endl;
		cout<<"================================================================="<<endl;
		cout<<"-			[Paket 1] Nasi Liwet			-"<<endl; 
		cout<<"-			[Paket 2] Nasi Kuning			-"<<endl;
		cout<<"-			[Paket 3] Nasi Bakar 			-"<<endl;
		cout<<"-			[Paket 4] Nasi Kebuli			-"<<endl;
		cout<<"-			[Paket 5] Nasi Mandhi			-"<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<endl;
		
        cout<<"Masukkan Pilihan Paket Nasi ke-  : ";
		cin>>paket;
		cout<<endl;
		
		switch(paket){
			case 1:
		    cout<<"\t\t\t SILAKAN PILIH MENU NASI \t\t"<<endl;
			cout<<"============================================================================"<<endl;
			cout<<"-----------------------------List Menu Nasi Liwet---------------------------"<<endl;
			cout<<"============================================================================"<<endl;
			cout<<"1.{Ayam Goreng Serundeng+Telur Bacem+Tumis Daun Pepaya+Sambal Bajak+Kerupuk}"<<endl; 
			cout<<"HARGA : Rp. 12.000"<<endl;
			cout<<"2.{Ayam Bakar+Telur Bacem+Tumis Daun Pepaya+Sambal Bajak+Kerupuk}"<<endl;
			cout<<"HARGA : Rp. 13.000"<<endl;
			cout<<"3.{Empal Gepuk+Telur Asin+Tumis Daun Pepaya+Sambal Bajak+Kerupuk}"<<endl;
			cout<<"HARGA : Rp. 15.000"<<endl<<endl;
			cout<<"------------------------------------------------------------------------------"<<endl;
			
		back1:
			cout<<"Masukkan Pilihan Lauk Nasi Liwet Ke- : ";
			cin>>lauk;
		 
		    
			if(lauk==1){
			   menu="Ayam Goreng";
			}
			else if (lauk==2){
			   menu="Ayam Bakar";
			   i=1;
			}
			else if (lauk==3){
			   menu="Empal Gepuk";
			   i=2;
			}else {
				cout<<"Maaf Menu yang Anda Pilih Tidak Tersedia, Silakan Pilih Kembali"<<endl;
				cout<<""<<endl;
				goto back1;
			}
			
				cout<<"Berapa Porsi yang Anda Pesan : ";
			    cin>>porsi;
			
			break;
			
			case 2:
		    cout<<"\t\t\t SILAKAN PILIH MENU NASI \t\t"<<endl;
			cout<<"============================================================================"<<endl;
			cout<<"-----------------------------List Menu Nasi Kuning--------------------------"<<endl;
			cout<<"============================================================================"<<endl;
			cout<<"1. {Ayam Suwir Rica-Rica+Telur Dadar+Sambal+Kerupuk}            : Rp. 10.000"<<endl;
			cout<<"2. {Empal Gepuk Suwir+Telur Asin+Sambal Bajak+Kerupuk}          : Rp. 12.000"<<endl;
			cout<<"3. {Ayam Balado+Telur Ceplok+Sambal Bajak+Kerupuk}              : Rp. 12.000"<<endl;
			cout<<"----------------------------------------------------------------------------"<<endl;
	
			
		back2:
			cout<<"Masukkan Pilihan Lauk Nasi Kuning Ke- : ";
			cin>>lauk;
		    
			if(lauk==1){
			   menu="Ayam Suwir";
			   i=3;
			}
			else if (lauk==2){
			   menu="Empal Gepuk Suwir";
			   i=4;
			}
			else if (lauk==3){
			   menu="Ayam Balado";
			   i=5;
			}else {
				cout<<"Maaf Menu yang Anda Pilih Tidak Tersedia, Silakan Pilih Kembali"<<endl;
				cout<<""<<endl;
				goto back2;
			}
			
				cout<<"Berapa Porsi yang Anda Pesan : ";
			cin>>porsi;
			
			break;
			
			case 3:
		    cout<<"\t\t\t SILAKAN PILIH MENU NASI \t\t"<<endl;
			cout<<"============================================================================"<<endl;
			cout<<"-----------------------------List Menu Nasi Bakar---------------------------"<<endl;
			cout<<"============================================================================"<<endl;
			cout<<"1. {Ayam Suwir Rica-Rica}					: Rp. 10.000"<<endl;
			cout<<"2. {Tongkol}							: Rp. 10.000"<<endl;
			cout<<"3. {Cumi-Cumi}							: Rp. 12.000"<<endl;
			cout<<"----------------------------------------------------------------------------"<<endl;
			
		back3:
			cout<<"Masukkan Pilihan Lauk Nasi Bakar Ke- : ";
			cin>>lauk;
		    
			if(lauk==1){
			   menu="Ayam Suwir Rica-Rica";
			   i=6;
			}
			else if (lauk==2){
			   menu="Tongkol";
			   i=7;
			}
			else if (lauk==3){
			   menu="Cumi-Cumi";
			   i=8;
			}else {
				cout<<"Maaf Menu yang Anda Pilih Tidak Tersedia, Silakan Pilih Kembali"<<endl;
				cout<<""<<endl;
				goto back3;
			}
			
				cout<<"Berapa Porsi yang Anda Pesan : ";
			cin>>porsi;
			
			break;
			
			case 4:
		    cout<<"\t\t\t SILAKAN PILIH MENU NASI \t\t"<<endl;
			cout<<"============================================================================"<<endl;
			cout<<"-----------------------------List Menu Nasi Kebuli--------------------------"<<endl;
			cout<<"============================================================================"<<endl;
			cout<<"1. {Ayam Bakar}							: Rp. 13.000"<<endl;
			cout<<"2. {Daging Sapi Krengsengan} 					: Rp. 15.000"<<endl;
			cout<<"3. {Kambing Oven}						: Rp. 15.000"<<endl;
			cout<<"----------------------------------------------------------------------------"<<endl;
			
		back4:
			cout<<"Masukkan Pilihan Lauk Nasi Kebuli Ke- : ";
			cin>>lauk;
		
			if(lauk==1){
			   menu="Ayam Bakar";
			   i=9;
			}
			else if (lauk==2){
			   menu="Daging Sapi Krengsengan";
			   i=10;
			}
			else if (lauk==3){
			   menu="Kambing Oven";
			   i=11;
			}else {
				cout<<"Maaf Menu yang Anda Pilih Tidak Tersedia, Silakan Pilih Kembali"<<endl;
				cout<<""<<endl;
				goto back4;
			}
			
				cout<<"Berapa Porsi yang Anda Pesan : ";
			cin>>porsi;
			
			break;
			
			case 5:
		    cout<<"\t\t\t SILAKAN PILIH MENU NASI \t\t"<<endl;
		    cout<<"============================================================================"<<endl;
			cout<<"-----------------------------List Menu Nasi Mandhi--------------------------"<<endl;
			cout<<"============================================================================"<<endl;
			cout<<"1. {Ayam Bakar+Sambal+Kerupuk Udang}				: Rp. 15.000"<<endl;
			cout<<"2. {Kambing+Sambal+Kerupuk Udang}				: Rp. 15.000"<<endl;
			cout<<"----------------------------------------------------------------------------"<<endl;
			
		back5:
			cout<<"Masukkan Pilihan Lauk Nasi Mandhi Ke- : ";
			cin>>lauk;
		    
			if(lauk==1){
			   menu="Ayam Bakar";
			   i=12;
			}
			else if (lauk==2){
			   menu="Kambing";
			   i=13;
			}
			else {
				cout<<"Maaf Menu yang Anda Pilih Tidak Tersedia, Silakan Pilih Kembali"<<endl;
				cout<<""<<endl;
				goto back5;
			}
				cout<<"Berapa Porsi yang Anda Pesan : ";
			cin>>porsi;
			}
		
		    
	        system("cls");
	        back6 :
	        cout<<"============================================================================"<<endl;
	        cout<<"\t\t\t\tPilih Pengiriman :"<<endl;
	        cout<<"============================================================================"<<endl;
	        cout<<"\t1. Diantar"<<endl;
	        cout<<"\t2. DiAmbil ditempat"<<endl;
	        cout<<"============================================================================"<<endl;
	        cout<<"Set pengiriman : ";
	        cin>>kirim;
			cout<<endl<<endl;
	        
	        ongkir=10000;
	        
	        switch(kirim){
	        	case 1:{
	            ongkir=10000;
					break;
	      	}case 2:{
	      	    ongkir=0;
					break;
			}case 3:{
		     	cout<<" Pilihan Anda Tidak tersedia, silakan pilih lagi "<<endl;
		     	goto back6;
			}
		}
			
		    totalpembayaran=porsi*harga[i]+ongkir;
		    jumlah=totalpembayaran;
		  
		
			 cout<<"========================BILL========================"<<endl;
			cout<<"Pemesan				: "<<nama<<endl;
			cout<<"Paket yang di Pesan      	: Paket "<<paket<<endl;
			cout<<"Lauk yang di Pilih       	: "<<menu<<endl;
			cout<<"Jumlah Porsi			: "<<porsi<<" Porsi"<<endl;
			cout<<"Harga Paket			: Rp. "<<harga[i]<<endl;
			cout<<"Ongkos Kirim			: Rp. "<<ongkir<<endl;
			cout<<"===================================================="<<endl;
			cout<<"Total Pembayaran		: Rp. "<<jumlah<<endl;
		    cout<<"===================================================="<<endl;
			cout<<"silahkan Bayar Disini		: Rp. ";cin>>bayar;
			cout<<"===================================================="<<endl;
			cout<<endl;
	
			if(bayar>jumlah){
			kembalian=bayar-jumlah;
			cout<<"===================================================="<<endl;
			cout<<"Kembalian    	: Rp. "<<kembalian<<endl;
			cout<<"===================================================="<<endl;
			}

	
			
			
	    	if(bayar<jumlah){	
	    	
	    	kurang=jumlah-bayar;
			
			cout<<"==========Saldo Anda Kurang=========="<<endl;
			
			cout<<"Uang Anda Kurang        : Rp. "<<kurang<<endl;;
			cout<<"Silakan Bayar Lagi      : Rp. ";cin>>bayarlagi;
			cout<<endl;
				
		}
		
		if(bayarlagi<kurang){	
	    	
	    	kurang1=kurang-bayarlagi;
			
			cout<<"==========Saldo Anda Kurang=========="<<endl;
			
			cout<<"Uang Anda Kurang        : Rp. "<<kurang1<<endl;;
			cout<<"Silakan Bayar Lagi      : Rp. ";cin>>bayarlagi;
			cout<<endl;
	}else{
		goto next;
	}
		
		
		next:
			bayar=bayar+bayarlagi;
			kembalian=bayar-jumlah;
		    
			cout<<"==================================================="<<endl;
			cout<<"Uang yang anda bayar            : Rp. "<<bayar<<endl;
			cout<<"Kembalian			: Rp. "<<kembalian<<endl;
			cout<<"==================================================="<<endl<<endl;
		
		
		
			//if(bayarlagi>kurang){
			//bayar=bayar+bayarlagi;
			//kembalian=bayar-jumlah;
		    
			//cout<<"==================================================="<<endl;
			//cout<<"Uang yang anda bayar            : Rp. "<<bayar<<endl;
			//cout<<"Kembalian			: Rp. "<<kembalian<<endl;
			//cout<<"==================================================="<<endl<<endl;
			
		//}
		
		//bayar=bayar+bayarlagi;
		//	kembalian=bayar-jumlah;
		    
			//cout<<"==================================================="<<endl;
			//cout<<"Uang yang anda bayar            : Rp. "<<bayar<<endl;
			//cout<<"Kembalian			: Rp. "<<kembalian<<endl;
			//cout<<"==================================================="<<endl<<endl;
	
			
			cout<<"==========PEMBAYARAN ANDA SUDAH LUNAS=========="<<endl<<endl;
			cout<<"Apakah Anda Ingin Memesan Lagi (Y/N) :"<<endl;
			cout<<"       [ Y=Yes  /  N=No ]             "<<endl;
			cin>>yesno;
		
			
			if(yesno=='Y'|| yesno=='y'){
				goto ulang;
			}
			else{
				cout<<'\n'<<endl;
				goto lanjut;
		    }
		    
		    lanjut:
		system("cls");
		gotoxy(45,3);
		cout<<"                ==============================                 "<<endl;
		gotoxy(45,4);
		cout<<"                  #     ******      *     #                    "<<endl;
		gotoxy(45,5);
		cout<<"                 #   *******       ***     #                   "<<endl;
		gotoxy(45,6);
		cout<<"                #  *****          *****     #                  "<<endl;
		gotoxy(45,7);
		cout<<"               #   *****       ***********   #                 "<<endl;
		gotoxy(45,8);
		cout<<"                #  *****         *******    #                  "<<endl;
		gotoxy(45,9);
		cout<<"                 #   *******     *** ***   #                   "<<endl;
		gotoxy(45,10);
		cout<<"                   #    ******    *   *   #                    "<<endl;
		gotoxy(45,11);
		cout<<"                =============================== "<<endl;
		gotoxy(45,12);
		cout<<"                ====== MOONSTAR CATERING ====== "<<endl;
		gotoxy(45,13);
		cout<<"                =============================== "<<endl;
		gotoxy(45,14);
		cout<<endl;
		gotoxy(45,15);
		cout<<"         085317744041--https://www.moonstar_catering.com "<<endl;
		gotoxy(45,16);
		cout<<"====== Jl. Raya Bogor no 523 Malang (depan polres cirebon) ====== "<<endl<<endl;
		gotoxy(45,17);
		cout<<endl<<endl;
		gotoxy(45,18);
		cout<<"\t\t\t T E R I M A  K A S I H "<<endl; 
}
}



 