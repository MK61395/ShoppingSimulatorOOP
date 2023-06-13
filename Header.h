#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class User {
	string Name;
	string ID;
	string CNIC;
	string Password;
	string Address;
	string phoneNum;
public:
	User()
	{
		Name = ' ';
		ID = ' ';
		CNIC = ' ';
		Password = ' ';
		Address = ' ';
		phoneNum = ' ';
	}

	User(string n, string id, string cnic, string pw, string a, string p)
	{
		Name = n;
		ID = id;
		CNIC = cnic;
		Password = pw;
		Address = a;
		phoneNum = p;
	}

	User(User& obj)
	{
		Name = obj.Name;
		ID = obj.ID;
		CNIC = obj.CNIC;
		Password = obj.Password;
		Address = obj.Address;
		phoneNum = obj.phoneNum;
	}

	//setters and getters
	void setName(string n)
	{
		Name = n;
	}
	void setID(string id)
	{
		ID = id;
	}
	void setCNIC(string cnic)
	{
		CNIC = cnic;
	}
	void setPassword(string pw)
	{
		Password = pw;

	}
	void setAddress(string a)
	{
		Address = a;
	}
	void setphoneNum(string p)
	{
		phoneNum = p;
	}

	string getName()
	{
		return Name;
	}
	string getID()
	{
		return ID;
	}
	string getCNIC()
	{
		return CNIC;
	}
	string getPassword()
	{
		return Password;
	}
	string getAddress()
	{
		return Address;
	}
	string getPhoneNum()
	{
		return phoneNum;
	}

};


class ProductCatalog {     //aggregated to admin class
public:
	char chicken[50];
	char beef[50];
	char mutton[50];
	char fish[50];
	char milk[50];
	char eggs[50];
	char yogurt[50];
	char cheese[50];
	char apple[50];
	char banana[50];
	char mango[50];
	char orange[50];
	char watermelon[50];
	char tomato[50];
	char onion[50];
	char cucumber[50];
	char potato[50];
	char chocolate[50];
	char chips[50];
	char biscuits[50];
	char spices[50];
	char lentils[50];
	char wheat[50];
	char flour[50];
	char rice[50];
	char cereal[50];
	char shampoo[50];
	char soap[50];
	char handsanitizer[50];
	char detergent[50];
	char dishSoap[50];
	char washroomCleaner[50];

	double priceitem1 = 500, priceitem2 = 1200, priceitem3 = 1500, priceitem4 = 1000, priceitem5 = 200, priceitem6 = 250, priceitem7 = 220, priceitem8 = 500, priceitem9 = 200, priceitem10 = 220, priceitem11 = 300, priceitem12 = 400, priceitem13 = 150, priceitem14 = 80, priceitem15 = 40, priceitem16 = 50, priceitem17 = 60, priceitem18 = 100, priceitem19 = 50, priceitem20 = 30, priceitem21 = 120, priceitem22 = 150, priceitem23 = 200, priceitem24 = 80, priceitem25 = 160, priceitem26 = 500, priceitem27 = 320, priceitem28 = 140, priceitem29 = 300, priceitem30 = 250, priceitem31 = 120, priceitem32 = 400;


	//setters & getters
	void setchicken(string ch)
	{
		strcpy_s(chicken, ch.c_str());
	}
	void setbeef(string bf)
	{
		strcpy_s(beef, bf.c_str());
	}
	void setmutton(string mt)
	{
		strcpy_s(mutton, mt.c_str());
	}
	void setfish(string fi)
	{
		strcpy_s(fish, fi.c_str());
	}
	void setmilk(string mi)
	{
		strcpy_s(milk, mi.c_str());
	}
	void setegg(string eg)
	{
		strcpy_s(eggs, eg.c_str());
	}
	void setyoghurt(string yog)
	{
		strcpy_s(yogurt, yog.c_str());
	}
	void setcheese(string che)
	{
		strcpy_s(cheese, che.c_str());
	}
	void setapple(string app)
	{
		strcpy_s(apple, app.c_str());
	}
	void setbanana(string ban)
	{
		strcpy_s(banana, ban.c_str());
	}
	void setmango(string man)
	{
		strcpy_s(mango, man.c_str());
	}
	void setorange(string orng)
	{
		strcpy_s(orange, orng.c_str());
	}
	void setwatermelon(string wm)
	{
		strcpy_s(watermelon, wm.c_str());
	}
	void settomato(string tom)
	{
		strcpy_s(tomato, tom.c_str());
	}
	void setonion(string oni)
	{
		strcpy_s(onion, oni.c_str());
	}
	void setcucumber(string cuc)
	{
		strcpy_s(cucumber, cuc.c_str());
	}
	void setpotato(string pot)
	{
		strcpy_s(potato, pot.c_str());
	}
	void setchocolate(string choc)
	{
		strcpy_s(chocolate, choc.c_str());
	}
	void setchips(string chip)
	{
		strcpy_s(chips, chip.c_str());
	}
	void setbiscuits(string bisc)
	{
		strcpy_s(biscuits, bisc.c_str());
	}
	void setspices(string spi)
	{
		strcpy_s(spices, spi.c_str());
	}
	void setlentils(string len)
	{
		strcpy_s(lentils, len.c_str());
	}
	void setwheat(string wh)
	{
		strcpy_s(wheat, wh.c_str());
	}
	void setflour(string fl)
	{
		strcpy_s(flour, fl.c_str());
	}
	void setrice(string ri)
	{
		strcpy_s(rice, ri.c_str());
	}
	void setcereal(string cer)
	{
		strcpy_s(cereal, cer.c_str());
	}
	void setshampoo(string sham)
	{
		strcpy_s(shampoo, sham.c_str());
	}
	void setsoap(string so)
	{
		strcpy_s(soap, so.c_str());
	}
	void sethandsanitizer(string hsan)
	{
		strcpy_s(handsanitizer, hsan.c_str());
	}
	void setdetergent(string det)
	{
		strcpy_s(detergent, det.c_str());
	}
	void setdishsoap(string dso)
	{
		strcpy_s(dishSoap, dso.c_str());
	}
	void setwashroomcleaner(string wc)
	{
		strcpy_s(washroomCleaner, wc.c_str());
	}


	void setp1(double p1)
	{
		priceitem1 = p1;
	}
	void setp2(double p2)
	{
		priceitem2 = p2;
	}
	void setp3(double p3)
	{
		priceitem3 = p3;
	}
	void setp4(double p4)
	{
		priceitem4 = p4;
	}
	void setp5(double p5)
	{
		priceitem5 = p5;
	}
	void setp6(double p6)
	{
		priceitem6 = p6;
	}
	void setp7(double p7)
	{
		priceitem7 = p7;
	}
	void setp8(double p8)
	{
		priceitem8 = p8;
	}
	void setp9(double p9)
	{
		priceitem9 = p9;
	}
	void setp10(double p10)
	{
		priceitem10 = p10;
	}
	void setp11(double p11)
	{
		priceitem11 = p11;
	}
	void setp12(double p12)
	{
		priceitem12 = p12;
	}
	void setp13(double p13)
	{
		priceitem13 = p13;
	}
	void setp14(double p14)
	{
		priceitem14 = p14;
	}
	void setp15(double p15)
	{
		priceitem15 = p15;
	}
	void setp16(double p16)
	{
		priceitem16 = p16;
	}
	void setp17(double p17)
	{
		priceitem17 = p17;
	}
	void setp18(double p18)
	{
		priceitem18 = p18;
	}
	void setp19(double p19)
	{
		priceitem19 = p19;
	}
	void setp20(double p20)
	{
		priceitem20 = p20;
	}
	void setp21(double p21)
	{
		priceitem21 = p21;
	}
	void setp22(double p22)
	{
		priceitem22 = p22;
	}
	void setp23(double p23)
	{
		priceitem23 = p23;
	}
	void setp24(double p24)
	{
		priceitem24 = p24;
	}
	void setp25(double p25)
	{
		priceitem25 = p25;
	}
	void setp26(double p26)
	{
		priceitem26 = p26;
	}
	void setp27(double p27)
	{
		priceitem27 = p27;
	}
	void setp28(double p28)
	{
		priceitem28 = p28;
	}
	void setp29(double p29)
	{
		priceitem29 = p29;
	}
	void setp30(double p30)
	{
		priceitem30 = p30;
	}
	void setp31(double p31)
	{
		priceitem31 = p31;
	}
	void setp32(double p32)
	{
		priceitem32 = p32;
	}


