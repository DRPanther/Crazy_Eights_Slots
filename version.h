#ifndef VERSION_H
#define VERSION_H

	//Date Version Types
	static const char DAY[] = "05";
	static const char MONTH[] = "10";
	static const char YEAR[] = "2020";
	static const char UBUNTU_VERSION_STYLE[] =  "20.09";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 3;
	static const long BUILD  = 5;
	static const long REVISION  = 29;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 27;
	#define RC_FILEVERSION 0,3,5,29
	#define RC_FILEVERSION_STRING "0, 3, 5, 29\0"
	static const char FULLVERSION_STRING [] = "0.3.5.29";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 12;
	

#endif //VERSION_H
