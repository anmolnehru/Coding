//amazon.cpp

  vector<string> getDirectFriendsForUser(string user)
 
  vector<string> getAttendedCoursesForUser(string user)
 
 /*
 * Complete the function below.
 */


using namespace std;

vector<string> getRankedCourses(string user) {

vector<string> first_level = getDirectFriendsForUser(user); //first level of friends


//for reserving size for vector of total friends (1st and 2nd) of user
size_t total_size; 


//finding the size of vector needed to store all friends(including possibly duplicates)
for(int i=0;i<first_level.length();i++)
	{
		//vector<string> second_level += getDirectFriendsForUser(first_level);
		total_size+=sizeof(getDirectFriendsForUser(first_level[i]));
	}



vector<string> total_friends; //declaring for list of all friends of user(might contain duplicates)

total_friends.reserve(total_size); //preallocate memory to the final total friends list


//populate total_friends vector
for(int i=0;i<first_level.length();i++)
	{
		insert(total_friends.end(),getDirectFriendsForUser(first_level[i]);
	}

	//Removing the duplicates from the list total_friends	

	total_friends.erase(unique(total_friends.begin(), total_friends.end()), total_friends.end()); //should have the unique list now

	
	//nOW i have a unique list of friends of the user queried.
	//output all the courses taken by this people list 
	//return reverse sorted order of the number of times a course appears

	size_t number_of_distinct_friends=total_friends.length(); //number of distinct friends of the user queried

	//create a array of strings of course IDs of individual user, and 
	

	 map<string, int> wordCount; //create a unordered map of word and it's frequency

     for(int i=0;i<number_of_distinct_friends;i++)
     	{	

     		//put courses of the iterated friend in temp
     		string temp=getAttendedCoursesForUser(total_friends[i]);
     		int temp_length=temp.length();
     		//iterate over all courses of this friend and increment count
     		for(i=0;i<temp_length;i++)
     		{
     			++wordCount[temp[i]];
    		}
     	}


     	//now the map wordcount should have a table of the course IDs with key as their frequencies
     	//time to sort them by the value(frequencies) nd list them in descending order

     	// My approach to doing it would be to emit the 'int' column(the values ) into a vector and 
     	//sort it and then do a scan back on the map and create a vector of most frequently used words.



    vector <int> frequency;

    for( map<string,int>::iterator it = wordCount.begin(); it != wordcount.end(); ++it ) {
    	frequency.push_back( it->second);
    }


    //vector frequency has all the frequencies //repeated and not sorted

    sort(frequency.begin(),frequency.end()); //sorted
    reverse(frequency.begin(),frequency.end()); //sorted descending

    unique(frequency.begin(),frequency.end()); //made unique as we one value of a repeated frequency suffices too


    //use the frequency vector to traverse the original map and return values to a list

    vector<string> output;
    for(int i=0;i<frequency.length();i++)
    {
    	 for( map<string,int>::iterator it = wordCount.begin(); it != wordcount.end(); ++it ) {
    	if(frequency[i]==it->second) //frequency matches
    		

    }

    }



}
         


     
}






}

    
    
    
    
    
    