	//getters
	string getchicken()
	{
		return chicken;
	}
	string getbeef()
	{
		return beef;
	}
	string getmutton()
	{
		return mutton;
	}
	string getfish()
	{
		return fish;
	}
	string getmilk()
	{
		return milk;
	}
	string geteggs()
	{
		return eggs;
	}
	string getyogurt()
	{
		return yogurt;
	}
	string getcheese()
	{
		return cheese;
	}
	string getapple()
	{
		return apple;
	}
	string getbanana()
	{
		return banana;
	}
	string getmango()
	{
		return mango;
	}
	string getorange()
	{
		return orange;
	}
	string getwatermelon()
	{
		return watermelon;
	}
	string gettomato()
	{
		return tomato;
	}
	string getonion()
	{
		return onion;
	}
	string getcucumber()
	{
		return cucumber;
	}
	string getpotato()
	{
		return potato;
	}
	string getchocolate()
	{
		return chocolate;
	}
	string getchips()
	{
		return chips;
	}
	string getbiscuits()
	{
		return biscuits;
	}
	string getspices()
	{
		return spices;
	}
	string getlentils()
	{
		return lentils;
	}
	string getwheat()
	{
		return wheat;
	}
	string getflour()
	{
		return flour;
	}
	string getrice()
	{
		return rice;
	}
	string getcereal()
	{
		return cereal;
	}
	string getshampoo()
	{
		return shampoo;
	}
	string getsoap()
	{
		return soap;
	}
	string gethandsanitizer()
	{
		return handsanitizer;
	}
	string getdetergent()
	{
		return detergent;
	}
	string getdishsoap()
	{
		return dishSoap;
	}
	string getwashroomcleaner()
	{
		return washroomCleaner;
	}


	double getp1()
	{
		return priceitem1;
	}
	double getp2()
	{
		return priceitem2;
	}
	double getp3()
	{
		return priceitem3;
	}
	double getp4()
	{
		return priceitem4;
	}
	double getp5()
	{
		return priceitem5;
	}
	double getp6()
	{
		return priceitem6;
	}
	double getp7()
	{
		return priceitem7;
	}
	double getp8()
	{
		return priceitem8;
	}
	double getp9()
	{
		return priceitem9;
	}
	double getp10()
	{
		return priceitem10;
	}
	double getp11()
	{
		return priceitem11;
	}
	double getp12()
	{
		return priceitem12;
	}
	double getp13()
	{
		return priceitem13;
	}
	double getp14()
	{
		return priceitem14;
	}
	double getp15()
	{
		return priceitem15;
	}
	double getp16()
	{
		return priceitem16;
	}
	double getp17()
	{
		return priceitem17;
	}
	double getp18()
	{
		return priceitem18;
	}
	double getp19()
	{
		return priceitem19;
	}
	double getp20()
	{
		return priceitem20;
	}
	double getp21()
	{
		return priceitem21;
	}
	double getp22()
	{
		return priceitem22;
	}
	double getp23()
	{
		return priceitem23;
	}
	double getp24()
	{
		return priceitem24;
	}
	double getp25()
	{
		return priceitem25;
	}
	double getp26()
	{
		return priceitem26;
	}
	double getp27()
	{
		return priceitem27;
	}
	double getp28()
	{
		return priceitem28;
	}
	double getp29()
	{
		return priceitem29;
	}
	double getp30()
	{
		return priceitem30;
	}
	double getp31()
	{
		return priceitem31;
	}
	double getp32()
	{
		return priceitem32;
	}


	//functions
	ProductCatalog();
	ProductCatalog(string ch, string bf, string mt, string fi, string mi, string eg, string yog, string che, string app, string ban, string man, string orng, string wm, string tom, string oni, string cuc, string pot, string choc, string chip, string bisc, string spi, string len, string wh, string fl, string ri, string cer, string sham, string so, string hsan, string det, string dso, string wc)
	{
		strcpy_s(chicken, ch.c_str());
		strcpy_s(beef, bf.c_str());
		strcpy_s(mutton, mt.c_str());
		strcpy_s(fish, fi.c_str());
		strcpy_s(milk, mi.c_str());
		strcpy_s(eggs, eg.c_str());
		strcpy_s(yogurt, yog.c_str());
		strcpy_s(cheese, che.c_str());
		strcpy_s(apple, app.c_str());
		strcpy_s(banana, ban.c_str());
		strcpy_s(mango, man.c_str());
		strcpy_s(orange, orng.c_str());
		strcpy_s(watermelon, wm.c_str());
		strcpy_s(tomato, tom.c_str());
		strcpy_s(onion, oni.c_str());
		strcpy_s(cucumber, cuc.c_str());
		strcpy_s(potato, pot.c_str());
		strcpy_s(chocolate, choc.c_str());
		strcpy_s(chips, chip.c_str());
		strcpy_s(biscuits, bisc.c_str());
		strcpy_s(spices, spi.c_str());
		strcpy_s(lentils, len.c_str());
		strcpy_s(wheat, wh.c_str());
		strcpy_s(flour, fl.c_str());
		strcpy_s(rice, ri.c_str());
		strcpy_s(cereal, cer.c_str());
		strcpy_s(shampoo, sham.c_str());
		strcpy_s(soap, so.c_str());
		strcpy_s(handsanitizer, hsan.c_str());
		strcpy_s(detergent, det.c_str());
		strcpy_s(dishSoap, dso.c_str());
		strcpy_s(washroomCleaner, wc.c_str());
	}

	void AddItems_W(string str, ProductCatalog test)
	{
		ofstream myfile("Productcatalog.dat", ios::binary | ios::app);
		while (myfile.write((char*)&test, sizeof(test)))
		{
			if (test.getchicken() == str)
			{
				test.getchicken();
				test.getp1();
				test.getmutton();
				test.getp2();
				test.getbeef();
				test.getp3();
				test.getfish();
				test.getp4();
				test.getmilk();
				test.getp5();
				test.geteggs();
				test.getp6();
				test.getyogurt();
				test.getp7();
				test.getcheese();
				test.getp8();
				test.getapple();
				test.getp9();
				test.getorange();
				test.getp10();
				test.getbanana();
				test.getp11();
				test.getwatermelon();
				test.getp12();
				test.getmango();
				test.getp13();
				test.getpotato();
				test.getp14();
				test.getonion();
				test.getp15();
				test.gettomato();
				test.getp16();
				test.getcucumber();
				test.getp17();
				test.getchocolate();
				test.getp18();
				test.getbiscuits();
				test.getp19();
				test.getchips();
				test.getp20();
				test.getspices();
				test.getp21();
				test.getlentils();
				test.getp22();
				test.getwheat();
				test.getp23();
				test.getflour();
				test.getp24();
				test.getrice();
				test.getp25();
				test.getcereal();
				test.getp26();
				test.getshampoo();
				test.getp27();
				test.getsoap();
				test.getp28();
				test.gethandsanitizer();
				test.getp29();
				test.getdetergent();
				test.getp30();
				test.getdishsoap();
				test.getp31();
				test.getwashroomcleaner();
				test.getp32();
			}
		}
		myfile.close();
	}

	void Additems(string str)
	{
		ProductCatalog test;
		ifstream myfile2("Productcatalog.dat", ios::binary | ios::app);
		if (myfile2.read((char*)&test, sizeof(test)))
		{
			test.getchicken();
			test.getp1();
			test.getmutton();
			test.getp2();
			test.getbeef();
			test.getp3();
			test.getfish();
			test.getp4();
			test.getmilk();
			test.getp5();
			test.geteggs();
			test.getp6();
			test.getyogurt();
			test.getp7();
			test.getcheese();
			test.getp8();
			test.getapple();
			test.getp9();
			test.getorange();
			test.getp10();
			test.getbanana();
			test.getp11();
			test.getwatermelon();
			test.getp12();
			test.getmango();
			test.getp13();
			test.getpotato();
			test.getp14();
			test.getonion();
			test.getp15();
			test.gettomato();
			test.getp16();
			test.getcucumber();
			test.getp17();
			test.getchocolate();
			test.getp18();
			test.getbiscuits();
			test.getp19();
			test.getchips();
			test.getp20();
			test.getspices();
			test.getp21();
			test.getlentils();
			test.getp22();
			test.getwheat();
			test.getp23();
			test.getflour();
			test.getp24();
			test.getrice();
			test.getp25();
			test.getcereal();
			test.getp26();
			test.getshampoo();
			test.getp27();
			test.getsoap();
			test.getp28();
			test.gethandsanitizer();
			test.getp29();
			test.getdetergent();
			test.getp30();
			test.getdishsoap();
			test.getp31();
			test.getwashroomcleaner();
			test.getp32();
		}
		myfile2.close();
	}

	void DeleteItems(string str)
	{
		ProductCatalog test;
		fstream myFile3("temporary.dat", ios::in | ios::out | ios::binary);
		ofstream myFile_temporary("temporary.dat ", ios::app | ios::binary);
		while (myFile3.read((char*)&test, sizeof(test)))
		{
			if ((test.getchicken() != str) || (test.getbeef() != str) || (test.getmutton() != str) || (test.getfish() != str) || (test.getmilk() != str) || (test.geteggs() != str) || (test.getyogurt() != str) || (test.getcheese() != str) || (test.getapple() != str) || (test.getbanana() != str) || (test.getmango() != str) || (test.getorange() != str) || (test.getwatermelon() != str) || (test.gettomato() != str) || (test.getonion() != str) || (test.getcucumber() != str) || (test.getpotato() != str) || (test.getchocolate() != str) || (test.getchips() != str) || (test.getbiscuits() != str) || (test.getspices() != str) || (test.getlentils() != str) || (test.getwheat() != str) || (test.getflour() != str) || (test.getrice() != str) || (test.getcereal() != str) || (test.getshampoo() != str) || (test.getsoap() != str) || (test.gethandsanitizer() != str) || (test.getdetergent() != str) || (test.getdishsoap() != str) || (test.getwashroomcleaner() != str))
			{
				myFile_temporary.write((char*)&test, sizeof(test));
			}
		}
		myFile3.close();
		myFile_temporary.close();
		remove("Productcatalog.dat");
		rename("temporary.dat", "Productcatalog.dat");
	}

