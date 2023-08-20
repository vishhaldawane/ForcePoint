//============================================================================
// Name        : PureVirtualFunctionsProject.cpp
// Author      : Vishhal
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class StringBasedMusicalInstrument {
public:
	StringBasedMusicalInstrument() {
		cout<<"\nStringBasedMusicalInstrument()...";
	}

	virtual void tuneStrings()=0; // =0 means pure virtual function / abstract function in C# or Java

	//non-virtual destructor
	virtual  ~StringBasedMusicalInstrument() {
		cout<<"\n~StringBasedMusicalInstrument().....";
	}
};

class Guitar : public StringBasedMusicalInstrument {
public:
	Guitar() {
		cout<<"\nGuitar()....";
	}
	~Guitar() {
		cout<<"\n~Guitar()....";
	}
	void pluck() {
		cout<<"\nPlucking the Guitar...";
	}

	void tuneStrings() { //abc is not a standard name for tuning guitar strings..
		cout<<"\nTunning the guitar strings...";
	}
};
int main() {
	cout << "!!!Hello Interfaces and Abstract Classes!!!" << endl; // prints !!!Hello World!!!

	StringBasedMusicalInstrument *guitar;
	guitar = new Guitar();
//	guitar->pluck();
	guitar->tuneStrings();
	delete guitar;
	guitar=NULL;

	/*Guitar git;
	git.pluck();
	git.tuneStrings();
	return 0;*/
}
/*
 * 	A pure virtual function is a partial contract
 * 	of a class
 *
 *
 *
 *
 *
 *
 * 			Light <-- purest definition, it doesnt have its opposite
 * 			|   Does Sun Knows the darkness
 * ----------------------------------------------------------------
 * |				|			|			|			|
 * Sun				Moon		Tube		Candle		Bulb
 * |				|				|		|				|
 * Sunlight			MoonLight	TubeLight	CandleLight	BulbLight .... ....
 *
 *
 * 		Game
 * 		|play(); <-- 	   interface           to create joy
 * 	-------------
 * 	|			|
 * 	InDoor		OutDoor <-- abstract class		to create joy , but where???
 * 	|			|
 *Chess		 FootBall 	<-- concrete class

  framework = "semi developed" application


  1.Inheritance of derivation
  	  	  	  function overriding is not mandatory

  2.Inheritance of implementation
			a mandate to implement a function

  	  	  	  	  1	  	  	  	  	  	  	  	  	  	  	  Instrument <-- pure one - Interface - pure abstract class
  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  | use(); <-- pure virtual function = it doesn't have its code body
  	  	  	  	  	  	  	  	  	  ----------------------------------------------------
  	  	  	  	  	  	  	  	  	  |													|
  	  	  	  	2  	  	  	  	  MusicalInstrument										MedicalInstrument
  	  	  	 	 	 	 	 	 	 | play();	//pure virtual											|operate();
  	  	-------------------------------------------------------------							----------------------------
  	  	|						|							|									|							|
 3 StringBasedMusicalInstrument	AirBasedMusicalInstrument	DrumBasedMusicaInsturment		SurgicalMedicalInstrument	PathalogicalMedicalInstrument
   |tuneStrings(); pure-virtual			|checkAirFlow();				|tuneTheSurface()			|sterilize();				|readOrCountOrMeasure();
 ----------------					-----------------			--------------------			----------------			-------------------
   |			|					|		|		|			|		|						|		|					|			|
4  Guitar		Violin				Flute	Trumpet Saxophone	Drums	Duff				Cutter		Needle			GlucoMeter	ECGMachine
   |pluck(){}		|bowing()																   cut()		stitch();	readSugar()	  readHeartBeats()
   |				|
5 Electronic	 Cello
 Guitar
 |
 presets()



 */
