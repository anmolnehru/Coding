#include<std/clib.h>


int process(string inp, map<string,string> lookup)
{
	
string temp = lookup[inp];

return atoi(temp);

}


int main()
{
	string input = "ORA-B";
	
	typedef struct{
	string input;
	string mapped;
	string message;
	string desc;
	} output;

	vector<string> data = {ORA-A = 1000
ORA-B = 2000 : some message.
ORA-C = 3000 : another message. :: some description.
ORA-D = 4000 :: another description};
;


	map<string,string> lookup;

	//iterate over data and build lookup
	for(int i = 0; i  < data.size() ; i++) //0, 4
	{
		//get the input string for the map
		//string temp;
		int pos = data[i].find("=");  //ORA-A = 1000, pos = 6
		int intpos = pos + 1; // intpos  = 7

		pos--; //now should point to char before the "=" //pos = 5
		while(data[i][pos] == " ")
			pos--;

		//pos = 4
		//now we should have pos to end of ORA-A
		string temp = data[i].substr(0,pos); //temp = ORA-A
		//insert into map

		int ints = intpos;

		while(data[i][intpos] != " " && data[i][intpos] != ":" && data[i][intpos]  != "::" && intpos < data[i].size())
			intpos++;

		int inte = intpos;

		string val = data[i].substr(ints, inte-ints +1);


		//insert into lookup the data point
		lookup[temp] = value;

	}
	
	int out = process(input, lookup);
}