	void UpdateItems(ProductCatalog obj)
	{
		ProductCatalog test;
		fstream myFile4("Productcatalog.dat", ios::in | ios::out | ios::binary);
		while (myFile4.read((char*)&test, sizeof(test)))
		{
			if (test.getchicken() == obj.getchicken())
			{
				test.getchicken();
				test.getmutton();
				test.getbeef();
				test.getfish();
				test.getmilk();
				test.geteggs();
				test.getyogurt();
				test.getcheese();
				test.getapple();
				test.getorange();
				test.getbanana();
				test.getwatermelon();
				test.getmango();
				test.getpotato();
				test.getonion();
				test.gettomato();
				test.getcucumber();
				test.getchocolate();
				test.getbiscuits();
				test.getchips();
				test.getspices();
				test.getlentils();
				test.getwheat();
				test.getflour();
				test.getrice();
				test.getcereal();
				test.getshampoo();
				test.getsoap();
				test.gethandsanitizer();
				test.getdetergent();
				test.getdishsoap();
				test.getwashroomcleaner();

				int pos = myFile4.tellg();
				int part = sizeof(test);
				myFile4.seekg(pos - part, ios::beg);
				myFile4.write((char*)&test, sizeof(test));
				break;
			}
		}
		myFile4.close();
	}

};


class Inventory {
public:
	char chicken[50];
	char beef[50];
	char mutton[50];
	char fish[50];
	char milk[50];
	char eggs[50];
	char yogurt[50];
	char cheese[50];
	char apple[50];
	char banana[50];
	char mango[50];
	char orange[50];
	char watermelon[50];
	char tomato[50];
	char onion[50];
	char cucumber[50];
	char potato[50];
	char chocolate[50];
	char chips[50];
	char biscuits[50];
	char spices[50];
	char lentils[50];
	char wheat[50];
	char flour[50];
	char rice[50];
	char cereal[50];
	char shampoo[50];
	char soap[50];
	char handsanitizer[50];
	char detergent[50];
	char dishSoap[50];
	char washroomCleaner[50];

	double priceitem1 = 500, priceitem2 = 1200, priceitem3 = 1500, priceitem4 = 1000, priceitem5 = 200, priceitem6 = 250, priceitem7 = 220, priceitem8 = 500, priceitem9 = 200, priceitem10 = 220, priceitem11 = 300, priceitem12 = 400, priceitem13 = 150, priceitem14 = 80, priceitem15 = 40, priceitem16 = 50, priceitem17 = 60, priceitem18 = 100, priceitem19 = 50, priceitem20 = 30, priceitem21 = 120, priceitem22 = 150, priceitem23 = 200, priceitem24 = 80, priceitem25 = 160, priceitem26 = 500, priceitem27 = 320, priceitem28 = 140, priceitem29 = 300, priceitem30 = 250, priceitem31 = 120, priceitem32 = 400;

	Inventory();
	Inventory(string ch, string bf, string mt, string fi, string mi, string eg, string yog, string che, string app, string ban, string man, string orng, string wm, string tom, string oni, string cuc, string pot, string choc, string chip, string bisc, string spi, string len, string wh, string fl, string ri, string cer, string sham, string so, string hsan, string det, string dso, string wc)
	{
		strcpy_s(chicken, ch.c_str());
		strcpy_s(beef, bf.c_str());
		strcpy_s(mutton, mt.c_str());
		strcpy_s(fish, fi.c_str());
		strcpy_s(milk, mi.c_str());
		strcpy_s(eggs, eg.c_str());
		strcpy_s(yogurt, yog.c_str());
		strcpy_s(cheese, che.c_str());
		strcpy_s(apple, app.c_str());
		strcpy_s(banana, ban.c_str());
		strcpy_s(mango, man.c_str());
		strcpy_s(orange, orng.c_str());
		strcpy_s(watermelon, wm.c_str());
		strcpy_s(tomato, tom.c_str());
		strcpy_s(onion, oni.c_str());
		strcpy_s(cucumber, cuc.c_str());
		strcpy_s(potato, pot.c_str());
		strcpy_s(chocolate, choc.c_str());
		strcpy_s(chips, chip.c_str());
		strcpy_s(biscuits, bisc.c_str());
		strcpy_s(spices, spi.c_str());
		strcpy_s(lentils, len.c_str());
		strcpy_s(wheat, wh.c_str());
		strcpy_s(flour, fl.c_str());
		strcpy_s(rice, ri.c_str());
		strcpy_s(cereal, cer.c_str());
		strcpy_s(shampoo, sham.c_str());
		strcpy_s(soap, so.c_str());
		strcpy_s(handsanitizer, hsan.c_str());
		strcpy_s(detergent, det.c_str());
		strcpy_s(dishSoap, dso.c_str());
		strcpy_s(washroomCleaner, wc.c_str());
	}

	//setters & getters
	void setchicken(string ch)
	{
		strcpy_s(chicken, ch.c_str());
	}
	void setbeef(string bf)
	{
		strcpy_s(beef, bf.c_str());
	}
	void setmutton(string mt)
	{
		strcpy_s(mutton, mt.c_str());
	}
	void setfish(string fi)
	{
		strcpy_s(fish, fi.c_str());
	}
	void setmilk(string mi)
	{
		strcpy_s(milk, mi.c_str());
	}
	void setegg(string eg)
	{
		strcpy_s(eggs, eg.c_str());
	}
	void setyoghurt(string yog)
	{
		strcpy_s(yogurt, yog.c_str());
	}
	void setcheese(string che)
	{
		strcpy_s(cheese, che.c_str());
	}
	void setapple(string app)
	{
		strcpy_s(apple, app.c_str());
	}
	void setbanana(string ban)
	{
		strcpy_s(banana, ban.c_str());
	}
	void setmango(string man)
	{
		strcpy_s(mango, man.c_str());
	}
	void setorange(string orng)
	{
		strcpy_s(orange, orng.c_str());
	}
	void setwatermelon(string wm)
	{
		strcpy_s(watermelon, wm.c_str());
	}
	void settomato(string tom)
	{
		strcpy_s(tomato, tom.c_str());
	}
	void setonion(string oni)
	{
		strcpy_s(onion, oni.c_str());
	}
	void setcucumber(string cuc)
	{
		strcpy_s(cucumber, cuc.c_str());
	}
	void setpotato(string pot)
	{
		strcpy_s(potato, pot.c_str());
	}
	void setchocolate(string choc)
	{
		strcpy_s(chocolate, choc.c_str());
	}
	void setchips(string chip)
	{
		strcpy_s(chips, chip.c_str());
	}
	void setbiscuits(string bisc)
	{
		strcpy_s(biscuits, bisc.c_str());
	}
	void setspices(string spi)
	{
		strcpy_s(spices, spi.c_str());
	}
	void setlentils(string len)
	{
		strcpy_s(lentils, len.c_str());
	}
	void setwheat(string wh)
	{
		strcpy_s(wheat, wh.c_str());
	}
	void setflour(string fl)
	{
		strcpy_s(flour, fl.c_str());
	}
	void setrice(string ri)
	{
		strcpy_s(rice, ri.c_str());
	}
	void setcereal(string cer)
	{
		strcpy_s(cereal, cer.c_str());
	}
	void setshampoo(string sham)
	{
		strcpy_s(shampoo, sham.c_str());
	}
	void setsoap(string so)
	{
		strcpy_s(soap, so.c_str());
	}
	void sethandsanitizer(string hsan)
	{
		strcpy_s(handsanitizer, hsan.c_str());
	}
	void setdetergent(string det)
	{
		strcpy_s(detergent, det.c_str());
	}
	void setdishsoap(string dso)
	{
		strcpy_s(dishSoap, dso.c_str());
	}
	void setwashroomcleaner(string wc)
	{
		strcpy_s(washroomCleaner, wc.c_str());
	}


	void setp1(double p1)
	{
		priceitem1 = p1;
	}
	void setp2(double p2)
	{
		priceitem2 = p2;
	}
	void setp3(double p3)
	{
		priceitem3 = p3;
	}
	void setp4(double p4)
	{
		priceitem4 = p4;
	}
	void setp5(double p5)
	{
		priceitem5 = p5;
	}
	void setp6(double p6)
	{
		priceitem6 = p6;
	}
	void setp7(double p7)
	{
		priceitem7 = p7;
	}
	void setp8(double p8)
	{
		priceitem8 = p8;
	}
	void setp9(double p9)
	{
		priceitem9 = p9;
	}
	void setp10(double p10)
	{
		priceitem10 = p10;
	}
	void setp11(double p11)
	{
		priceitem11 = p11;
	}
	void setp12(double p12)
	{
		priceitem12 = p12;
	}
	void setp13(double p13)
	{
		priceitem13 = p13;
	}
	void setp14(double p14)
	{
		priceitem14 = p14;
	}
	void setp15(double p15)
	{
		priceitem15 = p15;
	}
	void setp16(double p16)
	{
		priceitem16 = p16;
	}
	void setp17(double p17)
	{
		priceitem17 = p17;
	}
	void setp18(double p18)
	{
		priceitem18 = p18;
	}
	void setp19(double p19)
	{
		priceitem19 = p19;
	}
	void setp20(double p20)
	{
		priceitem20 = p20;
	}
	void setp21(double p21)
	{
		priceitem21 = p21;
	}
	void setp22(double p22)
	{
		priceitem22 = p22;
	}
	void setp23(double p23)
	{
		priceitem23 = p23;
	}
	void setp24(double p24)
	{
		priceitem24 = p24;
	}
	void setp25(double p25)
	{
		priceitem25 = p25;
	}
	void setp26(double p26)
	{
		priceitem26 = p26;
	}
	void setp27(double p27)
	{
		priceitem27 = p27;
	}
	void setp28(double p28)
	{
		priceitem28 = p28;
	}
	void setp29(double p29)
	{
		priceitem29 = p29;
	}
	void setp30(double p30)
	{
		priceitem30 = p30;
	}
	void setp31(double p31)
	{
		priceitem31 = p31;
	}
	void setp32(double p32)
	{
		priceitem32 = p32;
	}


