#ifndef VERSION_H
#define VERSION_H

	//Date Version Types
	static const char DATE[] = "17";
	static const char MONTH[] = "09";
	static const char YEAR[] = "2020";
	static const char UBUNTU_VERSION_STYLE[] =  "20.09";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 0;
	static const long MINOR  = 5;
	static const long BUILD  = 6;
	static const long REVISION  = 10;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 46;
	#define RC_FILEVERSION 0,4,6,10
	#define RC_FILEVERSION_STRING "0, 4, 6, 10\0"
	static const char FULLVERSION_STRING [] = "0.4.6.10";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 4;
	

#endif //VERSION_H