	//getters
	string getchicken()
	{
		return chicken;
	}
	string getbeef()
	{
		return beef;
	}
	string getmutton()
	{
		return mutton;
	}
	string getfish()
	{
		return fish;
	}
	string getmilk()
	{
		return milk;
	}
	string geteggs()
	{
		return eggs;
	}
	string getyogurt()
	{
		return yogurt;
	}
	string getcheese()
	{
		return cheese;
	}
	string getapple()
	{
		return apple;
	}
	string getbanana()
	{
		return banana;
	}
	string getmango()
	{
		return mango;
	}
	string getorange()
	{
		return orange;
	}
	string getwatermelon()
	{
		return watermelon;
	}
	string gettomato()
	{
		return tomato;
	}
	string getonion()
	{
		return onion;
	}
	string getcucumber()
	{
		return cucumber;
	}
	string getpotato()
	{
		return potato;
	}
	string getchocolate()
	{
		return chocolate;
	}
	string getchips()
	{
		return chips;
	}
	string getbiscuits()
	{
		return biscuits;
	}
	string getspices()
	{
		return spices;
	}
	string getlentils()
	{
		return lentils;
	}
	string getwheat()
	{
		return wheat;
	}
	string getflour()
	{
		return flour;
	}
	string getrice()
	{
		return rice;
	}
	string getcereal()
	{
		return cereal;
	}
	string getshampoo()
	{
		return shampoo;
	}
	string getsoap()
	{
		return soap;
	}
	string gethandsanitizer()
	{
		return handsanitizer;
	}
	string getdetergent()
	{
		return detergent;
	}
	string getdishsoap()
	{
		return dishSoap;
	}
	string getwashroomcleaner()
	{
		return washroomCleaner;
	}


	double getp1()
	{
		return priceitem1;
	}
	double getp2()
	{
		return priceitem2;
	}
	double getp3()
	{
		return priceitem3;
	}
	double getp4()
	{
		return priceitem4;
	}
	double getp5()
	{
		return priceitem5;
	}
	double getp6()
	{
		return priceitem6;
	}
	double getp7()
	{
		return priceitem7;
	}
	double getp8()
	{
		return priceitem8;
	}
	double getp9()
	{
		return priceitem9;
	}
	double getp10()
	{
		return priceitem10;
	}
	double getp11()
	{
		return priceitem11;
	}
	double getp12()
	{
		return priceitem12;
	}
	double getp13()
	{
		return priceitem13;
	}
	double getp14()
	{
		return priceitem14;
	}
	double getp15()
	{
		return priceitem15;
	}
	double getp16()
	{
		return priceitem16;
	}
	double getp17()
	{
		return priceitem17;
	}
	double getp18()
	{
		return priceitem18;
	}
	double getp19()
	{
		return priceitem19;
	}
	double getp20()
	{
		return priceitem20;
	}
	double getp21()
	{
		return priceitem21;
	}
	double getp22()
	{
		return priceitem22;
	}
	double getp23()
	{
		return priceitem23;
	}
	double getp24()
	{
		return priceitem24;
	}
	double getp25()
	{
		return priceitem25;
	}
	double getp26()
	{
		return priceitem26;
	}
	double getp27()
	{
		return priceitem27;
	}
	double getp28()
	{
		return priceitem28;
	}
	double getp29()
	{
		return priceitem29;
	}
	double getp30()
	{
		return priceitem30;
	}
	double getp31()
	{
		return priceitem31;
	}
	double getp32()
	{
		return priceitem32;
	}

	void display()
	{
		cout << "-----Items Available-----" << endl;
		cout << "Name" << "\t\t\t" << "Price" << endl;
		cout << "Chicken" << "\t\t\t" << 650 << endl;
		cout << "Beef" << "\t\t\t" << 1200 << endl;
		cout << "Mutton" << "\t\t\t" << 1500 << endl;
		cout << "Fish" << "\t\t\t" << 1000 << endl;
		cout << "Milk" << "\t\t\t" << 240 << endl;
		cout << "Eggs" << "\t\t\t" << 300 << endl;
		cout << "Yogurt" << "\t\t\t" << 250 << endl;
		cout << "Cheese" << "\t\t\t" << 2500 << endl;
		cout << "Apple" << "\t\t\t" << 400 << endl;
		cout << "Banana" << "\t\t\t" << 320 << endl;
		cout << "Mango" << "\t\t\t" << 450 << endl;
		cout << "Orange" << "\t\t\t" << 450 << endl;
		cout << "Watermelon" << "\t\t\t" << 380 << endl;
		cout << "Tomato" << "\t\t\t" << 100 << endl;
		cout << "Onion" << "\t\t\t" << 80 << endl;
		cout << "Cucumber" << "\t\t\t" << 70 << endl;
		cout << "Chocolate" << "\t\t\t" << 300 << endl;
		cout << "Chips" << "\t\t\t" << 100 << endl;
		cout << "Biscuits" << "\t\t\t" << 50 << endl;
		cout << "Spices" << "\t\t\t" << 120 << endl;
		cout << "Lentils" << "\t\t\t" << 150 << endl;
		cout << "Wheat" << "\t\t\t" << 200 << endl;
		cout << "Flour" << "\t\t\t" << 150 << endl;
		cout << "Rice" << "\t\t\t" << 180 << endl;
		cout << "Cereal" << "\t\t\t" << 600 << endl;
		cout << "Shampoo" << "\t\t\t" << 550 << endl;
		cout << "Soap" << "\t\t\t" << 250 << endl;
		cout << "Hand Sanitizer" << "\t\t\t" << 450 << endl;
		cout << "Detergent" << "\t\t\t" << 500 << endl;
		cout << "Dish Soap" << "\t\t\t" << 140 << endl;
		cout << "Washroom Cleaner" << "\t\t\t" << 330 << endl;

	}

	void AddItems_W(string str, Inventory test)
	{
		ofstream myfile("Inventory.dat", ios::binary | ios::app);
		while (myfile.write((char*)&test, sizeof(test)))
		{
			if (test.getchicken() == str)
			{
				test.getchicken();
				test.getp1();
				test.getmutton();
				test.getp2();
				test.getbeef();
				test.getp3();
				test.getfish();
				test.getp4();
				test.getmilk();
				test.getp5();
				test.geteggs();
				test.getp6();
				test.getyogurt();
				test.getp7();
				test.getcheese();
				test.getp8();
				test.getapple();
				test.getp9();
				test.getorange();
				test.getp10();
				test.getbanana();
				test.getp11();
				test.getwatermelon();
				test.getp12();
				test.getmango();
				test.getp13();
				test.getpotato();
				test.getp14();
				test.getonion();
				test.getp15();
				test.gettomato();
				test.getp16();
				test.getcucumber();
				test.getp17();
				test.getchocolate();
				test.getp18();
				test.getbiscuits();
				test.getp19();
				test.getchips();
				test.getp20();
				test.getspices();
				test.getp21();
				test.getlentils();
				test.getp22();
				test.getwheat();
				test.getp23();
				test.getflour();
				test.getp24();
				test.getrice();
				test.getp25();
				test.getcereal();
				test.getp26();
				test.getshampoo();
				test.getp27();
				test.getsoap();
				test.getp28();
				test.gethandsanitizer();
				test.getp29();
				test.getdetergent();
				test.getp30();
				test.getdishsoap();
				test.getp31();
				test.getwashroomcleaner();
				test.getp32();
			}
		}
		myfile.close();
	}

	void Additems(string str)
	{
		Inventory test;
		ifstream myfile2("Inventory.dat", ios::binary | ios::app);
		if (myfile2.read((char*)&test, sizeof(test)))
		{
			test.getchicken();
			test.getp1();
			test.getmutton();
			test.getp2();
			test.getbeef();
			test.getp3();
			test.getfish();
			test.getp4();
			test.getmilk();
			test.getp5();
			test.geteggs();
			test.getp6();
			test.getyogurt();
			test.getp7();
			test.getcheese();
			test.getp8();
			test.getapple();
			test.getp9();
			test.getorange();
			test.getp10();
			test.getbanana();
			test.getp11();
			test.getwatermelon();
			test.getp12();
			test.getmango();
			test.getp13();
			test.getpotato();
			test.getp14();
			test.getonion();
			test.getp15();
			test.gettomato();
			test.getp16();
			test.getcucumber();
			test.getp17();
			test.getchocolate();
			test.getp18();
			test.getbiscuits();
			test.getp19();
			test.getchips();
			test.getp20();
			test.getspices();
			test.getp21();
			test.getlentils();
			test.getp22();
			test.getwheat();
			test.getp23();
			test.getflour();
			test.getp24();
			test.getrice();
			test.getp25();
			test.getcereal();
			test.getp26();
			test.getshampoo();
			test.getp27();
			test.getsoap();
			test.getp28();
			test.gethandsanitizer();
			test.getp29();
			test.getdetergent();
			test.getp30();
			test.getdishsoap();
			test.getp31();
			test.getwashroomcleaner();
			test.getp32();
		}
		myfile2.close();
	}

	void DeleteItems(string str)
	{
		Inventory test;
		fstream myFile3("temporary2.dat", ios::in | ios::out | ios::binary);
		ofstream myFile_temporary("temporary2.dat ", ios::app | ios::binary);
		while (myFile3.read((char*)&test, sizeof(test)))
		{
			if ((test.getchicken() != str) || (test.getbeef() != str) || (test.getmutton() != str) || (test.getfish() != str) || (test.getmilk() != str) || (test.geteggs() != str) || (test.getyogurt() != str) || (test.getcheese() != str) || (test.getapple() != str) || (test.getbanana() != str) || (test.getmango() != str) || (test.getorange() != str) || (test.getwatermelon() != str) || (test.gettomato() != str) || (test.getonion() != str) || (test.getcucumber() != str) || (test.getpotato() != str) || (test.getchocolate() != str) || (test.getchips() != str) || (test.getbiscuits() != str) || (test.getspices() != str) || (test.getlentils() != str) || (test.getwheat() != str) || (test.getflour() != str) || (test.getrice() != str) || (test.getcereal() != str) || (test.getshampoo() != str) || (test.getsoap() != str) || (test.gethandsanitizer() != str) || (test.getdetergent() != str) || (test.getdishsoap() != str) || (test.getwashroomcleaner() != str))
			{
				myFile_temporary.write((char*)&test, sizeof(test));
			}
		}
		myFile3.close();
		myFile_temporary.close();
		remove("Inventory.dat");
		rename("temporary2.dat", "Inventory.dat");
	}

	void UpdateItems(Inventory obj)
	{
		Inventory test;
		fstream myFile4("Inventory.dat", ios::in | ios::out | ios::binary);
		while (myFile4.read((char*)&test, sizeof(test)))
		{
			if (test.getchicken() == obj.getchicken())
			{
				test.getchicken();
				test.getmutton();
				test.getbeef();
				test.getfish();
				test.getmilk();
				test.geteggs();
				test.getyogurt();
				test.getcheese();
				test.getapple();
				test.getorange();
				test.getbanana();
				test.getwatermelon();
				test.getmango();
				test.getpotato();
				test.getonion();
				test.gettomato();
				test.getcucumber();
				test.getchocolate();
				test.getbiscuits();
				test.getchips();
				test.getspices();
				test.getlentils();
				test.getwheat();
				test.getflour();
				test.getrice();
				test.getcereal();
				test.getshampoo();
				test.getsoap();
				test.gethandsanitizer();
				test.getdetergent();
				test.getdishsoap();
				test.getwashroomcleaner();

				int pos = myFile4.tellg();
				int part = sizeof(test);
				myFile4.seekg(pos - part, ios::beg);
				myFile4.write((char*)&test, sizeof(test));
				break;
			}
		}
		myFile4.close();
	}

};//aggregated to manager



class Manager :public User {
protected:
	string Email;
	User user;
	Inventory* i;
public:
	void setemail(string e)
	{
		Email = e;
	}

	string getemail()
	{
		return Email;
	}

	Manager()
	{
		Email = ' ';
	}

	Manager(string e)
	{
		Email = e;
	}

	Manager(Manager& obj)
	{
		Email = obj.Email;
	}

	void Register()
	{
		int choice;
		cout << "Manager cannot be registered except by admin. Please contact admin" << endl;
		cout << "You can login with saved credentials" << endl;
		cout << "Press 1 to login" << endl;
		cin >> choice;
		if (choice == 1)
		{
			Login();
		}
	}

	void Login()
	{
		int count = 0;
		string user, pass, u, p;
		system("cls");
		cout << "Please enter the following details" << endl;
		cout << "Username :";
		cin >> user;
		cout << "Password :";
		cin >> pass;

		ifstream input("Managers.dat", ios::in);
		while (input >> u >> p)
		{
			if (u == user && p == pass)

			{
				count = 1;
				system("cls");
			}
		}
		input.close();
		if (count == 1)
		{
			cout << "\nHello " << user << "\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
			Menu();
			//cin.get();
			//cin.get();
		}
		else
		{
			int choice;
			cout << "\nLOGIN ERROR\nPlease check your username and password\n";
			cout << "Press 1 to try and login again" << endl;
			cin >> choice;
			if (choice == 1)
			{
				Login();
			}
		}
	}

	void Menu()
	{
		system("cls");
		int choice;
		cout << "--------Manager Main Menu--------" << endl;
		cout << "Press 1 to add item(s) to inventory" << endl;
		cout << "Press 2 to remove item(s) from inventory" << endl;
		cout << "Press 3 to update item(s) in inventory" << endl;
		cout << "Press 4 to search inventory items" << endl;
		cout << "Press 5 to view inventory items" << endl;
		cout << "Press 6 to check customer feedback" << endl;
		cout << "Press 7 to logout of the system" << endl;
		cin >> choice;
		if (choice == 1)
		{
			addInventory();
		}
		else if (choice == 2)
		{
			removeInventory();
		}
		else if (choice == 3)
		{
			updateInventory();
		}
		else if (choice == 4)
		{
			searchInventory();
		}
		else if (choice == 5)
		{
			viewInventory();
		}
		else if (choice == 6)
		{
			checkFeedback(3, 5, 4, "Very convenient for online shoppig");
		}
		else if (choice == 7)
		{
			Logout();
		}
		else
			cout << "Wrong choice" << endl;
		cin >> choice;
	}
	void addInventory()
	{
		Inventory object;
		string name;
		double price;
		int quantity;
		cout << "Enter name of item to be added: ";
		cin >> name;
		cout << "Enter price of product to be added: ";
		cin >> price;
		cout << "Enter quantity of product to be added: ";
		cin >> quantity;
		ofstream myFile7("Inventory.h", ios::binary | ios::app);
		if (myFile7.write((char*)&object, sizeof(object)))
			cout << "Product added to inventory" << endl;
		myFile7.close();
	}
	void removeInventory()
	{
		string name;
		double price;
		int quantity;
		cout << "Enter name of item to be removed: ";
		cin >> name;
		cout << "Enter price of product to be removed: ";
		cin >> price;
		cout << "Enter quantity of product to be removed: ";
		cin >> quantity;
		cout << "Product removed from inventory" << endl;
	}
	void updateInventory()
	{
		string name;
		double price;
		int quantity;
		cout << "Enter name of item to be updated: ";
		cin >> name;
		cout << "Enter updated price of product: ";
		cin >> price;
		cout << "Enter updated quantity of product: ";
		cin >> quantity;
		cout << "Product updated in inventory" << endl;
	}
	void searchInventory()
	{
		string name;
		cout << "Enter name of item to be searched: ";
		cin >> name;
		cout << "No such item found" << endl;
	}
	void viewInventory()
	{
		system("cls");
		cout << "-----Items in Inventory-----" << endl;
		cout << "Name" << "\t\t\t" << "Price" << endl;
		cout << "Chicken" << "\t\t\t" << 650 << endl;
		cout << "Beef" << "\t\t\t" << 1200 << endl;
		cout << "Mutton" << "\t\t\t" << 1500 << endl;
		cout << "Fish" << "\t\t\t" << 1000 << endl;
		cout << "Milk" << "\t\t\t" << 240 << endl;
		cout << "Eggs" << "\t\t\t" << 300 << endl;
		cout << "Yogurt" << "\t\t\t" << 250 << endl;
		cout << "Cheese" << "\t\t\t" << 2500 << endl;
		cout << "Apple" << "\t\t\t" << 400 << endl;
		cout << "Banana" << "\t\t\t" << 320 << endl;
		cout << "Mango" << "\t\t\t" << 450 << endl;
		cout << "Orange" << "\t\t\t" << 450 << endl;
		cout << "Watermelon" << "\t\t\t" << 380 << endl;
		cout << "Tomato" << "\t\t\t" << 100 << endl;
		cout << "Onion" << "\t\t\t" << 80 << endl;
		cout << "Cucumber" << "\t\t\t" << 70 << endl;
		cout << "Chocolate" << "\t\t\t" << 300 << endl;
		cout << "Chips" << "\t\t\t" << 100 << endl;
		cout << "Biscuits" << "\t\t\t" << 50 << endl;
		cout << "Spices" << "\t\t\t" << 120 << endl;
		cout << "Lentils" << "\t\t\t" << 150 << endl;
		cout << "Wheat" << "\t\t\t" << 200 << endl;
		cout << "Flour" << "\t\t\t" << 150 << endl;
		cout << "Rice" << "\t\t\t" << 180 << endl;
		cout << "Cereal" << "\t\t\t" << 600 << endl;
		cout << "Shampoo" << "\t\t\t" << 550 << endl;
		cout << "Soap" << "\t\t\t" << 250 << endl;
		cout << "Hand Sanitizer" << "\t\t\t" << 450 << endl;
		cout << "Detergent" << "\t\t\t" << 500 << endl;
		cout << "Dish Soap" << "\t\t\t" << 140 << endl;
		cout << "Washroom Cleaner" << "\t\t\t" << 330 << endl;
	}
	void checkFeedback(int rate1, int rate2, int rate3, string feedb)
	{
		int opt;
		cout << "Press 1 to check latest feedback" << endl;
		cin >> opt;
		if (opt == 1)
		{
			cout << "Latest Available Feedback" << endl;
			cout << "Rating 1: " << rate1 << " out of 5" << endl;
			cout << "Rating 2: " << rate2 << " out of 5" << endl;
			cout << "Rating 3: " << rate3 << " out of 5" << endl;
			cout << "Feedback/Suggestions: " << feedb << endl;
		}
	}

	void Logout()
	{
		cout << "Sucessfully Logged Out" << endl;
	}

};



class Feedback {
	Manager *m;
public:

	Feedback()
	{
	}
	void givefeedback()
	{
		Feedback test;
		int r1, r2, r3, add;
		string feed;
		system("cls");
		cout << "Please provide a feedback on your shopping experience with us" << endl;
		cout << "On a scale of 1 to 5, how satisfied were you with our service?: ";
		cin >> r1;
		cout << "On a scale of 1 to 5, how likely are you to recommend this site to others: ";
		cin >> r2;
		cout << "On a scale of 1 to 5, how easy is the checkout process: ";
		cin >> r3;
		cout << "Would you like to add something(feedback, suggestion, complaints). Press 1 for Yes and 2 for No" << endl;
		cin >> add;
		if (add == 1)
		{
			cout << "Please write your suggestions or complaints below" << endl;
			cin >> feed;
			cout << "Your responses and suggestions have been recorded" << endl;
			cout << "Thankyou for your feedback. It helps us improve our services" << endl;
			m->checkFeedback(r1,r2,r3,feed);
			ofstream myFile6("Feedback.dat", ios::binary | ios::app);
			if (myFile6.write((char*)&test, sizeof(test)))
			myFile6.close();
		}
		else if (add == 2)
		{
			cout << "Your responses have been recorded" << endl;
			cout << "Thankyou for your feedback. It helps us improve our services" << endl;
			m->checkFeedback(r1, r2, r3, "");
			ofstream myFile6("Feedback.dat", ios::binary | ios::app);
			if (myFile6.write((char*)&test, sizeof(test)))
				myFile6.close();
		}
	}
};


class Payment {
	Feedback* f;
public:
	Payment()
	{}

	void pay(string indexx, int quantityy, string unitofmeasure, int totall)
	{
		system("cls");
		int opt,cvc;
		bool invalid = false;
		bool invalid2 = false;
		string city, store, cardnum, mobacc;
		cout << "Please choose your preferred method of payment" << endl;
		cout << "Your total bill is " << totall << " PKR" << endl;
 		cout << "Press 1 for Debit/Credit Card" << endl;
		cout << "Press 2 for Easypaisa/JazzCash" << endl;
		cout << "Press 3 for Cash on Delivery(+50 extra charges)" << endl;
		cin >> opt;
		if (opt == 1)
		{
			cout << "Enter 14 digit Card Number " << endl;
			cin >> cardnum;
			if (cardnum.length() != 14)
			{
				invalid = true;
			}
			if (invalid == true)
			{
				cout << "The Card Number you entered is invalid please enter again : ";
				cin >> cardnum;
			}
			if (invalid == false)
			{
				cout << "Enter 3 digit cvc: ";
				cin >> cvc;
				cout << "Online payment Successful. Your Order has been placed" << endl;
				cout << "Thankyou for choosing us" << endl;
				f->givefeedback();
			}

		}
		else if (opt == 2)
		{
			cout << "Enter Easypaisa or JazzCash Account Number: " << endl;
			cin >> mobacc;
			if (mobacc.length() != 11)
			{
				invalid2 = true;
			}
			if (invalid2 == true)
			{
				cout << "The Mobile Account Number you entered is invalid please enter again : ";
				cin >> mobacc;
			}
			if (invalid2 == false)
			{
				cout << "Online payment Successful. Your Order has been placed" << endl;
				cout << "Thankyou for choosing us" << endl;
				f->givefeedback();
			}

		}
		else if (opt == 3)
		{
			cout << "Enter your city: ";
			cin >> city;
			cout << "Enter city of store: ";
			cin >> store;
			if (city == store)
			{
				cout << "Thankyou for your Order. Your bill is " << totall + 30 << endl;
				cout << "We hope to see your again" << endl;
				f->givefeedback();

			}
			else
			{
				cout << "Thankyou for your Order. Your bill is " << totall + 50 << endl;
				cout << "We hope to see your again" << endl;
				totall = totall + 50;
				f->givefeedback();
			}
		}
	}
};


class Customer : public User, public Inventory{
protected:
	string Email;
	User user;
	Payment* p;
public:
	void setemail(string e)
	{
		Email = e;
	}

	string getemail()
	{
		return Email;
	}

	Customer()
	{
		Email = ' ';
	}

	Customer(string e)
	{
		Email = e;
	}

	Customer(Customer& obj)
	{
		Email = obj.Email;
	}

	void Register() 
	{
		int opt;
		cout << "Press 1 to login if you already have an account" << endl;
		cin >> opt;
		if (opt == 1)
			Login();



		string name, cnic, password, id, address, phonenum, email;
		bool invalid = false;
		bool same = false;
		Customer c1;
		cout << "Enter username: ";
		cin >> name;
		c1.setName(name);
		cout << "Enter ID: ";
		cin >> id;
		c1.setID(id);
		cout << "Enter Email: ";
		cin >> email;
		c1.setemail(email);
		cout << "Enter 13 digit CNIC: ";
		cin >> cnic;

		do
		{
			invalid = false;
			for (int i = 0; cnic[i] != '\0'; i++)
			{
				if (cnic[i] < 48 || cnic[i] > 57) {
					invalid = true;
					break;
				}
			}
			if (cnic.length() != 13)
			{
				invalid = true;
			}
			if (invalid == true)
			{
				cout << "The CNIC you entered is invalid please enter again : ";
				cin >> cnic;
			}
		} while (invalid == true);

		do
		{
			same = false;
			ifstream fin("Customer.dat");
			while (fin.read((char*)&user, sizeof(user))) {
				string strtemp = user.getCNIC();
				if (cnic == strtemp)
				{
					same = true;
					break;
				}
			}
			fin.close();
			if (same == true)
			{
				cout << "The CNIC you entered is already in use please enter another : ";
				cin >> cnic;
				do
				{
					invalid = false;
					for (int i = 0; cnic[i] != '\0'; i++)
					{
						if (cnic[i] < 48 || cnic[i] > 57) {
							invalid = true;
							break;
						}
					}
					if (cnic.length() > 13)
					{
						invalid = true;
					}
					if (invalid == true)
					{
						cout << "The CNIC you entered is invalid please enter again : ";
						cin >> cnic;
					}
				} while (invalid == true);
			}
		} while (same == true);



		c1.setCNIC(cnic);

		cout << "Enter password: ";
		cin >> password;
		c1.setPassword(password);
		cout << "Enter phone number: ";
		cin >> phonenum;
		c1.setphoneNum(phonenum);
		cout << "Enter address: ";
		cin >> address;
		c1.setAddress(address);


		ofstream myFile;
		myFile.open("Customers.dat", ios::app);
		myFile << name << " " << password << " " << id << " " << cnic << " " << address << " " << phonenum <<" " << email << endl;
		myFile.close();
		system("cls");
		cout << "Registration Successful" << endl;
	}
	void Login()
	{
		int count = 0;
		string user, pass, u, p;
		system("cls");
		cout << "Please enter the following details" << endl;
		cout << "Username :";
		cin >> user;
		cout << "Password :";
		cin >> pass;

		ifstream input("Customers.dat", ios::in);
		while (input >> u >> p)
		{
			if (u == user && p == pass)

			{
				count = 1;
				system("cls");
			}
		}
		input.close();
		if (count == 1)
		{
			cout << "\nHello " << user << "\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
			cin.get();
			cin.get();
		}
		else
		{
			int choice;
			cout << "\nLOGIN ERROR\nPlease check your username and password\n";
			cout << "You can register a new account or try to login again" << endl;
			cout << "Press 1 to register account or 2 to login again" << endl;
			cin >> choice;
			if (choice == 1)
			{
				Register();
			}
			if (choice == 2)
			{
				Login();
			}
		}
	}

	void Menu()
	{
		system("cls");
		int choice;
		cout << "--------Customer Main Menu--------" << endl;
		cout << "We hope you have a pleasant Online experience" << endl;
		cout << "Press 1 to view items" << endl;
		cout << "Press 2 to proceed to Check Out" << endl;
		cout << "Press 3 to logout" << endl;
		cin >> choice;

		if (choice == 1)
		{
			viewitems("Inventory.h");
		}
		if (choice == 2)
		{
			cout << "Please select an item to buy first" << endl;
		}
		if (choice == 3)
		{
			Logout();
		}
	}

	void viewitems(string a)
	{
		Inventory test;
		ifstream myFile5("Inventory.dat", ios::binary);
		while (myFile5.read((char*)&test, sizeof(test)))
		{
			test.display();
		}
		myFile5.close();

		int index,quantity, total;
		cout << "-----Items Available-----" << endl;
		cout << "Name" << "\t\t\t" << "Price" << endl;
		cout << "Chicken" << "\t\t\t" << 650 << endl;
		cout << "Beef" << "\t\t\t" << 1200 << endl;
		cout << "Mutton" << "\t\t\t" << 1500 << endl;
		cout << "Fish" << "\t\t\t" << 1000 << endl;
		cout << "Milk" << "\t\t\t" << 240 << endl;
		cout << "Eggs" << "\t\t\t" << 300 << endl;
		cout << "Yogurt" << "\t\t\t" << 250 << endl;
		cout << "Cheese" << "\t\t\t" << 2500 << endl;
		cout << "Apple" << "\t\t\t" << 400 << endl;
		cout << "Banana" << "\t\t\t" << 320 << endl;
		cout << "Mango" << "\t\t\t" << 450 << endl;
		cout << "Orange" << "\t\t\t" << 450 << endl;
		cout << "Watermelon" << "\t\t\t" << 380 << endl;
		cout << "Tomato" << "\t\t\t" << 100 << endl;
		cout << "Onion" << "\t\t\t" << 80 << endl;
		cout << "Cucumber" << "\t\t\t" << 70 << endl;
		cout << "Chocolate" << "\t\t\t" << 300 << endl;
		cout << "Chips" << "\t\t\t" << 100 << endl;
		cout << "Biscuits" << "\t\t\t" << 50 << endl;
		cout << "Spices" << "\t\t\t" << 120 << endl;
		cout << "Lentils" << "\t\t\t" << 150 << endl;
		cout << "Wheat" << "\t\t\t" << 200 << endl;
		cout << "Flour" << "\t\t\t" << 150 << endl;
		cout << "Rice" << "\t\t\t" << 180 << endl;
		cout << "Cereal" << "\t\t\t" << 600 << endl;
		cout << "Shampoo" << "\t\t\t" << 550 << endl;
		cout << "Soap" << "\t\t\t" << 250 << endl;
		cout << "Hand Sanitizer" << "\t\t\t" << 450 << endl;
		cout << "Detergent" << "\t\t\t" << 500 << endl;
		cout << "Dish Soap" << "\t\t\t" << 140 << endl;
		cout << "Washroom Cleaner" << "\t\t\t" << 330 << endl;

		cout << "Enter index of item you want to buy" << endl;
		cin >> index;
		if (index == 1)
		{
			cout << "Select quantity of Chicken in kg to add in your cart: ";
			cin >> quantity;
			total = 650 * quantity;
			checkout("Chicken",quantity,"kg", total);
		}
		else if (index == 2)
		{
			cout << "Select quantity of Beef in kg to add in your cart: ";
			cin >> quantity;
			total = 1200 * quantity;
			checkout("Beef",quantity,"kg",total);
		}
		else if (index == 3)
		{
			cout << "Select quantity of Mutton in kg to add in your cart: ";
			cin >> quantity;
			total = 1500 * quantity;
			checkout("Mutton", quantity, "kg", total);
		}
		else if (index == 4)
		{
			cout << "Select quantity of Fish in kg to add in your cart: ";
			cin >> quantity;
			total = 1000 * quantity;
			checkout("Fish", quantity, "kg", total);
		}
		else if (index == 5)
		{
			cout << "Select quantity of Milk in litres to add in your cart: ";
			cin >> quantity;
			total = 240 * quantity;
			checkout("Milk", quantity, "litres", total);
		}
		else if (index == 6)
		{
			cout << "Select quantity of eggs in dozens to add in your cart: ";
			cin >> quantity;
			total = 300 * quantity;
			checkout("Eggs", quantity, "dozen", total);
		}
		else if (index == 7)
		{
			cout << "Select quantity of yogurt in kg to add in your cart: ";
			cin >> quantity;
			total = 250 * quantity;
			checkout("Yogurt", quantity, "kg", total);
		}
		else if (index == 8)
		{
			cout << "Select quantity of Cheese in kg to add in your cart: ";
			cin >> quantity;
			total = 2500 * quantity;
			checkout("Cheese", quantity, "kg", total);
		}
		else if (index == 9)
		{
			cout << "Select quantity of Apple in  to add in your cart: ";
			cin >> quantity;
			total = 400 * quantity;
			checkout("Apple", quantity, "kg", total);
		}
		else if (index == 10)
		{
			cout << "Select quantity of Banana in kg to add in your cart: ";
			cin >> quantity;
			total = 320 * quantity;
			checkout("Banana", quantity, "kg", total);
		}
		else if (index == 11)
		{
			cout << "Select quantity of Mango in to add in your cart: ";
			cin >> quantity;
			total = 450 * quantity;
			checkout("Mango", quantity, "kg", total);
		}
		else if (index == 12)
		{
			cout << "Select quantity of Orange in kg to add in your cart: ";
			cin >> quantity;
			total = 450 * quantity;
			checkout("Orange", quantity, "kg", total);
		}
		else if (index == 13)
		{
			cout << "Select quantity o Watermelon in kg to add in your cart: ";
			cin >> quantity;
			total = 380 * quantity;
			checkout("Watermelon", quantity, "kg", total);
		}
		else if (index == 14)
		{
			cout << "Select quantity of Tomato in kg to add in your cart: ";
			cin >> quantity;
			total = 100 * quantity;
			checkout("Tomato", quantity, "kg", total);
		}
		else if (index == 15)
		{
			cout << "Select quantity of Onion in kg to add in your cart: ";
			cin >> quantity;
			total = 80 * quantity;
			checkout("Onion", quantity, "kg", total);
		}
		else if (index == 16)
		{
		cout << "Select quantity of Cucumber in kg to add in your cart: ";
		cin >> quantity;
		total = 70 * quantity;
		checkout("Cucumber", quantity, "kg", total);
		}
		else if (index == 17)
		{
		cout << "Select quantity of Choclate in 100 gm to add in your cart: ";
		cin >> quantity;
		total = 300 * quantity;
		checkout("Chocolate", quantity, "100 gm", total);
		}
		else if (index == 18)
		{
		cout << "Select quantity of chips in units to add in your cart: ";
		cin >> quantity;
		total = 100 * quantity;
		checkout("Chips", quantity, "unit", total);
		}
		else if (index == 19)
		{
		cout << "Select quantity of Biscuits in units to add in your cart: ";
		cin >> quantity;
		total = 50 * quantity;
		checkout("Biscuits", quantity, "unit", total);
		}
		else if (index == 20)
		{
		cout << "Select quantity of SPices in kg to add in your cart: ";
		cin >> quantity;
		total = 120 * quantity;
		checkout("Spices", quantity, "kg", total);
		}
		else if (index == 21)
		{
		cout << "Select quantity of Lentils in kg to add in your cart: ";
		cin >> quantity;
		total = 150 * quantity;
		checkout("Lentils", quantity, "kg", total);
		}
		else if (index == 22)
		{
		cout << "Select quantity of Wheat in kg to add in your cart: ";
		cin >> quantity;
		total = 200 * quantity;
		checkout("Wheat", quantity, "kg", total);
		}
		else if (index == 23)
		{
		cout << "Select quantity of Flour in kg to add in your cart: ";
		cin >> quantity;
		total = 150 * quantity;
		checkout("Flour", quantity, "kg", total);
		}
		else if (index == 24)
		{
		cout << "Select quantity of Rice in kg to add in your cart: ";
		cin >> quantity;
		total = 180 * quantity;
		checkout("Rice", quantity, "kg", total);
		}
		else if (index == 25)
		{
		cout << "Select quantity of Cereal in units to add in your cart: ";
		cin >> quantity;
		total = 600 * quantity;
		checkout("Cereal", quantity, "unit", total);
		}
		else if (index == 26)
		{
		cout << "Select quantity of Shampoo in units to add in your cart: ";
		cin >> quantity;
		total = 550 * quantity;
		checkout("Shampoo", quantity, "unit", total);
		}
		else if (index == 27)
		{
		cout << "Select quantity of Soap in units to add in your cart: ";
		cin >> quantity;
		total = 250 * quantity;
		checkout("Soap", quantity, "unit", total);
		}
		else if (index == 28)
		{
		cout << "Select quantity of Sanitizer in units to add in your cart: ";
		cin >> quantity;
		total = 450 * quantity;
		checkout("Hand Sanitizer", quantity, "unit", total);
		}
		else if (index == 29)
		{
		cout << "Select quantity of Detergent in kg to add in your cart: ";
		cin >> quantity;
		total = 500 * quantity;
		checkout("Detergent", quantity, "kg", total);
		}
		else if (index == 30)
		{
		cout << "Select quantity of Dish Soap in units to add in your cart: ";
		cin >> quantity;
		total = 140 * quantity;
		checkout("Dish Soap", quantity, "unit", total);
		}
		else if (index == 31)
		{
		cout << "Select quantity of Washroom Cleaner in units to add in your cart: ";
		cin >> quantity;
		total = 330 * quantity;
		checkout("Washroom Cleaner", quantity, "unit", total);
		}
	}

	void checkout(string indexx,int quantityy,string unitofmeasure,int totall)
	{
		system("cls");
		cout << "-----Welcome to CheckOut-----" << endl;
		cout << "Following are your order details" << endl;
		cout << "Item Name: " << "\t\t" << indexx << endl;
		cout << "Item Quantity: " << "\t\t" << quantityy << endl;
		cout << "Unit of Measurement: " << "\t" << unitofmeasure << endl;
		cout << "Order Total: " << "\t\t" << totall << endl;

		p->pay(indexx,quantityy,unitofmeasure,totall);

	}

	void Logout()
	{
		cout << "Successfully logged out" << endl;
	}

};



//


class Admin :public User {
public:
	string Email;
	User user;
	ProductCatalog* P;
	//const ProductCatalog& pc;
public:
	void setemail(string e)
	{
		Email = e;
	}

	string getemail()
	{
		return Email;
	}

	Admin()
	{
		Email = ' ';
	}

	Admin(string e)
	{
		Email = e;
	}

	Admin(Admin& obj)
	{
		Email = obj.Email;
	}

	void Register()
	{
		int choice;
		cout << "Admin cannot be registered as they are predefined" << endl;
		cout << "To login as an admin, press 1" << endl;
		cin >> choice;
		if (choice == 1)
		{
			Login();
		}

	}

	void Login()
	{
		int count = 0;
		string user, pass, u, p;
		system("cls");
		cout << "Please enter the following details" << endl;
		cout << "Username :";
		cin >> user;
		cout << "Password :";
		cin >> pass;

		ifstream input("Admin.dat", ios::in);
		while (input >> u >> p)
		{
			if (u == user && p == pass)

			{
				count = 1;
				system("cls");
			}
		}
		input.close();
		if (count == 1)
		{
			cout << "\nHello " << user << "\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
			cin.get();
			cin.get();
			Menu();
		}
		else
		{
			int choice;
			cout << "\nLOGIN ERROR\nPlease check your username and password\n";
			cout << "Press 1 to try and login again" << endl;
			cin >> choice;
			if (choice == 1)
			{
				Login();
			}
		}
	}

	void Menu()
	{
		system("cls");
		int choice;
		cout << "--------Admin Main Menu--------" << endl;
		cout << "Press 1 to register manager" << endl;
		cout << "Press 2 to manage stores" << endl;
		cout << "Press 3 to remove spam accounts" << endl;
		cout << "Press 4 to add products in catalog" << endl;
		cout << "Press 5 to remove products from catalog" << endl;
		cout << "Press 6 to update products in catalog" << endl;
		cout << "Press 7 to logout of the system" << endl;
		cin >> choice;

		if (choice == 1)
		{
			registerManager();
		}
		else if (choice == 2)
		{
			manageStores();
		}
		else if (choice == 3)
		{
			removeSpam();
		}
		else if (choice == 4)
		{
			addProducts();
		}
		else if (choice == 5)
		{
			removeProducts();
		}
		else if (choice == 6)
		{
			updateProducts();
		}
		else if (choice == 7)
		{
			Logout();
		}
		else
			cout << "Wrong choice" << endl;
		cin >> choice;
	}

	void registerManager()
	{
		string name, cnic, password, id, address, phonenum, email;
		bool invalid = false;
		bool same = false;
		Customer c1;
		cout << "Enter username of manager: ";
		cin >> name;
		c1.setName(name);
		cout << "Enter ID of manager: ";
		cin >> id;
		c1.setID(id);
		cout << "Enter Email of manager: ";
		cin >> email;
		c1.setemail(email);
		cout << "Enter 13 digit CNIC of manager: ";
		cin >> cnic;

		do
		{
			invalid = false;
			for (int i = 0; cnic[i] != '\0'; i++)
			{
				if (cnic[i] < 48 || cnic[i] > 57) {
					invalid = true;
					break;
				}
			}
			if (cnic.length() != 13)
			{
				invalid = true;
			}
			if (invalid == true)
			{
				cout << "The CNIC you entered is invalid please enter again : ";
				cin >> cnic;
			}
		} while (invalid == true);

		do
		{
			same = false;
			ifstream fin("Managers.dat");
			while (fin.read((char*)&user, sizeof(user))) {
				string strtemp = user.getCNIC();
				if (cnic == strtemp)
				{
					same = true;
					break;
				}
			}
			fin.close();
			if (same == true)
			{
				cout << "The CNIC you entered is already in use please enter another : ";
				cin >> cnic;
				do
				{
					invalid = false;
					for (int i = 0; cnic[i] != '\0'; i++)
					{
						if (cnic[i] < 48 || cnic[i] > 57) {
							invalid = true;
							break;
						}
					}
					if (cnic.length() > 13)
					{
						invalid = true;
					}
					if (invalid == true)
					{
						cout << "The CNIC you entered is invalid please enter again : ";
						cin >> cnic;
					}
				} while (invalid == true);
			}
		} while (same == true);



		c1.setCNIC(cnic);

		cout << "Enter password of manager: ";
		cin >> password;
		c1.setPassword(password);
		cout << "Enter phone number of manager: ";
		cin >> phonenum;
		c1.setphoneNum(phonenum);
		cout << "Enter address of manager: ";
		cin >> address;
		c1.setAddress(address);


		ofstream myFile;
		myFile.open("Managers.dat", ios::app);
		myFile << name << " " << password << " " << id << " " << cnic << " " << address << " " << phonenum << " " << email << endl;
		myFile.close();
		system("cls");
		cout << "Manager Registration Successful" << endl;
		cout << "Manager can now login using these credentials" << endl;
	}

	void manageStores()
	{
		int option, option2;
		cout << "Which store do you want to manage?" << endl;
		cout << "Press 1 for Karachi, 2 for Lahore or 3 for Islamabad" << endl;
		cin >> option;
		if (option == 1)
		{
			cout << "Press 1 to add, 2 to update and 3 to delete products from catalog" << endl;
			cin >> option2;
			if (option2 == 1)
			{
				cout << "Product catalog is same for all stores" << endl;
			}
			else if (option2 == 2)
			{
				cout << "Product catalog is same for all stores" << endl;
			}
			else if (option2 == 3)
			{
				cout << "Product catalog is same for all stores" << endl;
			}

		}
		else if (option == 2)
		{
			cout << "Press 1 to add, 2 to update and 3 to delete products from catalog" << endl;
			cin >> option2;
			if (option2 == 1)
			{
				cout << "Product catalog is same for all stores" << endl;
			}
			else if (option2 == 2)
			{
				cout << "Product catalog is same for all stores" << endl;
			}
			else if (option2 == 3)
			{
				cout << "Product catalog is same for all stores" << endl;
			}
		}
		else if (option == 3)
		{
			cout << "Press 1 to add, 2 to update and 3 to delete products from catalog" << endl;
			cin >> option2;
			if (option2 == 1)
			{
				cout << "Product catalog is same for all stores" << endl;
			}
			else if (option2 == 2)
			{
				cout << "Product catalog is same for all stores" << endl;
			}
			else if (option2 == 3)
			{
				cout << "Product catalog is same for all stores" << endl;
			}
		}
	}
	void removeSpam()
	{
		int option;
		cout << "Press 1 to remove spam customer accounts" << endl;
		cin >> option;
		if (option == 1)
		{
			cout << "All duplicate customer accounts were removed" << endl;
		}
	}
	void addProducts()
	{
		char name[50];
		double price;
		cout << "Enter the name of product you want to add" << endl;
		cin >> name;
		cout << "Enter the price of the product" << endl;
		cin >> price;
		cout << "A new product " << name << " with price " << price << " was added to the catalog" << endl;
	}
	void removeProducts()
	{
		char name[50];
		cout << "Enter the name of product you want to remove" << endl;
		cin >> name;
		cout << name << " was removed from the catalog" << endl;
	}
	void updateProducts()
	{
		int option;
		char oldname[50], newname[50], name[50];
		double oldprice, newprice;
		cout << "Update name or price of product?" << endl;
		cout << "press 1 to update name or 2 to update price of product" << endl;
		cin >> option;
		if (option == 1)
		{
			cout << "Enter old name of product" << endl;
			cin >> oldname;
			cout << "Enter new name of product" << endl;
			cin >> newname;
			cout << "Update Successful. Name of " << oldname << " changed to " << newname << endl;
		}
		else if (option == 2)
		{
			cout << "Enter the name of product" << endl;
			cin >> name;
			cout << "Enter old price of product" << endl;
			cin >> oldprice;
			cout << "Enter new price of product" << endl;
			cin >> newprice;
			cout << "Update Successful. " << name << "'s price updated from " << oldprice << " to " << newprice << endl;
		}
	}

	void Logout()
	{
		cout << "Sucessfully Logged Out" << endl;
	}


};


//class checkoutSimulation : public Payment{};//aggregated to admin
//

//
// class Store {}; //dont know 

//class Feedback {};//inherited from manager i think
//
//class OnlineShopping {};//aggregated to customer
//
//class Payment {};//composition to Online Shopping
//
//class BankTransfer :public Payment {};
//
//class E_Transfer :public Payment {};
//
//class CashOnDelivery :public Payment {};


